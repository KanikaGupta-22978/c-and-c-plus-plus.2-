// to find the greatest number in an array or a vector
#include <stdlib.h>
#include <iostream>
using namespace std;
int main()
{
    int * vect;
    int length;
    int _max;
    cout<< "Enter the number of elements of the vector:"<< endl;
    cin>> length;
    // Allocate the memory
    vect= new int[length];
    // Read the vector
    for ( int index=0; index< length; ++index)
    {
        cout<< "Enter the number in the "<< index<< ' '<< "position"<< endl;
        cin>> vect[index];
    }
    // Getting the maximum of the vector elememts
    _max= vect[0];
    for( int index=0; index<length; ++index)
    {
        if( _max< vect[index])
        {
            _max= vect[index];
        }
    }
    // Printing the answer
    cout<< "The maximum of the vector elements is:"<< _max;
    return 0;
}