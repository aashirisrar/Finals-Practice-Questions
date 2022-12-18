#include <iostream>
#include <cstring>
using namespace std;

void FindSubstring(char s[], char sub[], int lenOfArr);

int main()
{
    char arr[100];
    char subStr[50];

    cout << "Enter a string:";
    cin.getline(arr, 100);

    cout << "Enter the substring to find in array:";
    cin >> subStr;

    FindSubstring(arr, subStr, strlen(subStr));

    return 0;
}

void FindSubstring(char s[], char sub[], int lenOfArr)
{
    int count;
    bool isPresent = false;

    for (int i = 0; s[i] != '\0'; i++)
    {
        count = 0;

        for (int j = 0; sub[j] != '\0'; j++)
        {
            if (s[i] == sub[j])
            {
                count++;
                i++;
            }
            if (count == lenOfArr)
            {
                isPresent = true;
            }
        }
    }

    if (isPresent)
    {
        cout << "The substring is present in array!";
    }
    else
    {
        cout << "The substring is not present in array!";
    }
}