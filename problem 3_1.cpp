#include <iostream>

using namespace std;

enum enNumberType{Odd=1,Even=2};

int ReadNumberType()
{
   int number;
 cout<<"enter your number :" <<endl;
   cin>>number;
    return number;

}

enNumberType CheckNumberType(int number)
{
    if(number%2==0)
    {
        return enNumberType::Even;
    }
    else
      return enNumberType::Odd;

}

void  printNumberType(enNumberType myObject)
{
    if(myObject==enNumberType::Even)
    {
        cout<<"number is even "<<endl;
    }
    else
         cout<<"number is odd "<<endl;
    }



int main()
{
   printNumberType(CheckNumberType(ReadNumberType()));
    return 0;
}
