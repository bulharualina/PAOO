#include "Dog.hpp"
#include "Cat.hpp"
#include "Treatment.hpp"
#include <iostream>
using namespace AnimalNamespace;
using namespace TreatmentNamespace;

int main() {
    
    Dog dog1("Luna", 1, 24.5);
    Dog dog2("Ava", 4, 30.0);
    
    Cat cat1("Whiskers", 2, 4.5);
    Cat cat2("Shadow", 3, 6.0);
   


    Treatment t1("Vaccination", 75.0);
    Treatment t2("Tick prevention treatment", 70.0);
    Treatment t3("Deworming", 45.0);
 

    dog1.addTreatment(t2);  
    dog2.addTreatment(t1);  
    cat1.addTreatment(t3);


    dog1.printDetails();
    dog2.printDetails();
    cat1.printDetails();
    cat2.printDetails();

   

    return 0;
}
