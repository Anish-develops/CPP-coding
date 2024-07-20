#include<iostream>
using namespace std;

class Animal{
    public:
    // virtual void  speak (){
    //     cout << "this animal is speaking"<< endl;

    // }
    
    virtual void speak() = 0 ;
    
    
};

class Dog : public Animal {
public:
     void speak() override
    {
        cout << "the dog is barking" << endl;
    }
};

class Cat : public Animal{
public:
    void speak() override{
        cout << "Meow Meow " << endl;
    }
};

int main()
{
    Dog dog;
    dog.speak();

    Cat Sargun ;
    Sargun.speak();

    Animal * german = new Dog();
    german->speak();

    delete german ;

    return 0;
}