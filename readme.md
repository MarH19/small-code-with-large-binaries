### Running the code
**Before starting any run** ensure that you only enable the test functions you want to run. If you decide to use all of them you will have to wait multiple hours. **Results are only saved at the end of each test!**

Make sure to install all required dependencies, as well as running `export CSMITH_H_PATH=/home/csmith/build/include`, adapting the location based on your machine.
1. Select what test functions to run by editing `reduction_functions.py`. Comment in the tests you want to perform in the `test_function_dict` dictionary.
2. Start the reduction process by running `python project/inital_reducer.py`

**Flags**
You can use the following flags when performing reductions:
- `python project/inital_reducer.py -f filename.c` This allows you to pass a file as input to the reduction algorithm, instead of generating code with csmith
- `python project/inital_reducer.py -t` Trace option, saves a snapshots-test#/report.csv file which contains the ratio reached at each reduction step. It also saves the reduced code every 5 minutes n the same folder.

### Helper functions
To get the AST for any of the generated .c code  run `python ast_parser -f filepath/filename.c`


### Setting up docker container
Start a new container with `sudo docker-compose up`

Open a new terminal and run `sudo docker exec -it dockerproject_diopter_1 bash`

If you run the example from Diopter (`git clone https://github.com/DeadCodeProductions/diopter.git`), remember:

Line 64: `p = CSmithGenerator(sanitizer,include_path="/home/csmith/build/include").generate_program()`

Ensure that when running on a local machine the environment variable `CSMITH_H_PATH=/home/csmith/build/include` is set to the location of the .h file for csmith. (On chris's machine it is at /home/chris/.bin/csmith/build/include, the docker file already sets it up)
