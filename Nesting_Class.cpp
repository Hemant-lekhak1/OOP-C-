#include<iostream>
using namespace std;
class student
{
    int roll;
    char name[20];
    public:void enter()
    {
        cout<<"Enter Your Info:";
        cin>>name>>roll;
    }
    void display()
    {
        cout<<name<<endl<<roll<<endl;
    }
    class date
    {
        int day,month,year;
        public:void getdate();
                void showdate();
    };
};
void student::date::getdate()
{
    cout<<"enter date"<<endl;
    cin>>day>>month>>year;
}

void student::date::showdate()
{
    cout<<year<<"/"<<month<<"/"<<day;
}
int main()
{
    student s1;
    student::date d1;
    s1.enter();
    d1.getdate();
    s1.display();
    d1.showdate();
    return 0;
}