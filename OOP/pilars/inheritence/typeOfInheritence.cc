#include<iostream>
using namespace std;

class Main{
    public:
        void funcMain() { cout << " this is the main class" << endl; }
};

class A : public Main
{
public:
    void printA() { cout << " this is the A class" << endl; }
};
class B : public Main
{
public:
    void printB() { cout << " this is the B class" << endl; }
};
class C : public B, public A
{
public:
    void printC() { cout << " this is the C class" << endl; }
};






int main()
{
    A a;
    B b;
    C c;

    a.funcMain();
    a.printA();

    b.funcMain();
    b.printB();

    c.printA();
    c.printC();
    c.printB();
    c.A::funcMain();
    c.B::funcMain();





    return 0;
}
