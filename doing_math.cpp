#include <iostream>
using namespace std;
int main()
{
    int price = 20;
    int discount = 5;
    int total = price - discount;
    cout << total << endl;

    int points = 28;
    int level = 3;
    int result = points * level;
    cout << result << endl;

    // calculate the area of a rectangle
    int height = 88;
    int width = 13;
    int area = height * width;
    cout << area << endl;

    // Let's calculate how many days there are in 500 hours:
    int hours = 500;
    int days = hours / 24;
    cout << days << endl;

    // In case we need a more precise result, which includes decimal points, we can use doubles:
    double hrs = 500;
    double days1 = hrs / 24;
    cout << days1 << endl;

    // Remainder
    int days2 = 500;
    int result1 = days2 % 7;
    cout << "result = " << result1 << endl;

    /*You are painting a rectangular wall and need to calculate the area in order to buy the necessary amount of paint.

    The variables length and height define the size of the wall.

    Task
    Calculate and output the area of the wall.*/

    double length = 5.6;
    double height1 = 3.1;

    double area1 = length * height1;
    cout << "The area = " << area1;
}