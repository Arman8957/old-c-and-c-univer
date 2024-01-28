#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;

    cout << "Enter the number:";
    cin >> n;

    string arman;

    getline(cin, arman);
    for (int i = 0; i < n; i++)
    {
        getline(cin, arman);

        int l = arman.length();
        if ((arman[0] == '/') && (arman[1] == '/'))
        {
            cout << "Single line comment." << endl;
        }
        else if ((arman[0] == '/') && (arman[1] == '*') && (arman[l - 1] == '/') && (arman[l - 2] == '*'))
        {
            cout << "Multiple line comment." << endl;
        }
        else
        {
            cout << "Not a comment" << endl;
        }
    }

    return 0;
}
