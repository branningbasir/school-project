#include <iostream>
#include <string>

int main() {
    std::string name;
    int age;
    std::cout << "What is your name?";
    std::cin >> name;
    std::cout << "How old are you?" << std::endl;
    std::cin >> age;
    if (age >= 18) {
        std::cout << "You can vote!" << std::endl;
    } else {
        std::cout << "Sorry, you are too young to vote." << std::endl;
    }
    return 0;
}
