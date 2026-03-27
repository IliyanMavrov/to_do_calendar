#ifndef TASK_H
#define TASK_H

#include <string>

class Task {
private:
    std::string title;
    bool completed;

public:
    // Constructor
    Task(const std::string& title);

    // Methods
    void markCompleted();
    std::string getTitle() const;
    bool isCompleted() const;
};

#endif
