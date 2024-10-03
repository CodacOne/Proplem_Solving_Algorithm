#include <iostream>

using namespace std;



float ReadPositiveNumber(string message)
{
    float number;
    do{
        cout<<message<<endl;
    cin>>number;

    }while(number<0);
    return number;
}

float TotalPaidMonth(float LoanAmount, float HowMoneyMonth)
{
    cout<<"Monthly Installment"<<endl;
    return (float)LoanAmount/ HowMoneyMonth;
}

int main()
{
  float LoanAmount= ReadPositiveNumber("enter Loan Amount please :");
  float HowMoneyMonth=ReadPositiveNumber("enter How Money Month please :");

  cout<<TotalPaidMonth( LoanAmount,HowMoneyMonth);
    return 0;
}
