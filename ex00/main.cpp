#include "includes/Animal.hpp"
#include "includes/Cat.hpp"
#include "includes/Dog.hpp"
#include "includes/WrongAnimal.hpp"
#include "includes/WrongCat.hpp"

int main()
{
// const Animal* meta = new Animal();
// const Animal* j = new Dog();
const Animal* i = new Cat();
const WrongAnimal* p = new WrongCat();
// std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
std::cout << p->getType() << " " << std::endl;

// j->makeSound(); //will output the cat sound!
i->makeSound();
p->makeSound();
// meta->makeSound();

// delete meta;
// delete j;
delete i;
delete p;
return 0;
}
