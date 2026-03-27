#include "task.h"

// Construcotr
Task::Task(const std::string& title)
    : title(title), completed(false) {}

// Mark task as completed
void Task::markCompleted {
    completed = true;
}

// Get title
std::string Task::getTitle() const {
    return title;
}

// Check if completed
bool Task::isCompleted() const{
    return completed;
}
