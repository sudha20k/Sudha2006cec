#include<iostream>
using namespace std;
class BatchD
{
    int x,y;
    public:
    BatchD()
    {
        cout<<"Welcome to the program of programs"<<endl;
    }
    BatchD(int a,int b)
    {
        x=a;
        y=b;
        cout<<"value of a and b are:"<<a<<" and "<<b<<endl;
    }
    BatchD(BatchD & objK)
{
    x=objK.x;
    y=objK.y;
    cout<<"It is copying things from the existing object";
    cout<<"Values of x and y in objK are:"<<x<<"and"<<y<<endl;
}
};
int main()
{
    BatchD obj1;
    BatchD obj2(10,59);
    BatchD obj3=obj2;
}






