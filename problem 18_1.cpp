#include <iostream>
#include <cmath>
using namespace std;

int ReadNum(float& r)
{
    cout<<"enter the radius :"<<endl;
    cin>>r;



}
 float CircleArea(float r)
 {
     float area, PI=3.14;

     area=PI*pow(r,2);
     return area;

 }

 void  Printnumbers(float area)
 {
     cout<<"the area is :"<<area<<endl;



 }

int main()
{
    float r;
    ReadNum(r);
    Printnumbers(CircleArea(r));
    return 0;
}
