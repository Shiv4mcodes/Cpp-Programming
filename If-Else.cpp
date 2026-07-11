//Level: Medium — Electricity Bill Calculator
//Input electricity units and calculate the bill:

//First 100 units → ₹5/unit
//Next 100 units → ₹7/unit
//Above 200 units → ₹10/unit
//Add a 10% surcharge if the final bill exceeds ₹2000

#include <iostream>
using namespace std;

int main() {
    cout << "---------------- Electricity Bill Calculator ----------------";

    int units;
    double bill;

    cout << "\nEnter electricity units: ";
    cin >> units;

    if (units <= 100) {
        bill = 5 * units;
    }
    else if (units <= 200) {
        bill = (100 * 5) + ((units - 100) * 7);
    }
    else {
        bill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
    }

    if (bill > 2000) {
        bill = bill + (bill * 0.10);
    }

    cout << "The total bill is Rs " << bill;

    return 0;
}
