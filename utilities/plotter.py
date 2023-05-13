import pandas as pd
from bokeh.plotting import figure, show, curdoc
from bokeh.models import LogAxis

# relative paths not working on my laptop..
test0 = pd.read_csv("C:/Users/marco/ast_largebinaries_smallcode/project/outputs/test_run-2023-05-11_21-56-19/snapshots-test_0/report.csv",header=None,names=['val'])
test0 = test0.reset_index()
test1 = pd.read_csv("C:/Users/marco/ast_largebinaries_smallcode/project/outputs/test_run-2023-05-11_21-56-19/snapshots-test_1/report.csv",header=None,names=['val'])
test1 = test0.reset_index()
test3 = pd.read_csv("C:/Users/marco/ast_largebinaries_smallcode/project/outputs/test_run-2023-05-11_21-56-19/snapshots-test_3/report.csv",header=None,names=['val'])
test3 = test0.reset_index()
test4 = pd.read_csv("C:/Users/marco/ast_largebinaries_smallcode/project/outputs/test_run-2023-05-11_21-56-19/snapshots-test_4/report.csv",header=None,names=['val'])
test4 = test0.reset_index()
test5 = pd.read_csv("C:/Users/marco/ast_largebinaries_smallcode/project/outputs/test_run-2023-05-11_21-56-19/snapshots-test_5/report.csv",header=None,names=['val'])
test5 = test0.reset_index()
test6 = pd.read_csv("C:/Users/marco/ast_largebinaries_smallcode/project/outputs/test_run-2023-05-11_21-56-19/snapshots-test_6/report.csv",header=None,names=['val'])
test6 = test0.reset_index()

# inserted a logarithmic scale
p = figure(title="", x_axis_label="time", y_axis_label="ratio",y_axis_type="log") #
p.background_fill_color = "gainsboro"
curdoc().theme = 'caliber'

# check to see if csv values are identical or not
print(test0.val.eq(test5.val).sum())
print(len(test5.val))

p.line(test0.index, test0.val, legend_label="Test 0", line_width=2,color="red")
p.line(test1.index, test1.val, legend_label="Test 1", line_width=2,color="peru")
p.line(test3.index, test3.val, legend_label="Test 3", line_width=2,color="yellow")
p.line(test4.index, test4.val, legend_label="Test 4", line_width=2,color="green")
p.line(test5.index, test5.val, legend_label="Test 5", line_width=2,color="blue")
p.line(test6.index, test6.val, legend_label="Test 6", line_width=2,color="gray")
p.yaxis[0] = LogAxis()
#show(p)