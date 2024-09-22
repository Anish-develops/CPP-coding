#include<iostream>
using namespace std;

int pow (int num , int exp){
    if ( exp == 0 ){
        return 1;
    }
    return num * pow( num , exp - 1);
    
}
int main()
{

    cout << pow ( 2 ,10);
 return 0;
}