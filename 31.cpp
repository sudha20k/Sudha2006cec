#include<iostream>
using namespace std;
class Day7
{
    string name;
    public:
        void setName(string str)
        {
            name=str;
        }
        void getname()
        {
            cout<<"Name:"<<name<<endl;
        }
};
int main()
{
    int n,i;
    cin>>n;
    Day7*students=new Day7[n];
    string str;
    for(i=0;i<n;i++)
    {
        cin>>str;
        students[i].setName(str);
    }
    for(i=0;i<n;i++)
    {
        students[i].getname();
    }
    delete[]students;
}