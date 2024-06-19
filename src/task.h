#ifndef TASK_H
#define TASK_H

class Task {
public:
    int id;
    int burstTime;
    int priority;
    int arrivalTime;

    Task(int id, int burstTime, int priority, int arrivalTime)
        : id(id), burstTime(burstTime), priority(priority), arrivalTime(arrivalTime) {}
};

#endif // TASK_H