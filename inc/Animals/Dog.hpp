#ifndef DOG_HPP
#define DOG_HPP

#include <string>
#include <vector>
#include "../Treatment.hpp"
#include "../Animals/Animal.hpp"
using namespace std;
using namespace TreatmentNamespace;

namespace AnimalNamespace {
    class Dog : public Animal {
    private:
        vector<Treatment> *treatments;  // Dynamically allocated vector of Treatment objects

    public:
        // Constructor & default constructor 
        Dog();
        Dog(const string &name, int age, double weight);

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
