#include<iostream>
using namespace std;

int age_calculator(int birth_year) ;
int main()
{   int year;

    cout<< "Please Enter the Year of your Birth : ";

    cin >> year;

    int age = age_calculator(year);


    cout<<"Your current age is : "<< age <<endl;


 return 0;
}
int age_calculator(int birth_year){
    int current_year = 2024;
    int age  = current_year - birth_year;
    return age;
}