import os
import csv
from datetime import datetime

def save_output(initialcode, csmithparameters: list, generatedcode, test_functions: list, initial_ratio,ratio: list):
    # get current timestamp in the format YYYY-MM-DD-HH-MM-SS
    timestamp = datetime.now().strftime("%Y-%m-%d_%H-%M-%S")
    folder_name = f"outputs/test_run-{timestamp}"
    
    # create folder if it does not exist
    if not os.path.exists(folder_name):
        os.makedirs(folder_name)
        print(f"Created folder {folder_name}")

    filename_initial = f"initial-{timestamp}.c"
    # add initial code to created folder
    with open(os.path.join(folder_name, filename_initial), "w") as f:
        # write C code to file
        f.write(initialcode)
    
    filename_csmith = "CSMITH_parameters.txt"
    with open(os.path.join(folder_name, filename_csmith), "w") as f:
        # write CSMITH parameters to file
        for i in csmithparameters:
            f.write(i)


    # add all generated codes into the created folder
    for idx, i in enumerate(generatedcode):
        filename_gen = f"generated-{idx}.c"
        with open(os.path.join(folder_name, filename_gen), "w") as g:
            # write C code to file
            g.write(i)
    
    improvements = []
    for i in ratio:
        improvements.append(i/initial_ratio)

    # Define the column names
    column_names = ['test functions','initial ratio','final ratio','improvement']

    # create list with length of the test functions and value initial_ratio
    init_ratio = [initial_ratio for i in range(len(test_functions))]
    
    # Create a list of values, where each value is a list representing a row of data
    rows = [test_functions, init_ratio,ratio,improvements]

    # Open a CSV file for writing
    with open(os.path.join(folder_name,'info.csv'), 'w', newline='\n') as csvfile:
        # Create a writer object
        writer = csv.writer(csvfile,delimiter=",")
        # Write the column names to the CSV file
        writer.writerow(column_names)
        # Write the row to the CSV file 
        for idx,i in enumerate(test_functions):
            elements = [row[idx] for row in rows]
            writer.writerow(elements)

if __name__ == "__main__":
    code = "adsada"
    csmith = ["ds","dsfdf","fsd","sfsdf","sdf"]

    save_output(code, csmith, [code, code],["test 1", "test 2"], 0.4, [0.1, 0.15])

    




        



