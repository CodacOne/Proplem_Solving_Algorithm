#include <iostream>

using namespace std;

int ReadNumber(){
int number ;
cout<<"pls,enter the number :"<<endl;
cin>>number;
return number;

}

float CalcHalfNumber(int number)
{

    return (float)number/2;

}


void  PrintResults(int number )
{
    string result="Half number "+to_string(number)+" is "+to_string(CalcHalfNumber(number));

    cout<<result<<endl;
}


int main()
{
    PrintResults(ReadNumber());
    return 0;
}
