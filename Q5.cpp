#include <iostream>
using namespace std;

int lenOfArr(char s[]);
int equality(char s1[], char s2[], int size1, int size2);

int main()
{
    char arr1[10];
    char arr2[10];

    cout << "Enter a string:";
    cin >> arr1;

    cout << "Enter the second string:";
    cin >> arr2;

    int size1 = lenOfArr(arr1);
    int size2 = lenOfArr(arr2);

    bool isEqual = equality(arr1, arr2, size1, size2);

    if (isEqual)
    {
        cout << "The strings are equal!";
    }
    else
    {
        cout << "The strings are not equal";
    }

    return 0;
}

int lenOfArr(char s[])
{
    int count = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        count++;
    }

    return count;
}

int equality(char s1[], char s2[], int size1, int size2)
{
    int count = 0;

    if (size1 == size2)
    {
        for (int i = 0; s1[i] != '\0'; i++)
        {
            if (s1[i] == s2[i])
            {
                count++;
            }
        }
    }
    else
    {
        return 0;
    }

    if (count == size1)
    {
        return 1;
    }

    return 0;
}