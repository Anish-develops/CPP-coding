#include<iostream>
using namespace std;

int sumInLoop(int n ){
    int sum = 0;
    for (int  i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    return sum;
    
}

int sumInRec( int n){

    if (n ==0)
    {
        return n;
    }

    return n + sumInRec(n-1);
}

int proInRec(int n)
{

    if (n == 1)
    {
        return 1;
    }

    return n * proInRec(n - 1);
}

int main()
{

    int num = 10;
    //

    
    cout << proInRec(5);
 return 0;
}
