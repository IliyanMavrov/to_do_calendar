#include "TaskManager.h"
#include <iostream>

void TaskManager::addTask(const std::string& title) {
    tasks.emplace_back(title);
}

void TaskManager::showTasks() const {
    for (const auto& task : tasks) {
        std::cout << "- " << task.getTitle() << std::endl;
    }
}
