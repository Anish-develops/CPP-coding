#include <iostream>

using namespace std;

class Human{

    private:
        int height;
        int weight;
        int strength;
    
    public:
        //getters
        int getheight(){return this->height;}
        int getweight(){return this->weight;}
        int getstrenght(){return this->strength;}

        // setters
        void setheight(int height){this->height = height;}
        void setweight(int weight) { this->weight = weight; }
        void setstrength(int strength) { this->strength = strength;}
    
    protected:
        int fingers = 10;
        int eyes = 2;

        void greetings(){cout<< "hello there what a fine evining it is "<< endl;}
        void apologies(){cout <<"i am extremly sorry"<<endl;}

};

class Athelete : public Human
{ // private is the default access modifier
private:
    int longJump;
    int Swiming;
    int Sprinting;

public:
    // getters
    int getlongJump() { return this->longJump; }
    int getSwiming() { return this->Swiming; }
    int getSprinting() { return this->Sprinting; }

    // setters
    int setlongJump(int longJump) { this->longJump = longJump; }
    int setSwiming(int Swiming) { this->Swiming = Swiming; }
    int setSprinting(int Sprinting) { this->Sprinting = Sprinting; }

    // functions
    int increaseheight(){
        return this->getheight() + 1;
    }
    

protected:
    int practicetime;
    int highrecord;
    int restingperios;

    void morningrun() { cout << "i am running for 500 miles each morning" << endl; }
    void meditaion() { cout << "it is meditaion time" << endl; }
};

int main(){
    Athelete anish;
    



    return 0 ;
}