#include "Animal.hpp"
using namespace AnimalNamespace;

Animal::Animal() 
    : name("Unknown"), age(0), weight(0.0) {}

Animal::Animal(const string &name, int age, double weight)
    : name(name), age(age), weight(weight){}

// Setters
void Animal::setName(const string &name) { 
    this -> name = name; 
}

void Animal::setAge(int age) { 
    this -> age = age; 
}

void Animal::setWeight(double weight) { 
    this -> weight = weight; 
}

// Getters
string Animal::getName() const { 
    return name; 
}

int Animal::getAge() const { 
    return age; 
}

double Animal::getWeight() const { 
    return weight; 
}