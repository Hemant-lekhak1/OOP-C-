#include<iostream>
using namespace std;
class displayer
{
  private:
    char Printer[40];
  public:
    int k;
    void enter()
    {
      cout<<"Enter no of times:"<<endl;
      cin>>k;
      cout<<"The thing you want to enter "<< k <<" times"<<endl;
      cout<<"space is not valid";
      cin>>Printer;
    }

    void display()
    {
        for(int i=0;i<=k;i++)
        {
        cout<<Printer<<endl;
        }
    }
};  
int main()
       {
         displayer d1;
         d1.enter();
         d1.display();
         return 0;
       }