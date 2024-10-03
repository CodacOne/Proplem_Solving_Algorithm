#include <iostream>

using namespace std;

float ReadPositiveNumber(string message)
{
    float number;
    cout<<message<<endl;
    cin>>number;
    return number;
}

float TotalBillAfterServiceFeeAndSalesTax(float TotalBill)

{  TotalBill=TotalBill*1.1;
  TotalBill*=1.16;
    return TotalBill;

}

int main()
{
   float TotalBill=ReadPositiveNumber(" Please Enter Total Bill :");


   cout<<"Total Bill ="<<TotalBill<<endl;
   cout<<"Total Bill After service fee and sales tax = "<<endl;


   cout<<TotalBillAfterServiceFeeAndSalesTax(TotalBill);

    return 0;
}
