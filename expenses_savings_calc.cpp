/*To manage and keep an eye on how much i need to save monthly
if i have started saving from 1st January 2023(01/01/2023)
and save 1000 per month with a base amount of 2000 and an extra 500 for emergency purpose*/
#include<iostream>
using namespace std;
int main()
{
    int month, year, temp, save, curr_amount, amount;
    float back_months;
    cout<<"Enter the year : ";
    cin>>year;
    cout<<"Enter the month : ";
    cin>>month;
    cout<<"Enter your current balance : ";
    cin>>curr_amount;
    temp = year - 2023; //you can make changes here if your starting year is different
    amount = 12*temp*1000 + month*1000 + 2000 + 500; //you can make changes here if your per month saving (1000), base amount (2000) and emergency fund (500) is different
    save = 12*temp*1000 + month*1000; //you can make changes here if your per month saving (1000) is different
    curr_amount = curr_amount - amount;
    cout<<"\n\nThe minimum savings according to the plan till "<<month<<"/"<<year<<" : "<<save;
    cout<<"\n\nThe minimum amount that should be in the bank account till "<<month<<"/"<<year<<" with a base amount of 2000 and a emergency amount of 500 : "<<amount;
    if(curr_amount>=0)
    {
        cout<<"\n\nYou're going good and have "<<curr_amount<<" more than estimated";
    }
    else
    {
        curr_amount = curr_amount*(-1);
        cout<<"\n\nYou are lagging behind by "<<curr_amount;
        back_months = curr_amount/500; //you can make changes here if you can save more than 500 per month at loss
        cout<<"\nYou need to cut short expenses and save 500(per month) for more "<<back_months<<" month(s) to get back on the track";
    }
    return 0;
}
