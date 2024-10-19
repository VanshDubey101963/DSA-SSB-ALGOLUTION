#include <iostream>
using namespace std;

bool isAlphanumeric(char c) {
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9');
}

char toLower(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + ('a' - 'A');
    }
    return c;
}

bool isPalindrome(string str) {
    int left = 0, right = 0;

    while (str[right] != '\0') {
        right++;
    }
    right--;

    while (left < right) {
        while (left < right && !isAlphanumeric(str[left])) {
            left++;
        }
        while (left < right && !isAlphanumeric(str[right])) {
            right--;
        }
        if (toLower(str[left]) != toLower(str[right])) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    string str = "A man, a plan, a canal: Panama";
    cout << (isPalindrome(str) ? "True" : "False") << endl;
    return 0;
}