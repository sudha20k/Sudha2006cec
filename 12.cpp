#include<iostream>
using namespace std;
class BatchD 
{
    int roll;
    char gender;
    public:
         int add();
         void display()
         {
            roll=106;
            gender='M';
            cout<<"SHOW OFF"<<roll<<" "<<gender;
         }
};
int BatchD::add()
{
    cout<<"\n Addition is done....";
    return 0;
}
int main()
{
    BatchD obj1;
    obj1.display();
    obj1.add();
    return 0;
}

