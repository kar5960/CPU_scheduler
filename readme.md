CPU Scheduler Project
Project Description
This project implements a CPU scheduler in C++ that simulates various scheduling algorithms including FCFS, SJN, Priority Scheduling, and Round-Robin. The project also includes a web-based frontend to visualize and interact with the scheduler, providing a user-friendly way to demonstrate and analyze the scheduling decisions.
How to Run the Project
1. Clone the repository: `git clone <repository-url>`
2. Navigate to the `cpu-scheduler-project` directory.
3. Run `make` to build the project.
4. Execute the `scheduler` binary to run the simulation: `./scheduler`
5. Open `frontend/index.html` in a web browser to use the frontend.

Dependencies:
- g++ compiler
- make
- A web browser to run the frontend

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

4. Frontend (`index.html`, `style.css`, `script.js`): A simple web interface to input tasks and visualize the scheduling results.

Learning Takeaways
1. Gained a deep understanding of various CPU scheduling algorithms and their implementations.
2. Learned how to organize and manage a C++ project with multiple files and classes.
3. Gained experience in integrating a C++ backend with a web-based frontend.
4. Improved skills in using build tools like Makefile for compiling and managing the project.
5. Enhanced understanding of how to visualize scheduling algorithms and their performance metrics.

Resources/References
1. Operating System Concepts by Silberschatz, Galvin, and Gagne
2. C++ Primer by Lippman, Lajoie, and Moo
3. Mozilla Developer Network (MDN) for web development documentation
4. Online tutorials and documentation for Makefile and C++ project structure

