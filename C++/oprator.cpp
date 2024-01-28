#include <bits/stdc++.h>

using namespace std;
int main()
{
int n;
cout << "Enter number:";
cin >> n;
   while (n--)
    {

        string arman;
        cin >> arman;

        if (arman.length() <= 2)
        {

            if (arman == "+")
            {
                cout << "Arithmetic addition" << endl;
            }
            else if (arman == "-")
            {
                cout << "Arithmetic subtraction" << endl;
            }
            else if (arman == "*")
            {
                cout << "Arithmetic multiplication" << endl;
            }
            else if (arman == "/")
            {
                cout << "Arithmetic division" << endl;
            }
            else if (arman == "%")
            {
                cout << "Arithmetic modulus" << endl;
            }

            else if (arman == "++")
            {
                cout << "increment" << endl;
            }
            else if (arman == "--")
            {
                cout << "deccrement" << endl;
            }
            else if (arman == "=")
            {
                cout << "assignment operation" << endl;
            }
            else if (arman == ">")
            {
                cout << "Relation greater than" << endl;
            }
            else if (arman == ">=")
            {
                cout << "Relation greater than or equal to" << endl;
            }
            else if (arman == "<")
            {
                cout << "Relation less than" << endl;
            }
            else if (arman == "<=")
            {
                cout << "Relation less than or equal to" << endl;
            }
            else if (arman == "==")
            {
                cout << "Relation equality (equal to)" << endl;
            }
            else if (arman == "!=")
            {
                cout << "Relation (not equal to)" << endl;
            }
            else if (arman == "&&")
            {
                cout << "logical and" << endl;
            }
            else if (arman == "||")
            {
                cout << "logical or" << endl;
            }
            else if (arman== "!")
            {
                cout << "logical not" << endl;
            }

            else if (arman == "&")
            {
                cout << "bitwise AND operator" << endl;
            }
            else if (arman == "|")
            {
                cout << "bitwise OR operator " << endl;
            }
            else if (arman == "~")
            {
                cout << "bitwise  Compliment operator" << endl;
            }
            else if (arman == "^")
            {
                cout << "bitwise exclusive OR operator" << endl;
            }
            else if (arman == ">>")
            {
                cout << "Bitwise right shift" << endl;
            }
            else if (arman == "<<")
            {
                cout << "Bitwise left shift" << endl;
            }
            else
            {
                cout << "Invalid Operation" << endl;
            }
        }
        else
        {
            cout << "Invalid Keyword" << endl;
        }
    }
    return 0;

}
