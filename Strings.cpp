//Strings hold the character before space 
//There are to types of strings 
//Getline - can takes the whole characters 
//string - takes the charcter until thge space 

#include<iostream>
using namespace std;

int main(){
    string s;
    cout << "Enter the string: ";
    cin >> s;                           //Enter the string: Hey Shivam
    cout << s;                         //Hey
    return 0 ;
}

#include<iostream>
using namespace std;

int main() {
    string d;
    cout << "Enter the string: ";   //Hey bruhh
    getline(cin , d);               //Hey bruhh
    cout << d;
    return 0;

}
