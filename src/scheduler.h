#ifndef SCHEDULER_H
#define SCHEDULER_H

#include "task.h"
#include <vector>
#include <queue>

class Scheduler {
public:
    std::vector<Task> tasks;

    void addTask(Task task) {
        tasks.push_back(task);
    }

    void fcfs();
    void sjn();
    void priorityScheduling();
    void roundRobin(int quantum);
    void multilevelQueue();

    void displayStats();
};

#endif // SCHEDULER_H