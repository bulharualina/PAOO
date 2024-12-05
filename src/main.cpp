#include "Dog.hpp"
#include "Treatment.hpp"
#include <iostream>
using namespace AnimalNamespace;
using namespace TreatmentNamespace;

int main() {
    cout << "---- Example with unique_ptr ----\n";

    // Create an animal using unique_ptr
    unique_ptr<Animal> animal1 = make_unique<Animal>("Trixi", 3, 25);
    animal1->printDetails();

    // Add a treatment to the animal
    Treatment t1("Vaccination", 75.0);
    animal1->addTreatment(t1);
    animal1->printDetails();

    // Transfer ownership of the animal to another unique_ptr
    unique_ptr<Animal> animal2 = move(animal1);
    if (!animal1) {
        cout << "Animal1 no longer owns the resource.\n";
    }
    animal2->printDetails();

    cout << "\n---- Example with shared_ptr ----\n";

    // Create an animal using shared_ptr
    shared_ptr<Animal> sharedAnimal1 = make_shared<Animal>("Max", 5, 30);
    sharedAnimal1->printDetails();

    // Share ownership of the animal
    shared_ptr<Animal> sharedAnimal2 = sharedAnimal1;
    cout << "Animal Max is shared with sharedAnimal2.\n";
    sharedAnimal2->printDetails();

    // Add treatments and observe changes
    Treatment t2("Tick prevention", 70.0);
    sharedAnimal1->addTreatment(t2);
    cout << "\n---- After adding the treatment ----\n";
    sharedAnimal1->printDetails();
    sharedAnimal2->printDetails();

    cout << "\n---- Automatic resource destruction ----\n";

    return 0;
}

