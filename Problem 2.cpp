#include <iostream> // For Input and Output Function
#include <cmath> // provides access to mathematical functions like sqrt()
using namespace std;

int main() 
{
    
 float a,b,c; // Declaration Variable and User Input 
 cout << "Enter The a, b, and c: ";
 cin>>a>>b>>c;
 
 float D= b*b-4*a*c; // Discrimination Calculation
 
 // Checking The Discrimination Calculation
 if (D<0) // Case If D<0
 {
     cout<<" There are no real roots"<<endl;
 } 
 else if (D==0) // Case if D=0
 {
   float x = (-b)/2*a; // Calculation of Case of One Real Roots
   cout<<"x : "<<x<<endl;
 
 } else // Case If D>0
 {
   float x1= ((b*-1)+ sqrt(D))/(2*a); // Calculation of Case of Two Real Roots
   float x2= ((b*-1)- sqrt(D))/(2*a);
   
   cout<<"x1 ="<<x1<<endl;
   cout<<"x2 ="<<x2<<endl;
   
   return 0; // End Program
 }
}
