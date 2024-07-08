#include <iostream>
#include <string>


using namespace std;

class User {
    string _notAccessable = "anish";
    int _notAccess = 454545;
public :
    string name = "default";
    void printmessage (){
        cout << "hey good morning "<< name;


        
    }
    void setNotAccessName ( string & anish){ _notAccessable = anish ; }
    string getNotAccessName (){return _notAccessable;}

};
int main(){
    User anish;
    anish.name = "anish";
    anish.printmessage();


}