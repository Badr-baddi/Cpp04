#include "includes/Animal.hpp"
#include "includes/Cat.hpp"
#include "includes/Dog.hpp"
#include "includes/Brain.hpp"

int main()
{
    std::cout << "=== Test 1: Basic creation and deletion ===" << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;
    delete i;

    std::cout << "\n=== Test 2: Deep copy with copy constructor ===" << std::endl;
    {
        Dog basic;
        Dog tmp = basic;
    }

    std::cout << "\n=== Test 3: Deep copy with assignment operator ===" << std::endl;
    {
        Cat cat1;
        Cat cat2;
        cat2 = cat1;
    }

    std::cout << "\n=== Test 4: Array of Animals ===" << std::endl;
    {
        const Animal* animals[4];
        animals[0] = new Dog();
        animals[1] = new Dog();
        animals[2] = new Cat();
        animals[3] = new Cat();

        for (int i = 0; i < 4; i++)
            delete animals[i];
    }

    return 0;
}
