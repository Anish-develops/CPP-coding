#include <iostream>
//#include <string>

using namespace std;

int main(){
    int number ;
    cout << "enter a number : ";
    cin >> number;
    cout << "your number is added with 10 and is now :" << (number + 10);
    printf("we can also use the printf function still like we use to in c language\n");
    

    string name = "Anish Kumar";
    string favColor;
    cout << name <<endl;

    cin.get();
    getline(cin, favColor); //  this will take whole line in input
    cout << "your fav. color is :" << favColor << endl;



    return 0;
}