#include <iostream>
using namespace std;

void ToLowerCase(char s[]);

int main()
{
    char arr[50];

    cout << "Enter a string:";
    cin.getline(arr, 50);

    ToLowerCase(arr);

    return 0;
}

void ToLowerCase(char s[])
{
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (isupper(s[i]))
        {
            s[i] += 32;
        }
    }

    cout << "The lowercase array is:" << s;
}