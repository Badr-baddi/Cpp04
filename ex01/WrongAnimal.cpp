#include "includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    std::cout << " WrongAnimal constructor called " << std::endl;
}

WrongAnimal::~WrongAnimal(){
    std::cout << " WrongAnimal destructor called " << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) : type(other.type){
    std::cout << " WrongAnimal Copy Constructor called " << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other){
    if (this != &other)
        type = other.type;
    std::cout << " WrongAnimal copy assignment operator called " << std::endl;
    return *this;
}

std::string WrongAnimal::getType() const{
    return this->type;
}

void WrongAnimal::makeSound() const {
    std::cout << " WrongAnimal makes a sound " << std::endl;
}
