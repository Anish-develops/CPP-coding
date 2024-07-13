// C++ program to demonstrate
// the use of rand()
#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
    int N = 100;
    // This program will create some sequence of
    // random numbers on every program run
    for (int i = 0; i < 5; i++){
        cout << rand() << " -->  ";
    
        cout << rand() % N << " ";
        cout << endl;
    }

    string name = "anish";
    

    return 0;
    
}
