/*
Total Price
You are making an app for an online shopping portal.

The given code declares an array, which stores prices of an order.

You need to complete the code to calculate and output the total of the order.

Hint: Use a for-each loop to iterate over the array and calculate the sum of all items in a variable.
*/

#include <iostream>
using namespace std;

int main()
{
    double prices[] = {6.99, 8.5, 42.9, 105.4, 42, 98.1, 2.39, 1.99, 68.76, 9.99, 33.67, 105, 99, 67, 24.56, 0.2, 59.87, 77.2};

    double sum = 0;

    for (auto x : prices)
    {
        sum += x;
    }

    cout << sum;
}