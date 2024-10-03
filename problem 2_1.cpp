#include <iostream>

using namespace std;

string ReadName()
{
   string name;
 cout<<"enter your name :" <<endl;
   getline(cin,name);
    return name;

}

void  printName(string name)
{


    cout<<"\n your name is :"<<name<<endl;
}

int main()
{
   printName(ReadName());
    return 0;
}
