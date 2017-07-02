#include <iostream>
#include <string>

using namespace std;

string reverse(const string& s, const char c)
{
    string ret = "";

    return ret;
}

int main()
{
    cout << reverse("", ';') << endl;                 // 输出：空字符串
    cout << reverse(";", ';') << endl;                // 输出：;
    cout << reverse("abcde;", ';') << endl;           // 输出：edcba;
    cout << reverse("we;tonight;you", ';') << endl;   // 输出：ew;thginot;uoy
    
    return 0;
}
