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
    string PinCode;
    do{
        PinCode=ReadPinCode();
        if(PinCode=="1234")
        {
            return 1;
        }
       else
       {
           cout<<"Wrong Pin"<<endl;
           system (" color 4f");


       }
    }while( PinCode!="1234");

}

int main()
{
    if( login())
    {
       system (" color 2f");
       cout<<"Your Balance is :"<<"7500"<<endl;
    }

    return 0;
}
