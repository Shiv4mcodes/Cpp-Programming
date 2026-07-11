//Data types are used to hold values in cpp
//there are many data types - 
//int - it can store integrers
//float - it can store decimals as well as integers
//char -  it store characters
//double -  it store integers and decimals 
//boolean -  store the value for either true or false 
//long - pushes the limits fopr long integers
//long long - pushes the limits from lonn integers 

#include<iostream>
using namespace std;

int main() {
    int a ;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "the value of a is: " << a << endl << "which is integers" << endl;

    float x ;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "the value of x is: " << x << endl << "which is decimal" << endl;

    double y ;
    cout << "Enter the value of y: ";
    cin >> y;
    cout << "the value of y is: " << y << endl << "which is int" << endl;

    bool isStudent = true;
     cout << "Is Student: " << isStudent << endl;

    long population = 1000000L;
    long long bigNumber = 9000000000000LL;
    cout << "population is big: " << population << endl;
    cout << "Number is big: " << bigNumber << endl;
    return 0;
}

