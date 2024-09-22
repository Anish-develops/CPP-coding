#include<iostream>
using namespace std;


void print ( int arr[] , int size){
    cout << " the size of the arr is "<< size ;
    cout << endl;
    for (int  i = 0; i < size; i++)
    {
        cout << arr[i] << " ";

    }
    cout << endl;
    cout << endl;
    
}
bool linearSearch ( int arr[] , int size , int tar){


    print ( arr , size);


    if ( size  == 0){
        return false;
    }
    
    if ( arr [0] ==  tar){
        return true;
    }
    return false || linearSearch(arr + 1, size - 1, tar);
}
int ls( int arr[] , int size , int tar){

    print(arr, size);
    if ( size == 0){
        return -1;
    }
    if (arr[0] == tar)
    {
        return 0;
    }
    int index = ls(arr + 1 , size - 1 , tar);
    cout <<"The current index is :" <<index << endl;

    // if( index == -1){
    //     return -1;
    // }else{
    //     return index + 1;
    // }

    return (index == -1) ? -1 : index + 1;
    
}
int main()
{

    int arr[] = {5 ,7,12,24,32,11,19};
    int size  =  7;

    int tar = 11;
    // bool ans = linearSearch( arr, size , tar);

    // if (ans )
    // {
    //     cout << " element found "<< endl;
    // }else{
    //     cout << " element not found " << endl;
    // }
    

    int ans = ls(arr , size , tar);


    cout  << "the indext is "<< ans << " and the element is " << arr[ans]<< endl;
 return 0;
}