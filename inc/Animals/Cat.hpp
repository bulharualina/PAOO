#ifndef CAT_HPP
#define CAT_HPP

#include <string>
#include <vector>
#include "../Treatment/Treatment.hpp"
#include "../Animals/Animal.hpp"
using namespace std;
using namespace TreatmentNamespace;

namespace AnimalNamespace {
    class Cat : public Animal {
    private:
        vector<Treatment> *treatments;  // Dynamically allocated vector of Treatment objects

    public:
        // Default constructor 
        Cat();
        
        //Constructor with parameters
        Cat(const string &name, int age, double weight);
        
        // Copy constructor
        Cat(const Cat &obj); 
        
        // Move constructor          
        Cat(Cat &&other);      
        
        // Destructor
        ~Cat();

        // Assignment operator 
        Cat& operator=(const Cat &rhs);

        // Method to add a treatment
        void addTreatment(const Treatment &treatment);
        vector<Treatment> &getTreatments() const;
        
        // Print details
        void printDetails() const;
    };
}
#endif
