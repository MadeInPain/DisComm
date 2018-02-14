/*
 * DisCom - read standart input stream(cin) char by char
 * and print without comments
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    char c;
    string str;

    while(cin.get(c)){
        if(c == '/'){
            cin.get(c);
            switch (c) {
            case '/': //coment
                while(cin.get(c)){
                    if(c == '\n')
                        break;
                }
                break;
            case '*': /*coment*/
                while(cin.get(c)){
                    if(c == '*'){
                        cin.get(c);
                        if(c == '/'){
                            break;
                        }
                    }
                }
                break;
            default:
                str += '/';
                str += c;
                break;
            }
        }
        else
            str += c;
    }

    cout << str << endl;



    return 0;
}
