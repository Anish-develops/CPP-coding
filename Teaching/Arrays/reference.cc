#include<iostream>
using namespace std;
void swapTwoNumber(int & a, int & b);
int main()
{

    string name  =" anish ";
    string&  naam = name;

    cout << name << endl;
    cout << naam << endl;

    naam = " AASTHA";

    cout << name << endl;
    cout << naam << endl;

    name = " SARGUNA";
    cout << name << endl;
    cout << naam << endl;

    string name2 = " krish";
    naam = name2;

    cout << naam << endl;

    cout << name << endl;

    naam = "SARGUN";
    

    cout << name << endl;
    cout << name2 << endl;
    cout << naam << endl;

    int first = 10 ;
    int sec = 11;

    cout << first << endl;
    cout << sec << endl;
    swapTwoNumber( first , sec);
    cout << first << endl;
    cout << sec << endl;

    return 0;

    
}

void swapTwoNumber( int & a , int & b)
{
    int temp = a ;
    a = b;
    b = temp;
}
