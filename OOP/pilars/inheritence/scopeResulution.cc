#include <iostream>

using namespace std;

class A {
    public:

    const float pi = 3.14159 ;


    void func(){cout << "this is running in Class A" <<endl;}
    int greetings() const;
};
class B {
    public:
        void func() { cout << "this is running in Class B" << endl; }
};

class C : public A , public B{
    public:
    int value;
    //void func() { cout << "this is running in Class c" << endl; }
};

int A:: greetings () const
{
    cout <<  "this is in greeting in class A"  << endl;
}


class Human{
    
}


int main(){
    C objofC;
    objofC.A::func();
    objofC.B::func();

    objofC.greetings();

    
    objofC.number = 2000;


    
    return 0;
}