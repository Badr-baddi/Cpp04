#include "includes/Animal.hpp"
#include "includes/Cat.hpp"
#include "includes/Dog.hpp"
#include "includes/Brain.hpp"

int main()
{
    std::cout << "=== Test 2: Cat and Dog work fine ===" << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << "\n=== Test 3: makeSound() works ===" << std::endl;
    j->makeSound();
    i->makeSound();

    delete j;
    delete i;

    std::cout << "\n=== Test 4: Deep copy still works ===" << std::endl;
    {
        Dog basic;
        Dog tmp = basic;
    }

    return 0;
}
