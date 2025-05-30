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
        void CS_Data()
        {
            cout<<"CS is Computer Science"<<endl;
        }
};
class IOT:public Principal
{
    public:
       void IOT_Data()
       {
        cout<<"IS is not IOT"<<endl;
       }
};
int main()
{
    CSE cs;
    cs.CS_Data();
    cs.message();
    IOT io;
    io.IOT_Data();
    io.message();
}