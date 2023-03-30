FROM ubuntu

RUN apt-get -y update
RUN apt-get -y install build-essential cmake clang vim git python3 python3-pip python-is-python3 creduce csmith g++ m4


RUN pip install diopter

WORKDIR /home

RUN git clone https://github.com/csmith-project/csmith.git

WORKDIR /home/csmith

RUN mkdir build 

RUN cmake -DCMAKE_INSTALL_PREFIX=/home/csmith/build .
RUN make && make install

#TODO check if this has to be done as entrypoint
RUN export PATH=$PATH:/home/csmith/build/bin 