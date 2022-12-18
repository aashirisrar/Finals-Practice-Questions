#include <iostream>
using namespace std;

void ReplaceLowerUpper(char s[]);

int main()
{
    char arr[100];

    cout << "Enter a string:";
    cin.getline(arr, 100);

    ReplaceLowerUpper(arr);

    return 0;
}

void ReplaceLowerUpper(char s[])
{
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (isupper(s[i]))
        {
            s[i] += 32;
        }
        else if (islower(s[i]))
        {
            s[i] -= 32;
        }
    }

    cout << s;
}