cmake_minimum_required(VERSION 3.23)
project(data_structure C)

set(CMAKE_C_STANDARD 99)

add_executable(data_structure 01-seqlist/seqlist.h 01-seqlist/seqlist.c 02-seqstack/seqstack.h 02-seqstack/seqstack.c 03-seqqueue/seqqueue.h 03-seqqueue/seqqueue.c 04-slinklist/slinklist.h 04-slinklist/slinklist.c 05-hlinklist/hlinklist.h 04-slinklist/hlinklist.c)
