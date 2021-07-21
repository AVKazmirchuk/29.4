#include <iostream>

#include "../include/header.h"

int main()
{
    meeting(new Cat(), new Dog());

    meeting(new Dog(), new Cat());

    meeting(new Cat(), new Cat());

    meeting(new Dog(), new Dog());
}