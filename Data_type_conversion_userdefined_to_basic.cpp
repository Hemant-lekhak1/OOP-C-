#include <iostream>
using namespace std;

class celcius
{
    float temperature;
    public:celcius()
    {
        temperature=0;
    }
    operator float()
    {
        float ferenheit;
        ferenheit=(temperature*9/5)+32;
        return (ferenheit);
    }
    void gettemperature()
    {
        cout<<"enter temperature in celcius";
        cin>>temperature;
    }
};

int main()
{
    celcius cel;
    float k;
    cel.gettemperature();
    k=cel;
    cout<<"temperature in Farenheit= "<<k;
    return 0;
}