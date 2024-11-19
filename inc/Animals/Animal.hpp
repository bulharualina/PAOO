#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>
using namespace std;

namespace AnimalNamespace
{
    class Animal 
    {
    protected:
        string name;
        int age;
        double weight;

    public:
        // Constructors
        Animal();
        Animal(const string &name, int age, double weight);
  
        // Setters
        void setName(const string &name);
        void setAge(int age);
        void setWeight(double weight);
    
        // Getters
        string getName() const;
        int getAge() const;
        double getWeight() const;
    
        // Print details
        virtual void printDetails() const = 0;
    };
}
#endif
