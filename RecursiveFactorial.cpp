#include <bits/stdc++.h>
using namespace std;

long int fact(long int num) // recursive factorial method that takes given number as parameter
{
    if(num<=1) // factorial of 0 and 1 is always one so we use this as base case
    {
        return 1; // return the value
    }
    return num * fact(num - 1); // recursively call the method until base case is met
}

int main()
{
    long int num; // long int datatype variable to store values that exceed integer limit
    cin >> num; // get input
    if(num < 0) // handle negative values
        cout << "Negative values not allowed" << endl;
    else
        cout << "Factorial of " << num << " : "<< fact(num); // pass to the recursive factorial method and print the final call result
}
