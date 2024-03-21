// Author : Mehtab Alam
// Github : MehtabAlam2006

/* 5.
Enter two numbers from keyboard. Write a program to check if the two numbers are equal.*/
#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout<<"enter value for x: "<<endl;
    cin>>x;
    cout<<"enter value for y: "<<endl;
    cin>>y;
    if ( x == y){
        cout<<"The number you entered are equal";
        
    }
    else {
        cout<<"you entered different numbers";
    }
}