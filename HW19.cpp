#include <iostream>

class Animal
{
 public:
     virtual void Voice()
     {
         std::cout << "Animal's sound \n";
     }
};

class Dog : public Animal
{
public:
    void Voice() override
    {
        std::cout << "Woof Woof \n";
    }
};

class Cat : public Animal
{
public:
    void Voice() override
    {
        std::cout << "Meow Meow \n";
    }
};

class Sheep : public Animal
{
public:
    void Voice() override
    {
        std::cout << "Baa Baa \n";
    }
};

int main()
{
    Animal* animals[3];
    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Sheep();

    for (Animal* a : animals) a -> Voice();
}
