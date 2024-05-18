// Declaring, manipulating, and managing the memory of mattrices
#include <stdlib.h>
#include <iostream>
using namespace std;
int main()
{
    int mat[10][10];
    int rows, columns;
    // Reading the number of rows and columns
    cout<< "Enter the number of rows. ";
    cin>> rows;
    cout<< "Enter the number of columns. ";
    cin>> columns;
    // Reading the matrix
    for(int row=0; row< rows; ++row)
    for(int column=0; column<columns; ++column)
    {
        cout<<"Enter the number loacted at the "<< row<< "row and"<< column<< "column: ";
        cin>> mat[row][column];
    }
    // Printing the matrix
    for(int row=0; row< rows; ++ row)
    {
        for(int column=0; column< columns; ++column)
        {
            cout<< mat[row][column]<< ' ';
        }
        cout<< endl;
    }
    return 0;
}
