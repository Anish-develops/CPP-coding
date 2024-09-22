#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    string name;
    int marks;
    bool assignment;

    // Default constructor
    Student()
    {
        cout << "Default constructor is working" << endl;
    }

    // Parameterized constructor
    Student(string name, int marks, bool assignment): name(name), marks(marks), assignment(assignment)
    { // Use the initializer list properly
        cout << "First constructor is working" << endl;
    }

    // Overloaded constructor
    Student(string name)
    {
        this->name = name;
        this->marks = 0;          // Default marks
        this->assignment = false; // Default assignment status

        cout << "Second constructor is working" << endl;
    }

    // Copy constructor
    Student(const Student &temp)
    {
        this->assignment = temp.assignment; // Correct copying of assignment
        this->marks = temp.marks;           // Correct copying of marks
        this->name = temp.name;             // Correct copying of name

        cout << "Copy constructor is working" << endl;
    }

    // Destructor
    ~Student()
    {
        cout << this->name<<" Destructor is working" << endl;
    }

    // Setter for marks
    void setMarks(int marks)
    {
        this->marks = marks;
    }

    // Getter for marks
    int getMarks()
    {
        return this->marks;
    }

    // Print Student details
    void printStudent()
    {
        cout << "Student name: " << this->name << endl;
        cout << "Student marks: " << this->marks << endl;
        cout << "Student assignment: " << (this->assignment ? "submitted" : "not submitted") << endl;
    }

    int operator+ (const Student& temp){
        int marks  = this->marks;
        return marks + temp.marks;
    }

    int intro (){
        cout << "hey my name is " << this->name << ". Nice to meet you .";
    }
    void intro(string language)
    {
        if (language == "jap")
        {
            cout << "Watashi wa " << this->name << " desu" << endl; 
        }
        
        else
        {
            cout  << "Heyyyyyyyy" << endl; 
        }
    }
};

int main()
{
    
    Student * sargun = new Student("sargun" , 9.24 , true);

    Student aashi ("aashi" , 10 , true);

    Student krish ("krish" , 9.0 , false );

    aashi.printStudent();
    sargun->printStudent();
    krish.printStudent();

    cout << aashi+krish << endl;

    aashi.intro();
    cout << endl;
    krish.intro("jap");

    delete sargun;
    
    
    return 0;
}
