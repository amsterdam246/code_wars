//this program reverses a string.
#include <iostream>

using namespace std;

// write a function that accepts a string parameter, reverses each string value.
void reverse(string text)
{
    int length = 4;
    string empty_string[length];

    int count = 0;
    for (int i = length ; i > 0; i--) //reverse the string 
    {
        empty_string[count] = text[i];
        count++;
    }

    for (int i = 0; i < length; i++)//print the reversed string
    {
        cout << empty_string[i];
    }
}
 
int main()
{
   string name = "jack"; 
    reverse(name);
}