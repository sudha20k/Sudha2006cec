#include<iostream>
#include<exception>
using namespace std;
int main()
{
    int a ,b;
    cin>>a>>b;
    int c;
    try
    {
        {
            if(b==0)
            throw 404;
            c=a/b;
            cout<<c<<endl;
         }
     catch (int x)
    {
        cout<<"Zero error came...!!!"<<endl;
    }
    cout<<"Today is already a goood dayyy!!!!"<<endl;
    }    
}