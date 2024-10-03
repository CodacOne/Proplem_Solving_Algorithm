#include <iostream>

using namespace std;

int ReadNum(float& A,float& B)
{
    cout<<"enter the num 1 :"<<endl;
    cin>>A;

     cout<<"enter the num 2 :"<<endl;
    cin>>B;


}
 float CalculateRectangleArea(float A,float B)
 {
     float area;
     area=A*B;
     return area;

 }

 void  Printnumbers(float area)
 {
     cout<<"the area is :"<<area<<endl;



 }

int main()
{
    float A,B;
    ReadNum( A,B);
    Printnumbers(CalculateRectangleArea( A,B));
    return 0;
}
