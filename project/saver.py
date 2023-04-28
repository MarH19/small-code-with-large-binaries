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
    column_names = ['CSMITH parameters','test functions','initial ratio','final ratio','improvement']

    # Create a list of values, where each value is a list representing a row of data
    rows = [[csmithparameters], [test_functions], [initial_ratio],[ratio],[improvements]]

    # Open a CSV file for writing
    with open('info.csv', 'w', newline='') as csvfile:
        # Create a writer object
        writer = csv.writer(csvfile)
        # Write the column names to the CSV file
        writer.writerow(column_names)
        # Write the rows to the CSV file
        for row in rows:
            writer.writerow(row)

    




        



