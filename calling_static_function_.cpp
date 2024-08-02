#include<iostream>
using namespace std;
class BCT
{

 int code;
  static int count;

 public: void setcode()
      {count++;
       code=count;
       }

    void showcode()
    { 
        cout<<" student code= " << code <<"/BCT/080"<<endl;
    }

    static void showcount()
    {
        cout<<" Records of " <<count<<" students found"<<endl;
    }
};

int BCT::count;

int main()
{
    BCT S1,S2 ,S3,S4;
    S1.setcode();
    S2.setcode();
    S3.setcode();
    S1.showcode();
    S2.showcode();
    S3.showcode();
    S4.setcode();
    S4.showcode();
     BCT::showcount();
    return 0;
}