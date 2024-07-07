#include <iostream>
using namespace std;

int main (){
    int life = 5;
    life = 10;

    int card;
    card = 30;
    cout << "value of the original variable without changing : "<<card << endl;


    int my_card = card;
    my_card = 200;
    cout << "value of the original variable after changing its value using my_card variable : "<< card << endl;


    int *myp;
    myp = &card;

    my_card = *myp;// dereferincing

    cout << card << endl;
    cout << my_card << endl;
    cout << *myp << endl;
    cout << myp << endl;


    *myp = 1500;
    cout << card << endl;
    cout << my_card << endl;
    cout << *myp << endl;
    cout << myp << endl;
    cout << &card << endl;

    return 0;
}