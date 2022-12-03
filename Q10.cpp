#include <iostream>
#include <cstring>
using namespace std;

void Sort(char s[], int len);

void Print(char s[]);

int main()
{
    char arr[50];

    cout << "Enter a string:";
    cin.getline(arr, 50);

    int sizeOfArr = strlen(arr);

    Sort(arr, sizeOfArr);

    cout << "The sorted array is:" << arr;

    return 0;
}

void Sort(char s[], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (s[i] > s[j])
            {
                int temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}
