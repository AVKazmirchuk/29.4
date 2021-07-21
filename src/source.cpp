#include "iostream"
#include <functional>

#include "../include/header.h"

void meeting(Animal* a, Animal* b)
{
    if (a == nullptr || b == nullptr) return;

    //Закомментированный код для указателя на метод обычным способом
    //Использовал указатель для удаления дублирования вывода сообщений в консоль

    //void(Animal::*ptrFunction)();

    std::function<void(Animal*)> ptrFunction;

    if (dynamic_cast<Cat*>(a) == dynamic_cast<Cat*>(b) ||
        dynamic_cast<Dog*>(a) == dynamic_cast<Dog*>(b))
    {
        ptrFunction = &Animal::greetingSimilar;
    }
    else
    {
        ptrFunction = &Animal::greetingDifferent;
    }

    /*(a->*ptrFunction)();
    std::cout << ' ';
    (b->*ptrFunction)();
    std::cout << '\n';*/

    ptrFunction(a);
    std::cout << ' ';
    ptrFunction(b);
    std::cout << '\n';
}