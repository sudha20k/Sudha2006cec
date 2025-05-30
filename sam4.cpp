#include<iostream>
using namespace std;
class A
{
    public:
       void show()
       {
         cout<<"Welcome to City Engineering College"<<endl;
       }
};
class B:public A
{
   public:
       void show()
       {
        cout<<"This is BatchD"<<endl;
       }
};
int main()
{
 B obj;
 obj.show();
 A obj1;
 obj1.show();
}