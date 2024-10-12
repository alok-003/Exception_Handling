//Name:Alok Chawat
//PRN:23070123016
//Aim:Implemention of Exception Handling to perform Handle Exception created by age below 18 error

#include <iostream>
using namespace std;

int main() {
    float age;

    cout << "Enter your age: ";
    cin >> age;

    try {
        if (age < 18) {
            throw age; 
        } 
        else if (age < 0) { 
            throw age; 
        } 
        else {
            cout << "Accepted" << endl;
        }
    }
    catch (float age) {
        if (age < 0) {
            cout << "\nInvalid age"<<endl;
        } 
        else {
            cout << "\nYou are below 18, Not Accepted" << endl; 
        }
    }

    return 0;
}


/*Output:
For age equal to or greater than 18- 
Enter your age: 21
Accepted
For age below 18-
Enter your age: 17

You are below 18, Not Accepted
For negative age-
Enter your age: -2

Invalid age
*/
