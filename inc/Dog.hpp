#ifndef DOG_HPP
#define DOG_HPP

#include <string>
#include <vector>
#include "Treatment.hpp"
using namespace std;

class Dog {
private:
    string dogName;
    int dogAge;
    double dogWeight;
    vector<Treatment> *treatments;  // Dynamically allocated vector of Treatment objects

public:
    // Constructor with default values
    Dog(const string &name = "Unknown", int age = 0, double weight = 0.0);

    // Destructor
    ~Dog();

    // Assignment operator 
    Dog& operator=(const Dog &other);

    // Getters
    string getDogName() const;
    int getDogAge() const;
    double getDogWeight() const;
    vector<Treatment>* getTreatments() const;

    // Setters
    void setDogName(const string &name);
    void setDogAge(int age);
    void setDogWeight(double weight);

    // Method to add a treatment
    void addTreatment(const Treatment &treatment);

    // Print details
    void printDetails() const;
};

#endif
