#include<iostream>
using namespace std;
int factorial(int num) ;
int main()
{

    cout << " the factorial is : " << factorial(10);
 return 0;
}

int factorial( int num){

    if (num == 0)
        return 1;
    if (num ==  1){
        return 1;
    }
    return num * factorial(num-1);
}