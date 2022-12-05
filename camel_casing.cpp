#include <string>
#include <iostream>

std::string to_camel_case(std::string text)
{
    int length = sizeof(text) / sizeof(text[0]);

    for (int i = 0; i < length; i++)
    {

        int current_index = i;
        if (text[current_index] == '_' || text[current_index] =='-') // second if to find the occurrence of the underscore
        {
            char converted = ((static_cast<int>(text[current_index + 1])) - 32);
            text[current_index + 1] = converted;

            for (int j = current_index; j < length; j++)
            {
                
                text[j] = text[j + 2];
            }
        }
    }

    return text;
}

int main()
{
    std::cout << "Texts: ";
    std::string text;
    std::cin >> text;

    std::cout << to_camel_case(text) << '\n';
    std::cout << size(to_camel_case(text));
}
