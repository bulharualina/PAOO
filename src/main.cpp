#include "Dog.hpp"
#include "Treatment.hpp"
#include <iostream>

int main() {
    // Create a Dog object with specified name, age, and weight
    Dog dog1("Luna", 1, 24.5);
    Dog dog2("Ava", 4, 30.0);
    
    // Create another Dog object using the default constructor
    Dog defaultDog; 

    // Create some Treatment objects with specified names and costs
    Treatment t1("Vaccination", 75.0);
    Treatment t2("Tick prevention treatment", 70.0);
    Treatment t3("Deworming", 45.0);
 

    // Add treatments to the 'dog1' and 'dog2'
    dog1.addTreatment(t2);  
    dog2.addTreatment(t1);  

    // Print details of dogs
    cout << "Details dog1:" << endl;
    dog1.printDetails();
    
    cout << "Details dog2:" << endl;
    dog2.printDetails();

    // Use the assignment operator to copy 'dog1' data into 'defaultDog'
    cout << "Assignment operator (defaultDog = dog1):"<<endl;
    defaultDog = dog1;

    // Change the name of 'defaultDog' to "Azor" after the assignment
    defaultDog.setDogName("Azor");
    
    // Add treatments to the 'defaultDog' 
    defaultDog.addTreatment(t3);

    // Print details of 'defaultDog' 
    cout <<"Default Dog after the assignment and changes:"<<endl;
    defaultDog.printDetails();

    return 0;
}
