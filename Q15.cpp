#include <iostream>
using namespace std;

void FindNumberOfTimesWordOccurs(char s[]);

int main()
{
    char arr[100];

    cout << "Enter a string:";
    cin.getline(arr, 100);

    FindNumberOfTimesWordOccurs(arr);

    return 0;
}

void FindNumberOfTimesWordOccurs(char s[])
{
    char arr[4] = "the";
    int lenOfArr = 3;
    int count;
    int numberOfCount = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        count = 0;

        for (int j = 0; arr[j] != '\0'; j++)
        {
            if (s[i] == arr[j])
            {
                count++;
                i++;
            }
            if (count == lenOfArr)
            {
                numberOfCount++;
            }
        }
    }

    cout << "The number of times the word 'the' appears in the string is:" << numberOfCount;
}