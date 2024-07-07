#include <iostream>

using namespace std;

int main(){
    // references are the alias to any variable
    // and mostly used in function calls and return datatype;

    int number = 123123;
    int& refnum = number;
    refnum++;
    cout << refnum;

    int a = 10 ;
    int b = 20 ;
    cout << a << " "<< b <<endl;
    swap(a, b);
    cout << a << " " << b << endl;
}

void swap( int& first , int& sec){
    int temp = first;
    first = sec;
    sec = temp;

}