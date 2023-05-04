Start a new container with `sudo docker-compose up`

Open a new terminal and run `sudo docker exec -it dockerproject_diopter_1 bash`

If you run the example from Diopter (`git clone https://github.com/DeadCodeProductions/diopter.git`), remember:

Line 64: `p = CSmithGenerator(sanitizer,include_path="/home/csmith/build/include").generate_program()`

Ensure that when running on a local machine the environment variable `CSMITH_H_PATH=/home/csmith/build/include` is set to the location of the .h file for csmith. (On chris's machine it is at /home/chris/.bin/csmith/build/include, the docker file already sets it up)

Line65: remove
