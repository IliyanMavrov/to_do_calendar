#ifndef TASKMANAGER_H
#define TASKMANAGER_H

#include <vector>
#include <string>
#include "task.h"

class TaskManager {
private:
    std::vector<Task> tasks;

public:
    void addTask(const std::string& title);
    void showTasks() const;
};

#endif
