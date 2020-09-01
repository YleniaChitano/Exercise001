#include <iostream>
#include <string>

int age;
std::string name = "";

int main()
{
    std::cout << "Please enter your age ";
    std::cin >> age;
    std::cout << "What is your full name? ";
    std::cin.ignore();
    std::getline(std::cin, name);

    if (age >= 20) {
        std::cout << "You are an adult\n";
    }
    else {
        std::cout << "You are a teenager\n";
    }
    std::cout << "Your name is " << name << " and you are " << age << " years old. Good for you!" << std::endl;

    return 0;
}

