#include <iostream>
#include <cmath>
using namespace std;

int ReadNum(float& A,float& H)
{
    cout<<"enter the num 1 :"<<endl;
    cin>>A;

     cout<<"enter the num 2 :"<<endl;
    cin>>H;


}
 float TriangleArea(float A,float H)
 {
     float area;
     area=0.5*A*H;
     return area;

 }

 void  Printnumbers(float area)
 {
     cout<<"the area is :"<<area<<endl;



 }

int main()
{
    float A,H;
    ReadNum( A,H);
    Printnumbers(TriangleArea( A,H));
    return 0;
}
