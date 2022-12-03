#include <iostream>
using namespace std;

void MaximumOccuringCharacter(char s[]);

int main()
{
    char arr[50];

    cout << "Enter a string:";
    cin.getline(arr, 50);

    MaximumOccuringCharacter(arr);

    return 0;
}

void MaximumOccuringCharacter(char s[])
{
    char maxChar;
    int maxCount = 0;
    int count;

    for (int i = 0; s[i] != '\0'; i++)
    {
        count = 0;
        for (int j = 0; s[j] != '\0'; j++)
        {
            if (s[i] == s[j])
            {
                count++;
            }
        }
        if (count > maxCount)
        {
            maxChar = s[i];
            maxCount = count;
        }
    }

    cout << "The maximum occuring character is:" << maxChar << endl;
    cout << "Its count is:" << maxCount;
}