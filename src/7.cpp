#include <iostream>
#include <string>

int main() {
    std::string name;
    int age;

    // Prompt the user for their name and age
    std::cout << "What is your name? ";
    std::cin >> name;

    std::cout << "How old are you? ";
    std::cin >> age;

    // Display the user's information
    std::cout << "Your name is " << name << " and you are " << age << " years old." << std::endl;

    return 0;
}
