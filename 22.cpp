#include<iostream>
using namespace std;
class Day6
{
    public:
      int area(int s) 
      {
        cout<<"Square area:"<<(s*s)<<endl;
      }
      int area(int l,int b)
      {
        cout<<"Rectangle area:"<<(l*b)<<endl;
      }
      float area(float b,float h)
      {
        cout<<"Triangle area:"<<(0.5*b*h)<<endl;
      }
      float area(float r)
      {
        cout<<"Circle area:"<<(3.14*r*r)<<endl;
      }
};
int main()
{
    Day6 obj;
    obj.area(10);
    obj.area(10,20);
    obj.area(5.1f);
    obj.area(10.6f,6.9f);
}

      
