// The sum of a vector's elements
#include <stdlib.h>
#include <iostream>
using namespace std;
int main()
{
int * vect;
int length;
int sum;
cout<< "Enter the number of elements of the vector: ";
cin>> length;
// Allocate memory
vect= new int[length];
// Read the vector
for ( int index=0; index<length; ++ index)
{
    cout<< "Enter the number in the "<< index<< "position:" ;
    cin>> vect[index];
}
// Making the sum of the vector's elements
sum=0;
for( int index=0; index<length; ++ index)
{
    sum+= vect[index];
    cout<< "At the"<< index<< "position, sum is equal to: "<< sum<< endl;
}
// Write the vector
for( int index=0; index<length; ++ index)
{
    cout<< vect[index]<< ' '<<  endl;
}
// Printing the answer
cout<< "The sum of the vector elements is"<< ' '<< sum;
return 0;
}