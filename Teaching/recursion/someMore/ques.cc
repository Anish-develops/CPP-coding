#include<iostream>
using namespace std;

int sumOfDigits( int num ){
    // if ( num% 10 == num ){
    //     return num;

    // }

    if (num == 0){
        return 0;
    }

    int lastDigit = num% 10;
    int tempans = lastDigit + sumOfDigits( num/10);
    return tempans;

    // return num % 10 + sumOfDigits( num/10 );


}
int productOfDigits(int num)
{

    if (num % 10 == num)
    {
        return num;
    }

    return num % 10 * productOfDigits(num / 10);
}
int main()
{

    int num = 7979;

    cout << productOfDigits( num )<< endl;
 return 0;
}