// Author : Mehtab Alam 
// Github : MehtabAlam2006
/* Q2.

2.
Write a program to input the value of the radius of a circle from keyboard
and then calculate its perimeter and area.*/

#include <iostream>
using namespace std;

int main()
{
   float radius;
   double pie = 3.14;
   cout<<"Enter the value of radius: "<<endl;
   cin>> radius;
   double area = pie*(radius * radius) ;
   double perimeter =2 * (pie * radius);
   cout<<"area: "<<area<<endl;
   cout<<"perimeter: "<<perimeter;


}