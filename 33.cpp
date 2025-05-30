#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
    ifstream file("Files Data.txt");
    string str;
    while(getline(file,str))
       cout<<str<<endl;
    file.close();
}