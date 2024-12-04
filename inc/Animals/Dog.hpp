#ifndef DOG_HPP
#define DOG_HPP

#include <string>
#include <vector>
#include <memory>//smart pointers
#include <mutex>//mutex
#include "../Treatment/Treatment.hpp"
#include "../Animals/Animal.hpp"
using namespace std;
using namespace TreatmentNamespace;

namespace AnimalNamespace {
    class Dog : public Animal {
    private:
        vector <shared_ptr<Treatment>> treatments;
        mutable mutex mtx;  

    public:
        // Default constructor 
        Dog();

        //Constructor with parameters
        Dog(const string &name, int age, double weight);
        
        // Copy constructor
        Dog(const Dog &ob); 
        
        // Move constructor
        Dog(Dog&&) noexcept;     
        
        // Destructor
        ~Dog();

        // Assignment operator 
        Dog& operator=(const Dog &rhs);

         // Assignment operator 
        Dog& operator=(Dog &&other) noexcept;

        // Method to add a treatment
        void addTreatment(const Treatment &treatment);
        vector<Treatment> &getTreatments() const;
        
        // Print details
        void printDetails() const override;
    };
}
#endif
