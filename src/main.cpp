#include <iostream>
#include <string>
#include "TaskManager.h"

int main() {
    TaskManager manager;
    int choice;
    std::string title;

    while (true) {
        std::cout << "\n--- Task Manager ---\n";
        std::cout << "1. Add task\n";
        std::cout << "2. Show tasks\n";
        std::cout << "3. Exit\n";
        std::cout << "Choice: ";

        std::cin >> choice;
        std::cin.ignore(); // важно за getline

        if (choice == 1) {
            std::cout << "Enter task title: ";
            std::getline(std::cin, title);
            manager.addTask(title);
        }
        else if (choice == 2) {
            manager.showTasks();
        }
        else if (choice == 3) {
            break;
        }
        else {
            std::cout << "Invalid choice!\n";
        }
    }

    return 0;
}
