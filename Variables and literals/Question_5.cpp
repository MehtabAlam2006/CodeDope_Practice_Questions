// Author : Mehtab Alam
// Github: MehtabAlam2006
/*Q5.Write a program to take input of length and breadth of a rectangle from the user and
 print its area.*/

#include <iostream>
using namespace std;

int main(){
    int length, breath;
    cout<<"Enetr the length of rectangle: "<<endl;
    cin>>length;
    cout<<"Enter the breath of rectangle: "<<endl;
    cin>>breath;
    int Area = length * breath;
    cout<<" the area of the given rectangle is = "<< Area;
}
