//Name:Alok Chawat
//PRN:23070123016
//Aim:Implemention of Exception Handling to perform Handle Exception created by divide 0 error

#include <iostream>
using namespace std;
int main() {
float n1, n2, ans;

    cout << "Enter the values of numbers 1 and 2: ";
    cin >>n1>>n2;
    try{
        if(n2==0){
            throw n2;}
        else{
            ans = n1/n2;
            cout << "The answer is "<< ans;
        }
    }
catch(float num){
    cout<<"\n ERROR: Division by "<<num<<endl;
}
    return 0;
}


/*Output:
For n2 not equal to 0-
Enter the values of numbers 1 and 2: 1
2
The answer is 0.5
For n2 equal to 0-
Enter the values of numbers 1 and 2: 2
0

 ERROR: Division by 0

*/