#include <iostream>

using namespace std;
const double SALES_TAX = 0.075;
double computeTAX (double subTotal);

double newtax(double subtotal, double salestax = 0.330 );






int main ()
{

    int salary = 10000;

    //cout << computeTAX(salary);

    cout << newtax(salary);

}
double computeTAX (double subTotal)
{
    return subTotal * SALES_TAX;

}

double newtax(double subtotal, double salestax )
{
    return (subtotal * salestax);
}