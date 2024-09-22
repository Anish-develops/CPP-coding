// C++ program to demonstrate
// working of auto keyword

#include <bits/stdc++.h>
using namespace std;

// Driver Code
int main()
{

    // Variables
    auto an_int = 26;
    auto a_bool = false;
    auto anish = 26.24;
    //auto ptr = &a_float;

    // Print typeid
    cout << typeid(a_bool).name() << "\n";
    cout << typeid(anish).name() << "\n";
    return 0;
}