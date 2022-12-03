#include <iostream>
#include <cstring>
using namespace std;

bool CopyArr(char s1[], char s2[], int size1, int size2);

int main()
{
    char s1[50];
    char s2[10];

    cout << "Enter a string:";
    cin.getline(s1, 50);

    int lenOfArr1 = strlen(s1);
    int lenOfArr2 = sizeof(s2) / sizeof(s2[0]);

    bool run = CopyArr(s1, s2, lenOfArr1, lenOfArr2);

    if (run)
    {
        cout << "The second array is:" << s2;
    }

    return 0;
}

bool CopyArr(char s1[], char s2[], int size1, int size2)
{
    if (size2 >= size1)
    {
        for (int i = 0; s1[i] != '\0'; i++)
        {
            s2[i] = s1[i];
        }
    }
    else
    {
        cout << "The array size of the second array is smaller than the first one!";
        return 0;
    }

    return 1;
}