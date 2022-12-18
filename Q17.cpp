#include <iostream>
using namespace std;

void Freq(char s[]);

int main()
{
    char arr[100];

    cout << "Enter the string:";
    cin.getline(arr, 100);

    Freq(arr);

    return 0;
}

void Freq(char s[])
{
    int countOfA = 0;
    int countOfC = 0;
    int countOfT = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == 'a' || s[i] == 'A')
        {
            countOfA++;
        }
        else if (s[i] == 'c' || s[i] == 'C')
        {
            countOfC++;
        }
        else if (s[i] == 't' || s[i] == 'T')
        {
            countOfT++;
        }
    }

    if (countOfA > 0)
    {
        cout << "The freqency of A is " << countOfA;
    }
    if (countOfC > 0)
    {
        cout << "The freqency of C is " << countOfC;
    }
    if (countOfT > 0)
    {
        cout << "The freqency of T is " << countOfT;
    }
}