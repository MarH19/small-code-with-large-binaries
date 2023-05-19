import pandas as pd
from bokeh.plotting import figure, show
from bokeh.io import output_notebook

# Read the CSV files
test0 = pd.read_csv("C:/Users/marco/ast_largebinaries_smallcode/project/outputs/test_run-2023-05-19_15-21-19/snapshots-test_0/report.csv", header=None, names=['val'])
test1 = pd.read_csv("C:/Users/marco/ast_largebinaries_smallcode/project/outputs/test_run-2023-05-19_15-21-19/snapshots-test_1/report.csv", header=None, names=['val'])
test3 = pd.read_csv("C:/Users/marco/ast_largebinaries_smallcode/project/outputs/test_run-2023-05-19_15-21-19/snapshots-test_3/report.csv", header=None, names=['val'])
test4 = pd.read_csv("C:/Users/marco/ast_largebinaries_smallcode/project/outputs/test_run-2023-05-19_15-21-19/snapshots-test_4/report.csv", header=None, names=['val'])
test5 = pd.read_csv("C:/Users/marco/ast_largebinaries_smallcode/project/outputs/test_run-2023-05-19_15-21-19/snapshots-test_5/report.csv", header=None, names=['val'])
test6 = pd.read_csv("C:/Users/marco/ast_largebinaries_smallcode/project/outputs/test_run-2023-05-19_15-21-19/snapshots-test_6/report.csv", header=None, names=['val'])
test7 = pd.read_csv("C:/Users/marco/ast_largebinaries_smallcode/project/outputs/test_run-2023-05-19_15-21-19/snapshots-test_7/report.csv", header=None, names=['val'])
# Create a new Bokeh figure
p = figure(title="Multi-Line Plot", x_axis_label="Time", y_axis_label="Ratio")

# Plot each DataFrame as a separate line
p.line(test0.index, test0['val'], legend_label="No restriction", line_color="blue")
p.line(test1.index, test1['val'], legend_label="Minimum lines of code", line_color="red")
p.line(test3.index, test3['val'], legend_label="AST", line_color="green")
p.line(test4.index, test4['val'], legend_label="AST different measure metric", line_color="orange")
p.line(test5.index, test5['val'], legend_label="AST without unused variables", line_color="purple")
p.line(test6.index, test6['val'], legend_label="Static annotator", line_color="brown")
p.line(test7.index, test7['val'], legend_label="Test 7", line_color="yellow")
# Enable Bokeh notebook output
#output_notebook() #only with jupyter notebook

# Show the plot
show(p)
