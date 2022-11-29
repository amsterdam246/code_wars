#include <string>
#include <iostream>

std::string to_camel_case(std::string text)
{
    int length = sizeof(text) / sizeof(text[0]);

    for (int i = 0; i < length; i++)
    {

        int current_index = i;
        if (text[current_index] == '_') // second if to find the occurrence of the underscore
        {
            char converted = static_cast<int>((text[current_index + 1]) - 32);
            text[current_index + 1] = converted;

            for (int j = current_index; j < length; j++)
            {
                text[j] = text[j + 1];
            }
        }
    }

    return text;
}

int main()
{
    std::cout << "Text: ";
    std::string words;
    std::cin >> words;

    std::cout << to_camel_case(words) << '\n';
    std::cout << size(to_camel_case(words));
}
