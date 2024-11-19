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
    
    //-----Copy constructor
    Animal* dog1 = new Dog("Luna", 1, 24.5);
    dynamic_cast<Dog*>(dog1)->addTreatment(t1);  
    dog1->printDetails();

    Animal* dog2 = new Dog(*dynamic_cast<Dog*>(dog1));
    dog2->printDetails();

    //-----Move constructor
    Animal* cat1 = new Cat("Whiskers", 2, 4.5);
    dynamic_cast<Cat*>(cat1)->addTreatment(t2); 
    cat1->printDetails();

    Animal* cat2 = new Cat(move(*dynamic_cast<Cat*>(cat1)));
    cat2->printDetails();
   
    //-----Create obj with default constructor
    Animal *dog3 = new Dog();
    dynamic_cast<Dog*>(dog3)->addTreatment(t3);  
    dog3->printDetails();

    // Error: The move constructor is deleted
    //Animal* dog4 = new Dog(move(*dynamic_cast<Dog*>(dog3))); 
    
  

    //Free the dynamically allocated memory
    delete dog1;
    delete dog2;
    delete cat1;
    delete cat2;
    delete dog3;


    return 0;
}
