#include<iostream>
using namespace std;

class Animal{
    public:
    void speak (){
        cout << "this animal is speaking"<< endl;

    }
};

class Dog : public Animal {
public:
    void speak()
    {
        cout << "the dog is barking" << endl;
    }
};

int main()
{
    Dog dog;
    dog.speak();

 return 0;
}