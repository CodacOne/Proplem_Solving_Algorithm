#include <iostream>

using namespace std;

float ReadPositiveNumber(string message)
{
    float number;
    cout<<message<<endl;
    cin>>number;
    return number;
}

float CalcRemainder(float TotalCashPaid,float TotalBill)


{ cout<<"Remainder ="<<endl;
    return TotalBill-TotalCashPaid;

}

int main()
{
   float TotalBill=ReadPositiveNumber(" Please Enter Total Bill :");
   float TotalCashPaid=ReadPositiveNumber(" Please Enter Total cash Paid :");

   cout<<"Total Bill :"<<TotalBill<<endl;
   cout<<"Total Cash PAID :"<<TotalCashPaid<<endl;
   cout<<"|||||||||||||||"<<endl;

   cout<<CalcRemainder(TotalCashPaid,TotalBill);

    return 0;
}
