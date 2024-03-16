// Auhtor : Mehtab Alam
// Github : MehtabAlam2006

/* 3. Write a C++ program to take two integer inputs from user and print sum and product of them.*/

#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Enter the value for first number: ";
    cin >> a;
    cout << "Enter the value for second number: ";
    cin >> b;
    int c = a + b;
    int d = a * b;
    // ADDITION
    cout << "The Sum of the given two number = " << c << endl;
    // MULTIPLICATION
    cout << "The Product of the given two number = " << d;
    return 0;
}
