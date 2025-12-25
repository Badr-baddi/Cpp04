#include "includes/Animal.hpp"

Animal::Animal(){
    std::cout << " Animal constructor called " << std::endl;
}

Animal::~Animal(){
    std::cout << " Animal destructor called " << std::endl;
}

Animal::Animal(const Animal &other) : type(other.type){
    std::cout << " Animal Copy Constructor called " << std::endl;
}

Animal& Animal::operator=(const Animal &other){
    if (this != &other)
        type = other.type;
    std::cout << " Animal copy assignment operator called " << std::endl;
    return *this;
}

std::string Animal::getType() const{
    return this->type;
}

void Animal::makeSound() const {
    std::cout << " Animal makes a sound " << std::endl;
}
