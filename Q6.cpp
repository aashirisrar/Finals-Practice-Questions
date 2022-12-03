#include <iostream>
using namespace std;

void count(char s[], int &countOfAlpha, int &countOfDig, int &countOfSpec);

int main()
{
    char arr[50];
    int countOfAlpha = 0, countOfDig = 0, countOfSpec = 0;

    cout << "Enter a string:";
    cin.getline(arr, 50);

    count(arr, countOfAlpha, countOfDig, countOfSpec);

    cout << "The count of alphabets is:" << countOfAlpha << endl;
    cout << "The count of digits is:" << countOfDig << endl;
    cout << "The count of special characters is:" << countOfSpec;

    return 0;
}

void count(char s[], int &countOfAlpha, int &countOfDig, int &countOfSpec)
{
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (isalpha(s[i]))
        {
            countOfAlpha++;
        }
        else if (isdigit(s[i]))
        {
            countOfDig++;
        }
        else
        {
            countOfSpec++;
        }
    }
}