#include <iostream>
#include <cmath>
using namespace std;

int ReadAandB(float& a,float& b,float& c)
{
   cout<<"enter A "<<endl;
    cin>>a;


    cout<<"enter B "<<endl;
    cin>>b;


    cout<<"enter C "<<endl;
    cin>>c;


}
 float CircleAreaCircleDiscribedAroundAnArbitaryTriangle(float a,float b,float c)
 {
     float area, PI=3.14;
     float p;
     p=(a+b+c)/2;
     float t;
     t=(a*b*c)/(4*sqrt(p*(p-a)*(p-b)*(p-c)));
     area=PI*pow(t,2);
     return area;

 }

 void  PrintResults(float area)
 {
     cout<<"the area is :"<<area<<endl;



 }

int main()
{  float a,b,c;
   ReadAandB(a,b,c);
    PrintResults(CircleAreaCircleDiscribedAroundAnArbitaryTriangle(a,b,c));
    return 0;
}
