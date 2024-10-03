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

int ReadUntilAgeBetween(int from,int to)
{
    int Age=0;
    do {
       Age=ReadAge();

    }while(!ValidateNumberInRange(Age,18,45));
  return Age;

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

    printResult(ReadUntilAgeBetween(18,45));
    return 0;
}
