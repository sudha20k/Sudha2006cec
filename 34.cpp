#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream file("Files Data.txt",ios::app);
    file<<"This is the new data after the old one...";
    file.close();
}