#include "task.h"

Task::Task(const std::string& title)
    : title(title), completed(false) {}

void Task::markCompleted() {
    completed = true;
}

std::string Task::getTitle() const {
    return title;
}

bool Task::isCompleted() const {
    return completed;
}
