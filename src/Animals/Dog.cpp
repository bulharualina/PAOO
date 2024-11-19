#include "../../inc/Animals/Dog.hpp"
#include <iostream>
using namespace AnimalNamespace;
using namespace TreatmentNamespace;

// Constructor
Dog::Dog(const string &name, int age, double weight)
    : Animal(name,age,weight)
{
    this -> treatments = new vector<Treatment>();
    cout << "\n----- Dog object created: " << name << endl;
}

// Default constructor 
Dog::Dog() 
    : Animal()  
{
    this->treatments = new vector<Treatment>();
    cout << "\n----- Dog object created (default constructor)" << endl;
}

// Destructor
Dog::~Dog() {
    delete treatments;  // Free the dynamically allocated vector
    cout << "\n----- Memory freed for Dog object: " << name << endl;
}


//Overloading the Assignment Operator
Dog& Dog::operator=(const Dog &rhs) {
    cout << "\n----- Assignment operator called." << endl;
    
    // Check for self-assignment
    if (this != &rhs) {
        
        cout << "\n----- Freeing existing data." << endl;
        delete treatments;

        
        cout << "\n----- Copy the data of " << rhs.name << " to " << name << endl;
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

vector<Treatment> &Dog::getTreatments() const { 
    return *treatments; 
}


// Print details
void Dog::printDetails() const {
        cout << "Dog:" << endl;
        cout << "Dog Name: " << name << endl;
        cout << "Dog Age: " << age << endl;
        cout << "Dog Weight: " << weight << " kg" << endl;
    
    if(!treatments->empty()){
        
        cout << "Treatments: ";
        for (const Treatment &treatment : *treatments) {
            treatment.printDetails();
            cout << "----------------\n";
        }
        cout << endl;
    }
    else {
        cout << "No treatments assigned" << endl;
    }
}