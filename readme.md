CPU Scheduler Project
Project Description
This project implements a CPU scheduler in C++ that simulates various scheduling algorithms including FCFS, SJN, Priority Scheduling, and Round-Robin. 

Dependencies:
- g++ compiler
- make

Internal Working
The project consists of the following main components:

1. Task Class (`task.h`): This class represents a process with attributes like ID, burst time, priority, and arrival time.

2. Scheduler Class (`scheduler.h`, `scheduler.cpp`): This class manages tasks and implements multiple scheduling algorithms:
- FCFS (First-Come, First-Served): Processes are executed in the order they arrive.
- SJN (Shortest Job Next): Processes with the shortest burst time are executed first.
- Priority Scheduling: Processes with the highest priority are executed first.
- Round-Robin (RR): Processes are executed in a cyclic order with a fixed time quantum.
- Multilevel Queue: Processes are divided into high-priority and low-priority queues and executed accordingly.

3. Main Function (`main.cpp`): This file contains the main function to test the scheduler with a set of predefined tasks.

Learning Takeaways
1. Gained a deep understanding of various CPU scheduling algorithms and their implementations.
2. Learned how to organize and manage a C++ project with multiple files and classes.
3. Gained experience in integrating a C++ backend with a web-based frontend.
4. Improved skills in using build tools like Makefile for compiling and managing the project.
5. Enhanced understanding of how to visualize scheduling algorithms and their performance metrics.


