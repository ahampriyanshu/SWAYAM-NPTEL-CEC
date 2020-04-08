#include <iostream>

#include <string>

using namespace std;


int StrCmp(string s1, string s2) {
 return s1 == s2 ? 0 :    
        s1 > s2 ? 1 : -1;  
} 
int main() {
    string str1, str2;
    cin >> str1 >> str2;

    if (StrCmp(str1, str2) == 0) // Call-1
        cout << "equal" << endl;
    else if (StrCmp(str1, str2) > 0) // Call-2
        cout << str1;
    else
        cout << str2;
    return 0;
}
