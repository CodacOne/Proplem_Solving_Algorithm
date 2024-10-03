#include <iostream>
#include <cmath>
using namespace std;

int ReadNum(float& A)
{
    cout<<"enter  A :"<<endl;
    cin>>A;



}
 float CircleAreaInscribedInASequare(float A)
 {
     float area, PI=3.14;

     area=(PI*pow(A/2,2));
     return area;

 }

 void  Printnumbers(float area)
 {
     cout<<"the area is :"<<area<<endl;



 }

int main()
{
    float A;
    ReadNum(A);
    Printnumbers(CircleAreaInscribedInASequare(A));
    return 0;
}
