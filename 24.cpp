#include<iostream>
using namespace std;
int main()
{
    string str;
    cin>>str;
    //"5This3 str7in69gi20 420"
    char max='0';
    for(char c:str)
    {
        if(c>=48 && c<=57)
        {
            if(max<c)
            max=c;
        }
    }
    cout<<"Max digit is:"<<max;
    return 0;
}