#include <iostream>
#include "Treatment.hpp"  

int main() {
    Treatment tickPrevention("Luna", "NextGard 10-25kg", "2024-11-02", "Monthly");
    Treatment anotherTreatment("Ava","NextGard Spectra 10-25kg", "2024-10-01","Every 3 months");
    
    cout << tickPrevention.getDayGiven() <<endl;
    cout << anotherTreatment.getDayGiven() <<endl;
    
    
    anotherTreatment = tickPrevention;
    cout << tickPrevention.getDayGiven() <<endl;
    cout << anotherTreatment.getDayGiven() <<endl;

    anotherTreatment = anotherTreatment;
    return 0;
}
