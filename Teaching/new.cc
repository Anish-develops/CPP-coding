#include<iostream>
using namespace std;



void greeting();
void greeting(string name);
void greeting(int num);
void greeting(int num, string name);

int add_two_numbers(int a , int b);


int main()
{
    
    int answer = add_two_numbers(10,20);

    cout << " your sum is : "<< answer<< endl;



    return 0;
}

// kisi bhi program main apne aap run ho jata hai 
// sirf main hi apne aap run hota hai
// main ko saaari knowledge upar se milti hai

//



// return_datatype function_name ( argument_datatype argument){
// 
// function body;

//return value;


//}
void greeting()
{
    cout << " Good Night and Sweet Dreams " << endl;
}

void greeting(string name){
    cout << " Good Night and Sweet Dreams "<< name  << endl;
}

void greeting (int num){
    for (int i = 0; i < num; i++)
    {
        cout << " Good Night and Sweet Dreams " << endl;
    }
    
}

void greeting ( int num , string name){
    for (int i = 0; i < num; i++)
    {
        cout << " Good Night and Sweet Dreams " << name << endl;
    }
}





int add_two_numbers (int a , int b ){

    int sum  = a + b;
    cout << sum <<endl;
    return sum;

}



