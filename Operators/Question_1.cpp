// Author : Mehtab Alam
// Github: MehtabAlam2006
/*Q1.
Length and breadth of a rectangle are 5 and 7 respectively.
Write a program to calculate the area and perimeter of the rectangle.*/

#include <iostream>
using namespace std;

int main()
{
   int length = 5;
   int breath = 7;
   int Area = length * breath;
   int perimeter = (length + breath) * 2;
   cout<<"Area of the Rectangle = "<<Area<<endl;
   cout<<"Perimeter of the Rectangle = "<<perimeter;


}