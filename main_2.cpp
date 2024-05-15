// Sum of the integers of a given value
#include <iostream>
using namespace std;
int main()
{
    int value, sum(0), last_digit;
    cin>> value;
    while (value !=0)
    {
        // subtracting the last digit
        last_digit=value % 10;
        cout<< "Current last digit is: "<< last_digit<< endl;
        // Adding it to the sum
        sum+= last_digit;
        // Getting rid of the current last digit
        value/=10;
        cout<< "Current number value is :"<<value<< endl;
    }
    cout<< "the sum of the integers of the given value is:"<< sum;
    return 0;
}
