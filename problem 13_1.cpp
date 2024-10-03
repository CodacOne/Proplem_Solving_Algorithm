#include <iostream>

using namespace std;

int ReadNum(int& num1,int& num2,int& num3)
{
    cout<<"enter the num 1 :"<<endl;
    cin>>num1;

     cout<<"enter the num 2 :"<<endl;
    cin>>num2;

      cout<<"enter the num 3 :"<<endl;
    cin>>num3;

}
 int MaxOf2Numbers(int num1,int num2,int num3)
 {
     if(num1>num2)
          if(num1>num3)  return num1;

           else     return num3;
    else
        if(num2>num3)  return num2;
          else       return num3;


 }

 void  Printnumbers(int MaxOf2Numbers)
 {
     cout<<"The Numbers Of Max :"<<MaxOf2Numbers<<endl;;



 }

int main()
{
    int num1,num2,num3;
    ReadNum(num1,num2,num3);
    Printnumbers(MaxOf2Numbers(num1,num2,num3));
    return 0;
}
