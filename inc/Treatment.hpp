#ifndef TREATMENT_HPP
#define TREATMENT_HPP

#include <string>
#include <iostream>
using namespace std;

namespace TreatmentNamespace
{
    class Treatment {
    private:
        string name;
        double cost;
    
    public:
        // Constructor with default values
        Treatment(const string &name = "Unknown", double cost = 0.0);
    
        // Setters
        void setName(const string &name);
        void setCost(double cost);
    
        // Getters
        string getName() const;
        double getCost() const;
    
        // Print details
        void printDetails() const;
    };
}
#endif
