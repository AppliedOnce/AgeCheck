#include <iostream>

int age = 0;

int main()
{
    std::cout << "Tell me your age: ";
    std::cin >> age;
    if (age >= 20)
    {
        std::cout << "You are an adult.";
    }
    else
    {
        std::cout << "You are a teenager.";
    }
}
