#include <iostream>

class Circle{

private:
    int _radius = 0;
public:
    Circle(){};
    Circle(int radius){
        this->_radius = radius;
    }
    void setradius(int radius){
        this->_radius = radius;
    }
    int getradius(){
        return _radius;
    }
    float area();
    int isEqualArea(Circle circle);


};

float Circle:: area(){
    return 3.14 * this->_radius * this->_radius;
}


int main (){

    Circle circle(5);
    circle.setradius(2);
    std:: cout << circle.getradius();
    std:: cout << "\n";
    std:: cout << circle.area();

    return 0;
}