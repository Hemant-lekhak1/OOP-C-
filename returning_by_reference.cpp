#include<iostream>
using namespace std;

 int &max(int &x,int &y);
 int main()
  {
    int a,b;
    cout<<"Enter values of a and b:";
    cin>>a>>b;
    max(a,b)=50;
    cout<<"Values of a & b = "<<a << b;
    return 0;
  }
  
  int &max(int &x, int &y)
  {
    if(x>y)
    return x;
    else 
    return y;  
  }
