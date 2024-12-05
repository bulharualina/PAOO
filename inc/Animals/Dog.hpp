#ifndef DOG_HPP
#define DOG_HPP

#include <string>
#include <vector>
#include <memory>
#include <mutex>
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
        virtual ~Dog();

        // Print details
        void printDetails() const override;

        // Copy assignment operator override
        Dog& operator=(const Dog &rhs);

         // Move sssignment operator override
        Dog& operator=(Dog &&other) noexcept;

        // Method to add a treatment
        void addTreatment(const Treatment &treatment);
        
        //Getter thread-safe
        vector<Treatment> &getTreatments() const;
        
        
    };
}
#endif
