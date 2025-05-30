#include<iostream>
using namespace std;
class Day3
{
    int a,b;
    public:
    Day3(){cout<<"Default"<<endl;}
    Day3(int x,int y)
    {a=x;b=y; cout<<"Values are:"<<a<<"and"<<b<<endl;}
    Day3(int x){cout<<"Value of x:"<<x<<endl;}
~Day3(){cout <<"Object deleted...!!!"<<endl;}
};
int main(){
    Day3 obj1;
    cout<<"My program today afternoon is good"<<endl;
    Day3 obj2(69);
    Day3 obj3(55,14);
    cout<<"My program yesterday was very good"<<endl;
    Day3 obj4;
}
