#include <iostream>
#include <string>
using namespace std;

string reverseString(string &str) {
    string reversed = "";
    for(int i = str.length() - 1 ; i>=0 ; i--) {
        reversed += str[i];
    }

    return reversed;
}

bool isPalindrome(string &str) {
    string reversed = reverseString(str);
    return str == reversed;
}

int main() {
    string name = "Louis";
    cout<<reverseString(name)<<endl;

    string palindrome = "reckless";
    cout<<(isPalindrome(palindrome)?"Is palindrome":"Is not palindrome");
}