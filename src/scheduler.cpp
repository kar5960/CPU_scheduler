#include "scheduler.h"
#include <algorithm>
#include <iostream>
#include <queue>

void Scheduler::fcfs() {
    std::sort(tasks.begin(), tasks.end(), [](const Task &a, const Task &b) {
        return a.arrivalTime < b.arrivalTime;
    });
    displayStats();
}

void Scheduler::sjn() {
    std::sort(tasks.begin(), tasks.end(), [](const Task &a, const Task &b) {
        return a.burstTime < b.burstTime;
    });
    displayStats();
}

void Scheduler::priorityScheduling() {
    std::sort(tasks.begin(), tasks.end(), [](const Task &a, const Task &b) {
        return a.priority < b.priority;
    });
    displayStats();
}

void Scheduler::roundRobin(int quantum) {
    std::queue<Task> taskQueue;
    for (const auto &task : tasks) {
        taskQueue.push(task);
    }

    int time = 0;
    while (!taskQueue.empty()) {
        Task task = taskQueue.front();
        taskQueue.pop();

        if (task.burstTime > quantum) {
            time += quantum;
            task.burstTime -= quantum;
            taskQueue.push(task);
        } else {
            time += task.burstTime;
            task.burstTime = 0;
        }
    }
    displayStats();
}

void Scheduler::multilevelQueue() {
    // Create two queues: high-priority and low-priority
    std::queue<Task> highPriorityQueue;
    std::queue<Task> lowPriorityQueue;

    // Assume priority < 3 is high-priority
    for (const auto &task : tasks) {
        if (task.priority < 3) {
            highPriorityQueue.push(task);
        } else {
            lowPriorityQueue.push(task);
        }
    }

    // Process all tasks in the high-priority queue first
    while (!highPriorityQueue.empty()) {
        Task task = highPriorityQueue.front();
        highPriorityQueue.pop();
        std::cout << "High Priority Task ID: " << task.id << " Burst Time: " << task.burstTime << " Priority: " << task.priority << " Arrival Time: " << task.arrivalTime << std::endl;
    }

    // Process all tasks in the low-priority queue next
    while (!lowPriorityQueue.empty()) {
        Task task = lowPriorityQueue.front();
        lowPriorityQueue.pop();
        std::cout << "Low Priority Task ID: " << task.id << " Burst Time: " << task.burstTime << " Priority: " << task.priority << " Arrival Time: " << task.arrivalTime << std::endl;
    }
}

void Scheduler::displayStats() {
    std::cout << "Task execution order:" << std::endl;
    for (const auto &task : tasks) {
        std::cout << "Task ID: " << task.id << " Burst Time: " << task.burstTime << " Priority: " << task.priority << " Arrival Time: " << task.arrivalTime << std::endl;
    }
}
