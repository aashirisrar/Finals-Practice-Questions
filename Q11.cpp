#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n;
    char arr[25][50];

    // Number of strings
    cout << "Enter the number of strings:";
    cin >> n;

    // Input strings
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the elements of the " << i + 1 << " string:";
        cin >> arr[i];
    }

    // Sorting
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; arr[i][j] != '\0'; j++)
        {
            if (strcmp(arr[i], arr[j]) > 0)
            {
                char temp[50];
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
                break;
            }
        }
    }

    // Printing Array
    for (int i = 0; i < n; i++)
    {
        cout << "The elements of the " << i + 1 << " string are:" << arr[i] << endl;
    }

    return 0;
}