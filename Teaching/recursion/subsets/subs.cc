#include <iostream>
#include <vector>
using namespace std;

void subs(int index, int arr[], int size, vector<int> ans)
{

    if (index == size)
    {
        cout << "[ ";
        for (auto ele : ans)
        {
            cout << ele << " ";
        }
        cout << "]";
        cout << endl;

        return;
    }

    ans.push_back(arr[index]);

    subs(index + 1, arr, size, ans);

    ans.pop_back();

    subs(index + 1, arr, size, ans);
}

void subsInArray ( int index , vector <int> input , vector <int> output , vector<vector<int>> & ans  ){
    if (index == input.size())
    {
        ans.push_back(output);
        return;
    }

    subsInArray(index + 1 , input , output , ans );

    int element = input.at(index);
    output .push_back(element);
    subsInArray(index + 1, input, output, ans);
}

void print(vector<vector<int>> ans)
{
    cout << "[ ";
    for( auto ele : ans){
        cout << "  [ ";
        for( auto element : ele){
            cout << element << " ";
        }
        cout << "]  ";
        // cout << endl;
    }
    cout << "]" << endl;
}
int main()
{
    // int arr[] = {1, 2, 3};

    // int size = sizeof(arr) / sizeof(arr[0]);

    // vector<int> ans;

    // subs(0, arr, size, ans);

    int index  = 0;
    vector<int> input = {1,2,3};
    vector<int> output;
    vector<vector<int>> ans;

    subsInArray(index , input, output , ans );

    print(ans);
    
    return 0;
}