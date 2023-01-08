#include <iostream>
using namespace std;

// write a function that accepts a string parameter, reverses each string value.
void reverse(char str[4])
{
    int length = sizeof(str[4]) / sizeof(str[0]);
    char empty_string[length];

    int count = 0;
    for (int i = length; i > 0; i--)
    {
        empty_string[count] = str[i];
        count++;
    }

    for (int i = 0; i < length; i++)
    {
        cout << empty_string[i];
    }

}

int main()
{

    char name[] = "jackson";
    reverse(name);
    cout<<"endofline";
}