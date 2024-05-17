// Let's choose c++ with vectors for the manipulation
#include <iostream>
using namespace std;
int main()
{
    // c++- style vectors (created a vector)
    int *cpp_vect; // variable 1  
    int length;  // variable 2
    cout<< "enter the number of elements of our vector: ";
    cin>> length;
    cpp_vect= new int[length];   // allocated memory

    // populating a vector (reading a vector)
    cout<< "enter the elements of our vector";

    for (int index= 0; index < length; ++ index)
    {
        cin>> cpp_vect[index];
    }
    // printing a vector
    for (int index= 0; index < length; ++ index)
    {
        cout<< "the number at the "<< index<< "position is:"<< cpp_vect[index]<< endl;
    }
    delete[] cpp_vect;   // important to delete a memory ow our RAM will get filled
    return 0;
}
