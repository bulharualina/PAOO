#include "Dog.hpp"
#include <iostream>

// Constructor and Initializer List 
Dog::Dog(const string &name, int age, double weight)
    : dogName(name), dogAge(age), dogWeight(weight), treatments(new vector<Treatment>()) 
{
    cout << "\n----- Dog object created: " << dogName << endl;
}

// Destructor
Dog::~Dog() {
    delete treatments;  // Free the dynamically allocated vector
    cout << "\n----- Memory freed for Dog object: " << dogName << endl;
}

// Getters
string Dog::getDogName() const { 
    return dogName; 
}

int Dog::getDogAge() const { 
    return dogAge; 
}

double Dog::getDogWeight() const { 
    return dogWeight; 
}

vector<Treatment>* Dog::getTreatments() const { 
    return treatments; 
}

// Setters
void Dog::setDogName(const string &name) { 
    dogName = name; 
}

void Dog::setDogAge(int age) { 
    dogAge = age; 
}

void Dog::setDogWeight(double weight) { 
    dogWeight = weight; 
}

//Overloading the Assignment Operator
Dog& Dog::operator=(const Dog &rhs) {
    cout << "\n----- Assignment operator called." << endl;
    
    // Check for self-assignment
    if (this != &rhs) {
        
        // Free existing lhs data
        cout << "\n----- Freeing existing data." << endl;
        delete treatments;

        //Copy the data members of the lhs obj to the lhs obj
        cout << "\n----- Copy the data of " << rhs.dogName << " to " << dogName << endl;
        dogName = rhs.dogName;
        dogAge = rhs.dogAge;
        dogWeight = rhs.dogWeight;
        treatments = new vector<Treatment>(*rhs.treatments);
        cout << "\n----- Assignment completed."<< endl;
        
    }else {
        cout << "\n----- Self-assignment detected." << endl;
    }
    return *this;
}



// Method to add a treatment
void Dog::addTreatment(const Treatment &treatment) {
    treatments->push_back(treatment);
}

// Print details
void Dog::printDetails() const {
         cout << "\nDog Name: " << dogName << "\n"
              << "Dog Age: " << dogAge << "\n"
              << "Dog Weight: " << dogWeight << " kg\n"
              << "Treatments:\n";
    
    for (const auto &treatment : *treatments) {
        treatment.printDetails();
        cout << "----------------\n";
    }
}
