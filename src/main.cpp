#include "scheduler.h"
#include <iostream>

int main() {
    Scheduler scheduler;
    scheduler.addTask(Task(1, 10, 2, 0));
    scheduler.addTask(Task(2, 5, 1, 2));
    scheduler.addTask(Task(3, 8, 3, 1));

    std::cout << "FCFS Scheduling:" << std::endl;
    scheduler.fcfs();

    std::cout << "\nSJN Scheduling:" << std::endl;
    scheduler.sjn();

    std::cout << "\nPriority Scheduling:" << std::endl;
    scheduler.priorityScheduling();

    std::cout << "\nRound Robin Scheduling with Quantum 3:" << std::endl;
    scheduler.roundRobin(3);

    Uncomment when multilevelQueue implementation is ready
    std::cout << "\nMultilevel Queue Scheduling:" << std::endl;
    scheduler.multilevelQueue();

    return 0;
}
