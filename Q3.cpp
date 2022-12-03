#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[10] = "Hello";

    cout << "The reversed characters are:";

    int lenOfArr = strlen(s);

    for (int i = lenOfArr - 1; i >= 0; i--)
    {
        cout << s[i] << " ";
    }

    return 0;
}