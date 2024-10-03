#include <iostream>

using namespace std;
int ReadAge()
{
    int Age;
    cout<<"enter your Age :"<<endl;
    cin>>Age;
    return Age;
}
bool ValidateNumberInRange(int number,int from,int to)
{
    return (number>=from && number<=to);

}

void printResult(int Age)
{
    if(ValidateNumberInRange(Age,18,45))
     cout<<Age<<" is Avalid Age "<<endl;
      else
     cout<<Age<<"  is a invalid Age "<<endl;

}

int main()
{

    printResult(ReadAge());
    return 0;
}
