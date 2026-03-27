#include "TaskManager.h"
#include <iostream>

void TaskManager::addTask(const std::string& title) {
    tasks.emplace_back(title);
}

void TaskManager::showTasks() const {
    if (tasks.empty()) {
        std::cout << "No tasks available.\n";
        return;
    }

    for (const auto& task : tasks) {
        std::cout << "- " << task.getTitle() << std::endl;
    }
}
