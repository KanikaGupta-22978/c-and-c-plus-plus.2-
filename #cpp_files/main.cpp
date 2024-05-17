// creating a basic c++ application
#include <iostream>// input-output stream library
#include <fstream>
using namespace std;
 int main()
{
    int value(19);
   cout<< value<< endl<< 2<< endl<< 5;
   return 0; 
 }

// 2.
int main()
{
   char value;
    cin>> value;
  cout<< value;
    return 0;
 }

// 3.
int main()
{
    ifstream input_file("file.in");    
     ofstream output_file("file.out");
   int value;
        input_file>> value;
        output_file<< value;
       return 0;
 }

// 4.
int main()
{
    int value= 10;
    cout<< "the value of our integer is"<< value<< "and it has"<< sizeof(int)<< "bytes of memory!"<< endl;
    float floating_value=3.4;
    cout<< "the value of our floating_value is"<< floating_value<< "and it has"<< sizeof(float)<< "bytes of memory!"<< endl;
    double double_value= 1000000;
    cout<< "the value of our double_value is"<< double_value<< "and it has"<< sizeof(double)<< "bytes of memory!"<< endl;
    char character= 'q';
    cout<< "the value of our character is"<< character<< "and it has"<< sizeof(char)<< "bytes of memory!"<< endl;
    bool boolean_value=true;
    cout<< "the value of our boolean is"<< boolean_value<< "and it has"<< sizeof(bool)<< "bytes of memory!"<< endl;
    //(void)value; - void value to nothing
    return 0;
}