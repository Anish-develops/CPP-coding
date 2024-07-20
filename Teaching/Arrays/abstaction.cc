#include<iostream>
#include <vector>
using namespace std;


void print(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr.at(i) << "      ";
    }
}

using namespace std;
int main()
{
    vector <int> arr = {1,2,3,4,5,6};
    

    arr.push_back(7);

    print(arr);
    cout << arr.capacity();

    
 return 0;
}
