#include<iostream>
using namespace std;
class Principal
{
    public:
        Principal()
        {
            cout<<"Welcome to City College"<<endl;
        }
        void message()
        {
            cout<<"I am Principal,remember that....!!!"<<endl;
        }
};
class CSE:public Principal
{
    public:
       CSE()
       {
        cout<<"Welcome to CSE"<<endl;
       }
        void CS_Data()
        {
            cout<<"CS is Computer Science"<<endl;
        }
};
class IOT:public Principal
{
    public:
    IOT()
    {
        cout<<"Welcome to IOT"<<endl;
    }
       void IOT_Data()
       {
        cout<<"IS is not IOT"<<endl;
       }
    };
    class Student:public CSE,public IOT
    {
    public:
       void function()
       {
        cout<<"This is Superchild Class"<<endl;
       }
};
int main()
{
    Student s;
    s.CS_Data();
    s.IOT_Data();
    s.function();
    s.CSE::message();
    s.IOT::message();
}




