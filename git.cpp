#include <iostream>
#include <string>

using namespace std;
int main(void)
{

    string text[] = {"green", "vs", "yellow", "bubble"};
    int length = size(text);
    for (int i = 0; i < length; i++)
    {
       int  current  = i; 
        for(int j ; j < length; j++)
        {
            text[j] = text[current + 1];

        }
    }

    return 0;
}
