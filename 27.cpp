#include<iostream>
using namespace std;
class Day7
{
    public:
        int add(int a,int b)  {return a+b;}
};
int main()
{
   int k;
   k=106;
    int*j=new int;
    *j=106;
    delete j;
    cout<<k<<endl;
    return 0;
}