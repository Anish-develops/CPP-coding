#include<iostream>
using namespace std;
int main()
{

    for (int i = 1; i <= 20; i++)
    {

        cout << " this is the table of :" << i << endl;
        for (int j = 1; j < 11; j++)
        {
            
            
            cout << i << " X " << j << " = " << i * j << endl;
        }
        cout << endl;
    }
    


 return 0;
}