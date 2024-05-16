#include <iostream>
#include <stdlib.h>

using namespace std;
int main()
{
    // arrays (statically allocated)
    int arr[10]= {0};
    int arr1[10]={0,1,2,3,4,5,6,7,8,9};

    // vectors (dynamically allocated)
    // c-style vectors
    int *c_vect;
    c_vect= (int *)malloc(10 * sizeof(int ));
    c_vect[0]= 1;
    c_vect[1]=2;
    free(c_vect);
    // c++-style vectors
    int *cpp_vect;
    cpp_vect= new int[10];
    cpp_vect[0]= 1;
    cpp_vect[1]= 2;
    delete[] cpp_vect;
    return 0;
    }