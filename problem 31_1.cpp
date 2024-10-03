#include <iostream>

using namespace std;

int ReadNumber()
{
    int number;
    cout<<"enter the number :"<<endl;
    cin>>number;
    return number;
}

void  PowerOf2_3_4(int number)
{
    int a,b,c;
    a=number*number;
    b=number*number*number;
    c=number*number*number*number;
    cout<<a<<"\t"<<b<<"\t"<<c<<endl;

}
int main()
{
   PowerOf2_3_4(ReadNumber());
    return 0;
}
