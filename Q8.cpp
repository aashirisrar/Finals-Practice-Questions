#include <iostream>
using namespace std;

void ToUpper(char s[]);

void Count(char s[], int &countOfVowels, int &countOfConsonants);

int main()
{
    char arr[50];
    int countOfVowels = 0, countOfConosonants = 0;

    cout << "Enter a characer array:";
    cin.getline(arr, 50);

    ToUpper(arr);

    Count(arr, countOfVowels, countOfConosonants);

    cout << "The count of vowels are:" << countOfVowels << endl;
    cout << "The count of consonants are:" << countOfConosonants;

    return 0;
}

void ToUpper(char s[])
{
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 97 && s[i] <= 122)
        {
            s[i] = s[i] - 32;
        }
    }
}

void Count(char s[], int &countOfVowels, int &countOfConsonants)
{
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            countOfVowels++;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            countOfConsonants++;
        }
    }
}