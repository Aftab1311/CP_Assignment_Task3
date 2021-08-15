// Task 3
// Name : Aftab Ahmed 

/* 
AIM: WAP to calculate tax deduction as follow-
    1. Up to 2.5L no tax.
    2. More than 2.5 L but up to 5L 10%.
    3. More than 5L but up to 10L 20%.
    4. More than 10L 30%.
        i. If senior citizen (age >= 60) then relaxation of 5%.
        ii. if woman candidate (age >= 60) then relaxation of 3%.
*/

#include <iostream>
using namespace std;

int main()
{
    float income, tax;
    string gender;
    int age;
    cout << "Enter your age : ";
    cin >> age;
    cout << "Enter your gender : ";
    cin >> gender;
    cout << "Enter your income(IN LAKHS) : ";
    cin >> income;
    if (income <= 2.5)
    {
        cout << "You don't need to pay Tax!!!!";
    }
    else if (income > 2.5 && income <= 5)
    {
        tax = 0.1 * income;
        cout << "You need to pay your Tax amount : " << tax << " lakhs" << endl;
    }
    else if (income > 5 && income <= 10)
    {
        tax = 0.2 * income;
        cout << "You need to pay your Tax amount : " << tax << " lakhs" << endl;
    }
    else if (income > 10)
    {
        if (gender == "male")
        {
            if (age >= 60)
            {
                tax = 0.25 * income;
                cout << "You are a senior citizen and got benefit of 5% relaxation!!!" << endl;
                cout << "You need to pay your Tax amount : " << tax << " lakhs" << endl;
            }
            else
            {
                tax = 0.3 * income;
                cout << "You need to pay your Tax amount : " << tax << " lakhs" << endl;
            }
        }
        else
        {
            if (age >= 60)
            {
                tax = 0.27 * income;
                cout << "You are a woman senior citizen and got benefit of 3% relaxation!!!" << endl;
                cout << "You need to pay your Tax amount : " << tax << " lakhs" << endl;
            }
            else
            {
                tax = 0.3 * income;
                cout << "You need to pay your Tax amount : " << tax << " lakhs" << endl;
            }
        }
    }

    return 0;
}
