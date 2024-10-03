#include <iostream>

using namespace std;

enum enOperationType{add='+',sub='-',mult='*',divid='/'};

float  ReadNumber()
{
    float number;
    cout<<"enter the number :"<<endl;
    cin>>number;
    return number;




}

 enOperationType ReadOperationType()
 {
     char ot='+';
     cout<<"plz enter operation type (*,/,+,-)"<<endl;
     cin>>ot;
     return (enOperationType)ot;

 }

 float Calculate(  float number1,  float number2,enOperationType opType){

 switch (opType)
 {
   case   enOperationType::add:
       return number1+number2;

       case   enOperationType::sub:
       return number1-number2;

      case   enOperationType::mult:
       return number1*number2;

        case   enOperationType::divid:
       return number1/number2;
 }

 }

int main()
{
 float number1= ReadNumber();
 float number2= ReadNumber();

 enOperationType opType = ReadOperationType();

 cout<<Calculate( number1, number2,opType);
    return 0;
}
