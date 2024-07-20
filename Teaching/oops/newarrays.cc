#include<iostream>
using namespace std;


class Superheros {


private:
    string name;
    int health;
    int strength;
    bool flight;

public:

    // constructor
    //Class_name (inputs){set values};
    Superheros(){};

    Superheros (string name , int health  ,int strenght  , bool flight){
        this->name = name;
        this->health = health;
        this->strength = strenght;
        this->flight = flight;
        
    }

    Superheros (string name){
        this->name = name;

    }

    Superheros (int health , int strength  , bool flight){
        this->flight= flight;
        this->health = health;
        this->strength = strength;
    }
    
    Superheros( Superheros& temp){
        this->name = temp.name;
        this->flight = temp.flight;
        this->strength = temp.strength;
        this->health = temp.health;
    }


    ~Superheros(){cout << this->getName()<< "=========== destructor is doing the destruction ======" <<endl;};




    // getter and setter
    void setName (string name){
        this->name = name;

    }
    
    string getName (){
        return this->name;

    }

    void setFlight( bool tf){this->flight = tf;}
    bool getFlight() { return this->flight; }


    void setHealth(int health){this->health = health;}
    int getHealth(){return this->health;}
    

    void setStrength(int strength){this->strength = strength;}
    int getStrength(){return strength;}

    // functions


    void greetHeros();

    void printHeros(){

        cout << endl;
        cout << "********" << this -> getName() << "********"<<endl;
        if(this->getFlight()) cout << "this can fly"<< endl;
        cout<< "strength is "<< this->getStrength() << endl;
        cout << "health is " << this->getHealth() << endl;
        cout << endl;

    }
};


void Superheros::greetHeros(){
    cout<< "Welcome back " << this->getName()<< endl;
}   





