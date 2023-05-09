### Running the code
*Before starting any run* ensure that you only enable the test funcitons you want to run. If you decide to use all of them you will have to wait multiple hours. *Results are only saved at the end of the run!*

Make sure to install all required dependencies, as well as running `export CSMITH_H_PATH=/home/csmith/build/include`, adapting the location based on your machine.
To select what test functions to run open `reduction_functions.py` and comment in the tests you want to perform in the `test_function_dict` dictionary.
Start the reduction process by launching `inital_reducer.py`.


### Setting up docker container
Start a new container with `sudo docker-compose up`

Open a new terminal and run `sudo docker exec -it dockerproject_diopter_1 bash`

If you run the example from Diopter (`git clone https://github.com/DeadCodeProductions/diopter.git`), remember:

Line 64: `p = CSmithGenerator(sanitizer,include_path="/home/csmith/build/include").generate_program()`

Ensure that when running on a local machine the environment variable `CSMITH_H_PATH=/home/csmith/build/include` is set to the location of the .h file for csmith. (On chris's machine it is at /home/chris/.bin/csmith/build/include, the docker file already sets it up)
