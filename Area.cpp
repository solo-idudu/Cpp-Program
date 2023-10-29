#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //declaring variables
    double Area, radius;

    //input value of  radius
    cout <<"Enter the radius: "<<endl;
    cin >> radius;

    //solving for area of a circle by using the constant of PI 
    Area = M_PI * pow(radius, 2);
    cout << "The area of the circle with radius "<< radius << " is " <<  Area;

    return 0;
}

