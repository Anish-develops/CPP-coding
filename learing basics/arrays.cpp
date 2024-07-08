#include <iostream>

using namespace std;

int main(){
    int arr[] = {10, 20, 30, 40, 50, 60};

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;

    }

    int newarr[4] ;
    for (int j = 0; j < 4; j++)
    {
        // cin.get();
        cin >> newarr[j];
        
    }
    for (int i = 0; i < 4; i++)
    {
        cout << newarr[i] << endl;
    }

    int another[5];
    
    int *pt = another;

    *pt = 700;
    cout << another[0]<<endl;
    pt++;
    *pt = 800;
    






}