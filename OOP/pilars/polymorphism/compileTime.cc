#include<iostream>
#include <string.h>
using namespace std;

// function overloading

// this is when one class has two or more than two function with same name and differentiated by the parameters



class MainClass{
    private:
    int age ; 
    char name[15];
    
    public:
    // constructor
    MainClass(){}


    MainClass (int age, char name[]): age(age){
        strcpy(this->name, name);
    }
    void showInfo(){
        cout << "the age is "<< age << "the salary is "<< name <<endl;    
    }

    void showInfo(int age){
        cout<< "the age is "<< age<< endl;
    }

    void showInfo(char name[]){
        cout << "the name is "<< name<<endl;
    }


};


// operator overloding

class ComplexNo {
    private:
    int real = 0;
    int imaginary = 0;

    public:
    ComplexNo (){}
    ComplexNo (int real , int img):real(real), imaginary(img){}

    void showNum(){cout<< real << " + i"<< imaginary<< endl;}

    ComplexNo operator+ (ComplexNo & num){
        ComplexNo ans;
        ans.real = this->real + num.real;
        ans.imaginary = this->imaginary + num.imaginary;
        return ans;

    }
    
};


    



int main()
{
    // MainClass per1(10, "pawan");
    // per1.showInfo();
    // per1.showInfo(14);
    // per1.showInfo("krish kumar");
    

    ComplexNo first(1,4);

    first.showNum();

    ComplexNo sec (5 , 8) , third;
    sec.showNum();

    third = first + sec;

    third.showNum();


    
    



    




 return 0;
}