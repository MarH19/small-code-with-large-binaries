import os
import csv
from datetime import datetime, timedelta
from pathlib import Path

# current_saver = None
class ProgressiveSaver():
    def __init__(
            self,
            initial_code: str,
            initial_ratio,
            csmith_parameters=None,
        ):
        # global current_saver
        # current_saver = self
        # get current timestamp in the format YYYY-MM-DD-HH-MM-SS
        self.timestamp = datetime.now().strftime("%Y-%m-%d_%H-%M-%S")
        self.folder_name = os.path.join(os.path.abspath(os.getcwd()),f"outputs/test_run-{self.timestamp}")
        self.initial_ratio = initial_ratio
        self.current_test_ratios = []
        self.last_snapshot_time = datetime.now()
        self.snapshot_id = 0

        # create folder if it does not exist
        if not os.path.exists(self.folder_name):
            os.makedirs(self.folder_name)
            print(f"Created folder {self.folder_name}")

        
        if csmith_parameters is not None:
            filename_initial = f"initial-csmith-{self.timestamp}.c"
            filename_csmith = "CSMITH_parameters.txt"
            with open(os.path.join(self.folder_name, filename_csmith), "w") as f:
                # write CSMITH parameters to file
                for i in csmith_parameters:
                    f.write(f"{i}\n")
        else:
            filename_initial = f"initial-recved-{self.timestamp}.c"
            
        # add initial code to created folder
        with open(os.path.join(self.folder_name, filename_initial), "w") as f:
            # write C code to file
            f.write(initial_code)


        with open(os.path.join(self.folder_name,'info.csv'), 'w', newline='\n') as csvfile:
            # Create a writer object
            writer = csv.writer(csvfile,delimiter=",")
            # Write the column names to the CSV file
            writer.writerow(['test functions','initial ratio','final ratio','improvement'])


    # We use this function while runnig a test, to save the progress of the ratio, as well as progressively saving the generated code   
    def save_test_substep(self, test_function_name:str, code:str, current_ratio):
        snapshot_folder = os.path.join(self.folder_name, f"snapshots-{test_function_name}")
        if not os.path.exists(snapshot_folder):
            os.makedirs(snapshot_folder)

        #outputs/test_run_121212/snapshots_test_i/report.csv
        with open(os.path.join(snapshot_folder,'report.csv'), 'a', newline='\n') as csvfile:
            writer = csv.writer(csvfile,delimiter=",")
            writer.writerow([current_ratio])
        csvfile.close()

        #outputs/test_run_121212/snapshots_test_i/snapshot_i
        if datetime.now() >= self.last_snapshot_time + timedelta(minutes=5):
            with open(os.path.join(os.path.join(snapshot_folder, f"snapshot-{self.snapshot_id}.c")), "w") as f:
                f.write(code)
            self.snapshot_id += 1
            self.last_snapshot_time = datetime.now()

    def save_test(self, test_function_name: str, generated_code, obtained_ratio):
        row = [test_function_name, self.initial_ratio, obtained_ratio, obtained_ratio/self.initial_ratio]

        # add all generated codes into the created folder
        filename_gen = f"generated-{test_function_name}.c"
        with open(os.path.join(self.folder_name, filename_gen), "w") as f:
            f.write(generated_code)
        
        with open(os.path.join(self.folder_name,'info.csv'), 'a', newline='\n') as csvfile:
            writer = csv.writer(csvfile,delimiter=",")
            # Write the row to the CSV file 
            writer.writerow(row)

        self.current_test_ratios = []
        self.snapshot_id = 0
        self.last_snapshot_time = datetime.now()

if __name__ == "__main__":
    code = "csmith_adsada"
    code_1 = "generated_1"
    code_2 = "generated_2"

    ratio = 0.1
    ratio_1 = 0.8
    ratio_2 = 1.1


    csmith_params = ["ds","dsfdf","fsd","sfsdf","sdf"]
    saver = ProgressiveSaver(code,ratio, csmith_params)

    saver.save_test("test_1",code_1,ratio_1)
    saver.save_test_substep("bobby_tables", "i=0; i=1;", 0.1)
    saver.save_test_substep("bobby_tables", "i=0; i=1;", 0.2)
    saver.save_test_substep("bobby_tables", "i=0; i=1;", 0.3)
    saver.save_test("test_2",code_2,ratio_2)


    




        



