#include <iostream>

using namespace std;

void Readmarks(int& mark1,int& mark2,int& mark3)
{
    cout<<"enter the mark 1:"<<endl;
     cin>>mark1;

     cout<<"enter the mark 2:"<<endl;
     cin>>mark2;

     cout<<"enter the mark 3:"<<endl;
     cin>>mark3;


}
 int SumOf3marks(int mark1,int mark2,int mark3)
 {
     return mark1+mark2+mark3;



 }
float CalcAvgMarks(int mark1,int mark2,int mark3)
{

    return (float)SumOf3marks( mark1, mark2, mark3)/3;

}

 void Printmarks(float Average)
 {
     cout<<Average;


 }


int main()
{
   int mark1,mark2,mark3;
   Readmarks(mark1,mark2,mark3);
   Printmarks(CalcAvgMarks(mark1,mark2,mark3));
    return 0;
}
