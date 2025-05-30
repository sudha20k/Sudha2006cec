#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream file("Files Data.txt");
    file<<"This is City Engineering College\n";
    file<<"I am modifying the data in the file";
    file.close();
}