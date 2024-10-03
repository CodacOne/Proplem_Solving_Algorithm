#include <iostream>

using namespace std;

int ReadAPositiveNumber(string message)
{  int number;
    do {
        cout<<message<<endl;
        cin>>number;

    } while(number<0);

    return number;

}

void PrintFactorial(int number)
{  int fac=1;
    for(int i=number;i>=1;i--)
    {
        fac*=i;

    }
    cout<<"fac= "<<fac<<endl;

}

int main()
{
    PrintFactorial(ReadAPositiveNumber("please Enter A Positive Number :"));
    return 0;
}
