#include "Dog.hpp"
#include "Treatment.hpp"
#include <iostream>
using namespace AnimalNamespace;
using namespace TreatmentNamespace;

int main() {
    
    //Treatment t1("Vaccination", 75.0);
    //Treatment t2("Tick prevention treatment", 70.0);
    //Treatment t3("Deworming", 45.0);
    
    
    //Animal dog1 = Dog("Luna", 1, 24.5);
   

    unique_ptr<Animal> animal1 = make_unique<Animal>("Trixi", 3, 25);
    animal1->printDetails();
    return 0;
}
