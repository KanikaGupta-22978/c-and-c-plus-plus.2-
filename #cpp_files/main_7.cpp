// Efficiently search for the position of the target value in a sorted array using Binary Search
// Binary search works by repeatedly dividing the search range in half.
// If the target value is less than the middle element, search the left half. If the target value is greater than the middle element, search the right half. 
// Hence, to solve this problem we have variance approcache- iterative and the recursive
// Iteration: Repeats a block of code using loops (e.g., for, while).
// Recursion: A function calls itself to solve smaller instances of the same problem.

// 1. Variance Iterative Approach
#include <stdlib.h>
#include <iostream>
using namespace std;
// Algorithm-
int binary_search_iterative(int *arr, int left, int right, int value)
{
    while(left<= right)
    {
        // Calculate the middle element of our cuurent range
        int mid= left+ (right-left)/2;
        // Potential Overflow Issue:
        // If left and right are both large, summing them up can result in a value that exceeds the maximum value that can be stored in an integer type, causing overflow.
        // For example:
        // Suppose left = 2,000,000,000 and right = 2,000,000,000.
        // Adding these values results in 4,000,000,000, which exceeds the maximum value for a 32-bit signed integer (2,147,483,647), causing an overflow.
        
        if (arr[mid]== value)
        return mid;
        // If the middle element is less than the target value, search the right half
        if (arr[mid]< value)
        left= mid +1;
        // if the middle element is greater than the target value, search the left half
        else
        right= mid-1;
    }
    // flag for not finding the target value position
    return -1;
}
// Test case-
int main()
{
    int arr[3]= {1,2,3};
    cout<< binary_search_iterative(arr, 0, 2, 3)<< endl;
    return 0;
}

// 2. Recusrive Approach
#include <stdlib.h>
#include <iostream>
using namespace std;
int binary_search(int * arr, int left, int right, int value)
{
    if (left>right)
    return -1;
    else{
        int mid= left+ (right-left)/2;
        if (arr[mid]==value)
        return mid;
        if (arr[mid]< value)
        return binary_search( arr, mid + 1, right, value); 
        // recursive calls in the binary search function do not return a pointer to the array (int *arr), but instead return an integer (int).
        // The reason is that the return type of the binary_search function is int, and it returns the index of the target value in the array, not a pointer to the array.
        else
        return binary_search( arr, left, mid-1, value);
    }
}

// Test case-
int main()
{
    int arr[3]= {1,2,3};
    cout<< binary_search(arr, 0, 2, 3)<< endl;
    return 0;
}















