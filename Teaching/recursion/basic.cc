#include<iostream>
using namespace std;

// void printGreeting(){




//     cout << " good morning "<< endl;
//     printGreeting();
// }
// int counting3(int num)
// {
//     cout << num  << endl;
// }

// int counting2(int num)
// {
//     cout << num  << endl;
//     counting3(num-1);
// }

// int counting( int num){

//     cout << num << endl;
//     counting2(num -1);
// }

void countingA(int num)
{

    if (num == 0)
    {
        return;
    }


    countingA(num - 1);
    cout << num << endl;
    
}

int main()
{

    countingA(3);

    return 0;
}