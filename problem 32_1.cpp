#include <iostream>

using namespace std;


int ReadNumber(){

    int number;
    cout<<"enter the number :"<<endl;
    cin>>number;
    return number;

}
int ReadPower()
{
    int number;
    cout<<"enter the power M :"<<endl;
    cin>>number;
    return number;

}

int PowerOfM(int number,int power)
{
    int p=1;
    if(power==0)
    {
        return 1;
    }
    for(int i=1;i<=power;i++)
    {
        p*=number;

    }
    cout<<endl<<"Result= ";
  return p;
}

int main()
{
  cout<< PowerOfM(ReadNumber(),ReadPower());
    return 0;
}
