#include "Dog.hpp"
#include <iostream>
using namespace AnimalNamespace;
using namespace TreatmentNamespace;

// Default constructor 
Dog::Dog() 
    : Animal()  // Call the base class constructor
{
    cout << "\n----- Dog object created (default constructor)" << endl;
}

// Constructor with parameters
Dog::Dog(const string &name, int age, double weight)
    : Animal(name, age, weight)  // Call the base class constructor
{
    cout << "\n----- Dog object created: " << name << endl;
}

// Copy constructor
Dog::Dog(const Dog &obj)
    : Animal(obj) {

    // Copy each treatment from the source object
    for (const auto &treatment : obj.treatments) {
        treatments.push_back(make_shared<Treatment>(*treatment));
    }
        cout << "\n----- Dog copy constructor called for: " << obj.getName()  << endl;
}

// Move constructor
Dog::Dog(Dog &&other) noexcept 
    : Animal(move(other)), treatments(move(other.treatments)) {
        cout << "\n----- Dog move constructor called for: " << other.getName()  << endl;
}


// Destructor
Dog::~Dog() {
    cout << "\n----- Destructor for Dog object: " << getName() << endl;
}

// Copy assignment operator
Dog& Dog::operator=(const Dog &rhs) {
    cout << "\n----- Assignment operator called." << endl;

    // Check for self-assignment
    if (this != &rhs) {
        
        // Thread-safe
        lock_guard<mutex> lock(mtx); 
        
        // Call the base class assignment operator
        Animal::operator=(rhs);

        // Clear and copy treatments
        treatments.clear();
        for (const auto &treatment : rhs.treatments) {
            treatments.push_back(make_shared<Treatment>(*treatment)); // Copy each treatment
        }

        cout << "\n----- Assignment completed." << endl;
    } else {
        cout << "\n----- Self-assignment detected." << endl;
    }
    return *this;
}

// Move assignment operator
Dog& Dog::operator=(Dog &&rhs) noexcept {
    cout << "\n----- Move assignment operator called." << endl;

    if (this != &rhs) {
        
         // Thread-safe
        lock_guard<mutex> lock(mtx); 

        // Call the base class move assignment operator
        Animal::operator=(move(rhs));

        // Move treatments (no need to copy, just transfer ownership)
        treatments = move(rhs.treatments);

        cout << "\n----- Move assignment completed." << endl;
    } else {
        cout << "\n----- Self-assignment detected." << endl;
    }
    return *this;
}

// Method to add a treatment
void Dog::addTreatment(const Treatment &treatment) {
    treatments.push_back(make_shared<Treatment>(treatment)); 
}

// Print details
void Dog::printDetails() const {
    cout << "Dog:" << endl;
    cout << "Dog Name: " << getName() << endl;
    cout << "Dog Age: " << getAge() << endl;
    cout << "Dog Weight: " << getWeight() << " kg" << endl;

    if (!treatments.empty()) {
        cout << "Treatments: " << endl;
        for (const auto &treatment : treatments) {
            treatment->printDetails(); // Use -> to dereference unique_ptr
            cout << "----------------\n";
        }
        cout << endl;
    } else {
        cout << "No treatments assigned" << endl;
    }
}
