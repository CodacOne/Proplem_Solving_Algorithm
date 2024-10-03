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

float TotalPaidMonth(float LoanAmount, float MonthlyInstallment)
{
    cout<<"Total Paid Month"<<endl;
    return (float)LoanAmount/ MonthlyInstallment;
}

int main()
{
  float LoanAmount= ReadPositiveNumber("enter Loan Amount please :");
  float MonthlyInstallment=ReadPositiveNumber("enter Monthly nstallment please :");

  cout<<TotalPaidMonth( LoanAmount,MonthlyInstallment);
    return 0;
}
