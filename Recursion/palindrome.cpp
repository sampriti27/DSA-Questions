#include <iostream>
#include <string.h>
using namespace std;
bool checkPal(int i, string str)
{
    if (i >= str.size() / 2)
        return true;
    if (str[i] != str[str.size() - i - 1])
        return false;
        return checkPal(i+1,str);
}
int main()
{
    string str;
    cout << "Enter a string:" << endl;
    cin >> str;
    cout << checkPal(0, str);
    return 0;
}
