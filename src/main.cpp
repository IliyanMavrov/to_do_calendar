#include <string>

class Task {
public:
    std::string title;
    bool completed;

    Task(std::string t) : title(t), completed(false) {}
};

#include <iostream>

int main() {
    std::cout << "Works!\n";
    return 0;
}
