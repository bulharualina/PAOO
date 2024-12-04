#include "Animal.hpp"
#include <iostream>
using namespace AnimalNamespace;
using namespace TreatmentNamespace;

// Default constructor 
Animal::Animal() 
    : name("Unknown"), age(0), weight(0.0) {}

//Constructor with parameters
Animal::Animal(const string &name, int age, double weight)
    : name(name), age(age), weight(weight){ cout<< "Constructor Animal"<<endl;
}

// Copy constructor
Animal::Animal(const Animal &obj)
    : name(obj.name), age(obj.age), weight(obj.weight)
{
    cout << "\n----- Animal copy constructor called for: " << obj.name << endl;
    
    // Copy the treatments vector: create a new unique_ptr for each treatment
    for (const auto &treatment : obj.treatments) {
        treatments.push_back(make_unique<Treatment>(*treatment)); // Deep copy each treatment
    }
}

// Move constructor
Animal::Animal(Animal &&other) 
    : name(move(other.name)), age(other.age), weight(other.weight)
{
    cout << "\n----- Animal move constructor called for: " << name << endl;
    
    // Move the treatments vector: transfer ownership
    treatments = move(other.treatments); // Move the vector of unique_ptrs
}

//Destructor
Animal::~Animal(){
    cout<< "Destructor Animal"<<endl;
}

//Copy assignment operator
Animal& Animal::operator=(const Animal &rhs) {
    cout << "\n----- Assignment operator called." << endl;
    
    // Check for self-assignment
    if (this != &rhs) {
        
        lock_guard<std::mutex> lock(mtx); // Sincronizare
        cout << "\n----- Copy the data of " << rhs.name << " to " << name << endl;
        name = rhs.name;
        age = rhs.age;
        weight = rhs.weight;
        
        // Clear the current treatments vector
        treatments.clear(); 

        // Copy the treatments: create a new unique_ptr for each treatment 
        for (const auto &treatment : rhs.treatments) {
            treatments.push_back(make_unique<Treatment>(*treatment)); // Copy each treatment using make_unique
        }
        cout << "\n----- Assignment completed."<< endl;
        
    }else {
        cout << "\n----- Self-assignment detected." << endl;
    }
    return *this;
}

// Move assignment operator
Animal& Animal::operator=(Animal&& other) noexcept {
    // Check for self-assignment
    if (this != &other) {
        std::lock_guard<std::mutex> lock(mtx); // Sincronizare
        cout << "\n----- Move the data of " << other.name << " to " << name << endl;
        name = move(other.name);
        age = other.age;
        weight = other.weight;
        treatments = move(other.treatments);
        cout << "\n----- Assignment completed."<< endl;
    }else {
        cout << "\n----- Self-assignment detected." << endl;
    }
    return *this;
}

// Method to add a treatment
void Animal::addTreatment(const Treatment &treatment) {
    lock_guard<std::mutex> lock(mtx); // Protejăm accesul la resurse
    treatments.push_back(make_unique<Treatment>(treatment));
}

// Print details
void Animal::printDetails() const {
    lock_guard<std::mutex> lock(mtx);
    cout << "Animal:" << endl;
    cout << "Animal Name: " << name << endl;
    cout << "Animal Age: " << age << endl;
    cout << "Animal Weight: " << weight << " kg" << endl;

    if (!treatments.empty()) {
        cout << "Treatments: " << endl;
        // Iterate over the vector and dereference each unique_ptr to access Treatment
        for (const auto &treatment : treatments) {
            treatment->printDetails();  // Use -> to call methods on the object that unique_ptr points to
            cout << "----------------\n";
        }
        cout << endl;
    } else {
        cout << "No treatments assigned" << endl;
    }
}


// Getters
string Animal::getName() const { return name; }

int Animal::getAge() const { return age; }

double Animal::getWeight() const { return weight; }