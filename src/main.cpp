#include "Dog.hpp"
#include "Cat.hpp"
#include "Treatment.hpp"
#include <iostream>
using namespace AnimalNamespace;
using namespace TreatmentNamespace;

int main() {
    
    Treatment t1("Vaccination", 75.0);
    Treatment t2("Tick prevention treatment", 70.0);
    Treatment t3("Deworming", 45.0);
    
    
    Animal dog1 = Dog("Luna", 1, 24.5);
   

    return 0;
}
