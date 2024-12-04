#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>
#include <memory>
#include <mutex>
#include <vector>
using namespace std;
#include "../Treatment/Treatment.hpp"
using namespace TreatmentNamespace;

namespace AnimalNamespace
{
    class Animal 
    {
    private:
        string name;
        int age;
        double weight;
        vector <unique_ptr<Treatment>> treatments;
        mutable mutex mtx;
    
    public:
        // Default constructor 
        Animal();
        
        //Constructor with parameters
        Animal(const string &name, int age, double weight);
        
        // Copy constructor
        Animal(const Animal &ob);

        // Move constructor          
        Animal(Animal &&other); 

        //Destructor
        virtual ~Animal();
  
        // Copy assignment operator 
        Animal& operator=(const Animal &rhs);

        // Move assignment operator
        Animal& operator=(Animal&& other) noexcept;
    
        // Method to add a treatment
        void addTreatment(const Treatment &treatment);

        // Print details
        virtual void printDetails() const; 

        // Getters
        string getName() const;
        int getAge() const;
        double getWeight() const;
    
        
    };
}
#endif
