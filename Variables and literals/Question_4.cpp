// Author : Mehtab Alam
// Github : MehtabAlam2006

/*Take two integer inputs from user. First calculate the sum of two then product of two.
 Finally, print the sum and product of both obtained results.*/

#include <iostream>
using namespace std;

int main(){
    int x, y;
    cout<<"Enter the value for x: ";
    cin>>x;
    cout<<"enter the value for y: ";
    cin>>y;
    int sum = x + y;
    int prod = x * y;
    cout<<"The sum is : "<< sum + prod<<endl;
    cout<<"The product is : "<< sum * prod;;
}