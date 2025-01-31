#include<iostream>
using namespace std;
int main()
{
    int num, i, sum=0;

    cout<<"Enter a number : ";
    cin>>num;

    for(i=1;i<=num;i++)
        sum+=i;

    cout<<"Sum of first "<<num<<" natural numbers is "<<sum;

    return 0;
}