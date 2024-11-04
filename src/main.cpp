#include <iostream>
#include "Treatment.hpp"  

int main() {
    Treatment treatment1("Buddy", 5, "Vaccination", 25.50, "2024-11-01", "Annual vaccination for rabies and distemper.");
    Treatment treatment2("Bella", 4, "Flea Treatment", 30.00, "2024-11-03", "Applied topical flea treatment.");
    
    cout << "\nTreatment 1 Details:" << endl;
    treatment1.printDetails();


    cout << "\nTreatment 2 Details:" << endl;
    treatment2.printDetails();

    treatment2 = treatment1;
    cout << "\nTreatment 2 Details after assignment from Treatment 1:" << endl;
    treatment2.printDetails();
    
    treatment2.setDogName("Rocky");
    treatment2.setTreatmentCost(20.00);

    cout << "\nFinal Treatment Details:" << endl;
    cout << "Treatment 1:" << endl;
    treatment1.printDetails();

    cout << "\nTreatment 2 (after modification):" << endl;
    treatment2.printDetails();
    return 0;
}
