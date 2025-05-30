#include<iostream>
using namespace std;
class Tyres
{
    public:
    void wheels()
    {
        cout<<"Tyres are accessed"<<endl;
    }
};
class Engine
{
    public:
    void start()
    {
      cout<<"Engine started"<<endl;
    }
};
class Car:public Tyres,public Engine
{
   public:
   void buy()
   {
    cout<<"We are going to the buy the car"<<endl;
   }
};
int main()
{
    Car obj1;
    obj1.buy();
    obj1.start();
    obj1.wheels();
}