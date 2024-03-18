// Author : Mehtab Alam
// Github : MehtabAlam@2006

/*Q.12 Take value of length and breath of a rectangle from user as float.
 Find its area and print it on screen after type casting it to int.*/

 #include <iostream>
 using namespace std;

 int main()
 {
    float length, breath;
    cout<<"Enter the length of the rectangle: "<<endl;
    cin>>length;
    cout<<"Enter the breath of the rectangle: "<<endl;
    cin>>breath;
    float Area =  length * breath;
    cout<<"the area of the rectangle = "<< (int)Area;

 }