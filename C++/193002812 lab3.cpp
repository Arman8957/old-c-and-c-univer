#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter your number : ";
    cin >> n;
    while(n--){
        string arman;
        cin >> arman;
        if(arman.length() == 1){
            if(arman == ","){
                cout << "it is comma" << endl;

            }
            else if( arman == "."){
                cout << "it's a point" << endl;

            }
            else if(arman == ";"){
                cout << "semicolon" << endl;
            }
            else if(arman == ":"){
                cout << "It is colon" << endl;
            }
            else if(arman == "\'"){
                cout << "single qoute" << endl;
            }
            else if(arman == "\""){
                cout << "double qoute" << endl;
            }
            else if(arman == "?"){
                cout << "qoustion mark" << endl;
            }
            else if(arman == "!"){
                cout << "exclamatory" << endl;
            }
            else if(arman == "("){
                cout << "first start  bracket" << endl;
            }
            else if(arman == ")"){
                cout << "first close bracket" << endl;
            }
            else if(arman == "{"){
                cout << "second start bracket" << endl;
            }
            else if(arman == "}"){
                cout << "second close bracket" << endl;
            }
            else if(arman == "["){
                cout << "Third start bracket" << endl;
            }
             else if(arman == "]"){
                cout << "Third close bracket" << endl;
            }
             else if(arman == "\\"){
                cout << "backslash" << endl;
            }
             else if(arman == "/"){
                cout << "forward slash" << endl;
            }

        }
           else {
                cout << "invalid" << endl;
            }



    }
    return 0;
}

