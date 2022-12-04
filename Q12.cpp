#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char arr[50];
    int start;
    int len;

    cout << "Input the string:";
    cin.getline(arr, 50);

    cout << "Input the position to start extraction:";
    cin >> start;

    cout << "Enter the length of the substring:";
    cin >> len;

    if (start < strlen(arr) && start + len <= strlen(arr))
    {
        cout << "The substring recieved from the string is:";

        for (int i = start; i < start + len; i++)
        {
            cout << arr[i];
        }
    }
    else
    {
        cout << "Printing is not possible";
    }

    return 0;
}