#include<iostream>
#include <vector>




using namespace std;

void print(vector<int> arr) ;
int main()
{

// vector <int> arr;

// arr.push_back(10);
// arr.push_back(20);
// arr.push_back(30);

// for (int i = 0; i < arr.size(); i++)
// {
//     cout << arr.at(i) << "  ";
// }

// vector <int> arr2  ;
// for (int  i = 0; i < 3; i++)
// {
//     arr2.push_back(i*100);

// }

// print(arr);

// arr2.swap(arr);


// for (int i = 0; i < arr.size(); i++)
// {
//    cout << arr.at(i) << "  ";
// }


vector <string> names(10);

names.push_back("anish");
names.push_back("aastha");
names.push_back("sargun");




cout << names.size();

names.push_back("asaf");
cout << endl;

cout<< names.size();

names.push_back("aastha");
cout << endl;

cout << names.size();

cout << endl;
cout << names.capacity();






 return 0;
}

void print (vector<int> arr){

    cout < "[ "
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr.at(i);
    }
    cout << "]";
    cout << endl;
    
}
void print (vector<string> arr){

    cout < "[ ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr.at(i);
    }
    cout << "]";
    cout << endl;
    
// }