#ifndef DOG_HPP
#define DOG_HPP

#include <string>
#include <vector>
#include "../Treatment/Treatment.hpp"
#include "../Animals/Animal.hpp"
using namespace std;
using namespace TreatmentNamespace;

namespace AnimalNamespace {
    class Dog : public Animal {
    private:
        vector<Treatment> *treatments;  // Dynamically allocated vector of Treatment objects

    public:
        // Default constructor 
        Dog();

        //Constructor with parameters
        Dog(const string &name, int age, double weight);
        
        // Copy constructor
        Dog(const Dog &ob); 
        
        // Disabling the move constructor
        Dog(Dog&&) = delete;     
        
        // Destructor
        ~Dog();

        // Assignment operator 
        Dog& operator=(const Dog &rhs);

        // Method to add a treatment
        void addTreatment(const Treatment &treatment);
        vector<Treatment> &getTreatments() const;
        
        // Print details
        void printDetails() const;
    };
}
#endif
