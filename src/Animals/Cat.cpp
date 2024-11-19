#include "Cat.hpp"
#include <iostream>
using namespace AnimalNamespace;
using namespace TreatmentNamespace;

// Default constructor 
Cat::Cat() 
    : Animal()  
{
    this->treatments = new vector<Treatment>();
    cout << "\n----- Cat object created (default constructor)" << endl;
}

//Constructor with parameters
Cat::Cat(const string &name, int age, double weight)
    : Animal(name,age,weight)
{
    this -> treatments = new vector<Treatment>();
    cout << "\n----- Cat object created: " << name << endl;
}

// Copy constructor
Cat::Cat(const Cat &obj){
    name = obj.name;
    age = obj.age;
    weight = obj.weight;

    treatments = new vector<Treatment>(*obj.treatments);
 
    cout << "\n----- Cat copy constructor called for: " << obj.name << endl;

}

// Move constructor
Cat::Cat(Cat &&other)    
{ 
    name = move(other.name);
    age = other.age;
    weight = other.weight;
    this->treatments = other.treatments;
    other.treatments = nullptr; // Nullify the source pointer
    cout << "\n----- Cat move constructor called for: " << name << endl;
}

// Destructor
Cat::~Cat() {
    delete treatments;  // Free the dynamically allocated vector
    cout << "\n----- Memory freed for Cat object: " << name << endl;
}


//Overloading the Assignment Operator
Cat& Cat::operator=(const Cat &rhs) {
    cout << "\n----- Assignment operator called." << endl;
    
    // Check for self-assignment
    if (this != &rhs) {
        
        cout << "\n----- Freeing existing data." << endl;
        delete treatments;

        cout << "\n----- Copy the data of " << rhs.name << " to " << name << endl;
        name = rhs.name;
        age = rhs.age;
        weight = rhs.weight;
        treatments = new vector<Treatment>(*rhs.treatments);
        
        cout << "\n----- Assignment completed."<< endl;
        
    }else {
        cout << "\n----- Self-assignment detected." << endl;
    }
    return *this;
}



// Method to add a treatment
void Cat::addTreatment(const Treatment &treatment) {
    treatments->push_back(treatment);
}

vector<Treatment> &Cat::getTreatments() const { 
    return *treatments; 
}


// Print details
void Cat::printDetails() const {
        cout << "Cat:" << endl;
        cout << "Cat Name: " << name << endl;
        cout << "Cat Age: " << age << endl;
        cout << "Cat Weight: " << weight << " kg" << endl;
    
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


