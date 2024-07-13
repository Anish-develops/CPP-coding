#include <iostream>
#include <string>
using namespace std;

class Hero {
private :
    string _name;
    char _level;
    int _age;
    int _health;
public :

    static int timeToEnd;
    // constructors
    // default constructor
    Hero(); 
    /*another syntax would be 
    hero(){};
    */
   //parameterised constructor
   Hero(string name , char level , int age , int health);
   Hero(string name , char level , int age );
   Hero(string name , char level);
   Hero(string name);

   // copy constructor
    Hero (Hero &temp);
    Hero (Hero *temp);

    // destructor
    ~Hero(){
        cout << "destructor is called "<< endl;
    }


   //getters
   string getName(){return _name;}
   char getLevel(){return _level;}
   int getAge(){return _age;}
   int gethealth(){return _health;}

   //setters
   void setName(string name){this->_name = name;}
   void setLevel(char level){this->_level = level;}
   void setage(int age){this->_age = age;}
   void sethealth(int health){this->_health = health;}

   //functions
   void printHero();
   static int printtime();

};

int Hero::timeToEnd = 100;

Hero:: Hero() : _name(), _level(), _age(), _health()
{
    puts("default constructor is running ");
}
Hero::Hero(string name, char level, int age, int health) : _name(name), _level(level), _age(age), _health(health)
{
    puts("parameterized constructor is running");
}
Hero:: Hero(string name, char level){
    this->_name = name;
    this->_level = level;
}
Hero::Hero(string name){
    this->_name = name;
}
Hero:: Hero(Hero &temp){
    this->_age= temp._age;
    this->_health = temp._health;
    this->_level = temp._level;
}
Hero::Hero(Hero *temp)
{
    this->_age = temp->_age;
    this->_health = temp->_health;
    this->_level = temp->_level;
}

void Hero:: printHero()
{
    cout << endl;
    cout << "[ "<<"Name : "<< this->getName()<< " , ";
    cout << "level : " << this->getLevel() << " , ";
    cout << "age : " << this->getAge() << " , ";
    cout << "health :" << this->gethealth() << " ]";
    cout << endl;
}
int Hero:: printtime(){
    // can only access the static members
     
    return timeToEnd;
}
int main()
{
    cout << "size of string"<< sizeof(Hero);

    Hero anish;
    anish.setName("anish");

    cout << "name of the hero is :"<< anish.getName() << endl;
    Hero krish("krish",'A',20,100);
    
    Hero arjun("Arjun",'S');
    arjun.sethealth(4455);

    Hero *krash = new Hero ("Krash" , 'S', 20 , 1000);

    cout<< "name of the hero is : "<<krash->getName()<< endl;
    
    Hero prince(arjun);
    

    cout << prince.gethealth();
    krash->printHero();

    
    Hero superman("Superman" , 'S' , 25 , 10000 );
    superman.printHero();

    Hero homelander = superman;
    homelander.printHero();

    superman.setage(45);
    superman.printHero();

    
    homelander.setName("homelander");
    homelander.printHero();

    Hero omniman( " omniman"); 
    //omniman = superman;
    omniman.printHero();

   // Hero anish("anish");

    Hero *krush = new Hero("krish");
    
    delete krush;// manually destroying the dynamically allocated memory


    // static keyword

    cout << Hero::timeToEnd << endl;
    cout << Hero::printtime()<<endl;




    return 0;
}