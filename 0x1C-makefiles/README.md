Makefile in C programming language


This README provides a brief overview of the Makefile for C programming projects. The Makefile automates the compilation and linking process, simplifying project management.

Prerequisites
============
============


C compiler (e.g., gcc)
Make build tool

Usage
=====
=====

Place the Makefile in the project's root directory.
Open a terminal and navigate to the project directory.
Run make to build the project.
Use make clean to remove generated files.

Example Makefile


CC = gcc
CFLAGS = -Wall -Werror
EXECUTABLE = program

all: $(EXECUTABLE)

$(EXECUTABLE): *.c
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -rf *.o $(EXECUTABLE)


makefiles simply automates the the complation and  linking process.
