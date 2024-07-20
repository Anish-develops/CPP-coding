#include<iostream>
using namespace std;

void longwords( string str);

int main()
{
    int n ;
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        string name ;

        cin >> name;
        longwords(name);
    }
    return 0;
}

void longwords(string str){
    int n = str.length();

    if (n > 10 ){
        cout << str.at(0)<< n-2 << str.at(n-1) << endl;

    }else{
        cout << str << endl;
    }

}