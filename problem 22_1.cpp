#include <iostream>
#include <cmath>
using namespace std;

int ReadAandB(float& a,float& b)
{
    cout<<"enter A "<<endl;
    cin>>a;


    cout<<"enter B "<<endl;
    cin>>b;



}
 float CircleAreaInscribedInAnIsoscelesTriangle(float a,float b)
 {
     float area, PI=3.14;

     area=(pow(b,2)*PI/4)*((2*a-b)/(2*a+b));
     return area;

 }

 void  PrintResults(float area)
 {
     cout<<"the area is :"<<area<<endl;



 }

int main()
{  float a,b;
   ReadAandB(a,b);
    PrintResults(CircleAreaInscribedInAnIsoscelesTriangle(a,b));
    return 0;
}
