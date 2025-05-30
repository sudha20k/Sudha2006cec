#include<iostream>
#include<exception>
using namespace std;
int main()
{
    try{
        throw 404;
    }
    catch (int e)
{
    cout<<"Page not found..."<<e<<endl;
}
}
