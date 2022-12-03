#include <iostream>
using namespace std;

int main()
{
    char s[10] = "Hello";

    cout << "The individual characters are:";

    for (int i = 0; s[i] != '\0'; i++)
    {
        cout << s[i] << " ";
    }

    return 0;
}