#include<iostream>

#include "newarrays.cc"
using namespace std;
int main()
{

    Superheros superman ;
    // superman.flight= true;
    // superman.name = "superman";
    // superman.health = 100000;
    // superman.strenth = 100000;

    superman.setName("Clark Kent");
    superman.setFlight(true);
    superman.setStrength(10000);
    superman.setHealth(5000);


    cout << superman.getName() << endl;
    cout << superman.getFlight() << endl;

    cout << superman.getStrength() << endl;
    cout << superman.getHealth() << endl;

    


    
    Superheros batman("Bruce Wane",1000,500,false);

    Superheros spiderman ("Spiderman");

    Superheros Robin (800,700, 0);
    Robin.setName("Greyson");

    Superheros Shazam (superman);
    Shazam.setName("Billy");


    Superheros * Deedpool = new Superheros("deadpool");
    
    superman.printHeros();
    batman.printHeros();
    Robin.printHeros();
    Shazam.printHeros();
    Deedpool->printHeros();

    delete Deedpool;


    cout << "****************"<<superman + batman <<"***************";

    cout << "health will be " << superman - batman << endl;

    return 0;
}

