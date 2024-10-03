#include <iostream>
#include <cmath>
using namespace std;

enum enPrimeOrNotPrime{prime=1,notPrime=2};

float ReadPositiveNUmber(string message)
{

    float number=0;
    do
    { cout<<message<<endl;
        cin>>number;


    }while(number<=0);

    return number;
}

enPrimeOrNotPrime CheckIfPrime(int number)
{
    int m=round(number/2);

    for(int counter=2;counter<=m;counter++)
    {
        if(number % counter==0)
            return enPrimeOrNotPrime::notPrime;
    }
    return enPrimeOrNotPrime::prime;
}
void PrintNumberType(float number)
{
    switch(CheckIfPrime(number))
    {
   case  enPrimeOrNotPrime::notPrime:
    cout<<"the number is Not Prime "<<endl;
        break ;

         case  enPrimeOrNotPrime::prime:
    cout<<"the number is Prime "<<endl;
        break ;

    }

}

int main()
{
    PrintNumberType(ReadPositiveNUmber("Enter a positive number :"));
    return 0;
}
