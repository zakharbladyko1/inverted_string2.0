#include <iostream>
#include <cstring>
using namespace std;

const int MAX = 100;

int main()
{
    void reversit(char[]);
    char a1[MAX];

    cout << "Enter string : ";
    cin.get(a1, MAX);

    reversit(a1);

    cout << "Now string : " << a1 << endl;

    return 0;
}

void reversit(char rev[])
{
    int len = strlen(rev);
    for (int i = 0; i < len / 2; i++)
    {
        char temp = rev[i];
        rev[i] = rev[len - i - 1];
        rev[len - i - 1] = temp;
    }
}