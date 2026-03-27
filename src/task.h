#ifndef TASK_H
#define TASK_H

#include <string>

class Task {
private:
    std::string title;
    bool completed;

public:
    Task(const std::string& title);

    void markCompleted();
    std::string getTitle() const;
    bool isCompleted() const;
};

#endif
