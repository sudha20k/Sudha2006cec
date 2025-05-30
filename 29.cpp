#include<iostream>
using namespace std;
class person
{
    public:
        string name;
        int age;
        person(string n,int a){
            name=n;
            age=a;
        }
        void display(){
            cout<<"Name:"<<name<<",Age:"<<age<<endl;
        }
};
int main(){
    person*p=new person("Alex",30);
    p->display();
    delete p;
    return 0;
}