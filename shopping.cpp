#include <iostream>
using namespace std;

int main()
{
    // your account's balance
    auto balance = 2452.4;
    // price for each notebook
    auto price = 259.99;

    // Task: calculate the number of notebooks you can afford and output it.
    // Hint: use an integer to store the result.
    int total = balance / price;
    cout << "The number of books i can afford are " << total;

    // Task: calculate the amount left over on your account after the purchase and output it on a new line.
    // Hint: calculate the total price of the purchase, then substract it from the balance.
    int total_price = balance - (price * total);
    cout << "the amount i am left with after the purchase = " << total_price;
}
