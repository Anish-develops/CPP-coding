#include<iostream>
using namespace std;


class NUMBERS {


    public:
    int num;
    
    NUMBERS(int num): num(num){}


    static int add (int num){
        return num + 10;
    }

    static int add( int num, int num2){
        return num + num2;

    }
    int operator+(NUMBERS temp )
    {
        return this->num + temp.num;
        
    }
    
};

// int add( int n , int n2){
//     return n+ n2;

// }


// function overloading



int main()
{
   cout <<  NUMBERS :: add( 11);

   cout << endl;
   cout << NUMBERS :: add ( 100 , 200)<< endl;

    NUMBERS a(10);
    NUMBERS b (20);
    cout << a + b;

    
    


 return 0;
}