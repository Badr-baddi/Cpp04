#include "includes/Brain.hpp"

Brain::Brain(){
    std::cout<<" Brain default constructor called "<<std::endl;
}

Brain::Brain(const Brain &other){
    int i = 0;
    while (i < 100)
    {
        ideas[i] = other.ideas[i];
        i++;
    }
    std::cout<<" Brain copy constructor called "<<std::endl;
}

Brain& Brain::operator=(const Brain &other){
    int i = 0;
    if (this != &other){
        while(i < 100)
        {
            ideas[i] = other.ideas[i];
            i++;
        }
    }
    std::cout<<" Brain copy assignment operator called "<<std::endl;
    return *this;
}

Brain::~Brain(){
    std::cout<<" Brain destructor called "<<std::endl;
}