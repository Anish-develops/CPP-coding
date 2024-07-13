#include <iostream>

using namespace std;

class A {
    public:
    void func(){cout << "this is running in Class A";}

};
class B {
    public:
    void func() { cout << "this is running in Class B" ;}
};

class C : public A , public B{
    public:
    int value;
};



int main(){
    C objofC;
    objofC.A::func();
    objofC.B::func();
    
    return 0;
}