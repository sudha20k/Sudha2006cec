#include<iostream>
using namespace std;
class BatchD
{
    public:void display()
    {
        cout<<"Welcome to City College"<<endl;
    }
};
int main()
{
    BatchD obj;
    obj.display();
    BatchD*abc=new BatchD;
    abc->display();
    delete abc;
    obj.display();
}