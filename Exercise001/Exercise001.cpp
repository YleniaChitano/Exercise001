#include <iostream>
int age;

int main()
{
    std::cout << "Please enter your age ";
    std::cin >> age;
    if (age >= 20) {
        std::cout << "You are an adult";
    }
    else {
        std::cout << "You are a teenager";
    }
}

