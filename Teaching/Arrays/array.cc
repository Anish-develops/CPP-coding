#include<iostream>
using namespace std;
void printarray(int arr[] , int size) ;
void printarray2(int arr[]) ;
int main()
{

    string superheros[]  = {
        "spiderman", "saktimaan" , "ironman" , "batman" , "flying jatt"
    };

    int stock[]  =  {100,200,300,400,500,600,700,800,900};

    int* ptr = stock;



    

    // cout << superheros<< endl;

    for (int  i = 0; i < sizeof(stock)/sizeof(stock[0]); i++)
    {

        cout << *(ptr + i)<< "   ";
        
    }
    

    cout << endl;


    for( int i : stock)
    {
        cout << i << "   ";
    }

    cout << endl;

    printarray(stock ,9 );

    cout << endl;
    
    printarray2(stock);

   
    
    
    

  return 0;
}

void printarray (int arr[] , int size){

    cout << "[  ";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "   ]";
}
void printarray2(int arr[]){
    int size = sizeof(*arr)/sizeof(int);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
}