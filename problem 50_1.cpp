#include <iostream>

using namespace std;

string ReadPinCode()
{
    string PinCode;
    cout<<"Please Enter PinCode :"<<endl;
    cin>>PinCode;

    return PinCode;
}

bool login()
{
    int counter=3;
    string PinCode;

    do      {
            counter--;
        PinCode=ReadPinCode();
        if(PinCode=="1234")
           {
            return 1;
           }

       else
       {

           system (" color 4f");
     cout<<"Wrong Pin ,you have :"<<counter<<" more tries"<<endl;
       }

           }while(counter>=1 && PinCode!="1234");
   return 0;
}

int main()
{
    if( login())
    {
       system (" color 2f");
       cout<<"Your Balance is :"<<"7500"<<endl;
    }

    else
    {
        cout<<"your Card blocked call the bank for help : "<<endl;


    }

    return 0;
}
