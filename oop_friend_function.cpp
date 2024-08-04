#include<iostream>
using namespace std;
class vector{
    int a[10];
    float avg;


     public: void get_data();
     friend void average (vector);
};


void vector:: get_data()
{
    for (int i=0; i<10; i++)
    {
    cin>>a[i];
    }
}

void average (vector v1)
{
    float sum= 0.0;
    for (int i=0; i<10; i++)
    {
        sum= v1.a[i];
    }
    v1.avg= sum/10;
    cout<<"average="<< v1.avg;
}
int main()
{
    vector obj;
    cout<<"enter 10 integers";
    obj.get_data();
    average (obj);
    return 0;
}