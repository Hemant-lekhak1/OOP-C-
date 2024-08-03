#include<iostream>
using namespace std;
int main()
{
    int i,n,sum=0;

    cout<<"Enter the number up to which you want to find the sum of the odd numbers:";
    cin>>n;

    for(i=0;i<=n;i++)
    {
        if(i%2 != 0)
        {
            sum=sum+i;
        }
    }


    cout<<"Sum = "<<sum;
    return 0;
} 
