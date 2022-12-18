#include <iostream>
#include <cstring>
using namespace std;

void Concatenate(char s1[], char s2[], int lenOfArr1, int lenOfArr2);

int main()
{
    char arr1[100];
    char arr2[100];

    cout << "Enter the first string:";
    cin.getline(arr1, 100);

    cout << "Enter the second string:";
    cin.getline(arr2, 100);

    Concatenate(arr1, arr2, strlen(arr1), strlen(arr2));

    return 0;
}

void Concatenate(char s1[], char s2[], int lenOfArr1, int lenOfArr2)
{
    int i;
    int j;
    for (i = lenOfArr1; i < lenOfArr1 + lenOfArr2; i++)
    {
        s1[i] = s2[j];
        j++;
    }
    s1[i] = '\0';

    cout << s1;
}