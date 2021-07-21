#pragma once



class Animal
{
public:
    virtual void greetingDifferent() = 0;

    virtual void greetingSimilar() = 0;
};



class Cat : public Animal
{
public:
    void greetingDifferent() override
    {
        std::cout << "Meow";
    }

    void greetingSimilar() override
    {
        std::cout << "Purr";
    }
};



class Dog : public Animal
{
public:
    void greetingDifferent() override
    {
        std::cout << "Bark";
    }

    void greetingSimilar() override
    {
        std::cout << "Woof";
    }
};

void meeting(Animal* a, Animal* b);