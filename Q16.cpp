#include <iostream>
#include <cstring>
using namespace std;

void RemoveCharacters(char s[], int lenOfArr);

int main()
{
    char arr[100];

    cout << "Enter a string:";
    cin.getline(arr, 100);

    RemoveCharacters(arr, strlen(arr));

    return 0;
}

void RemoveCharacters(char s[], int lenOfArr)
{
    int j;
    int countOfChar = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (!(s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z'))
        {
            countOfChar++;
        }
    }

    for (int i = 0; s[i] != '\0'; i++)
    {
        for (j = i + 1; s[j] != '\0'; j++)
        {
            if (!(s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z'))
            {
                char temp = s[j];
                s[j] = s[i];
                s[i] = temp;
            }
        }
    }

    s[j - countOfChar] = '\0';

    cout << s;
}
