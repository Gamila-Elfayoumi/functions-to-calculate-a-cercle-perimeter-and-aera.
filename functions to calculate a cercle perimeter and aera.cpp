#include <iostream>
using namespace std;
double perimeter(double diameter);
double aera(double diameter);
double pi = 3.14;
int main()
{
    double diameter;
    cout << "Enter the diameter of a cercle :\n";
    cin >> diameter;
    cout << "The perimeter of the cercle is :" << perimeter(diameter) << endl;
    cout << "The aera of the cercle is :" << aera(diameter) << endl;
    system("pause");
}
double  perimeter(double diameter)
{
    return diameter * pi;
}
double aera(double diameter)
{
    return pi * (diameter / 2) * (diameter / 2);
}