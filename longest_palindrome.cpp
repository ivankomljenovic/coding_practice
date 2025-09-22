#include <string>
#include <iostream>

using namespace std;

bool isPalindrome(string s) {
    if (s.length() % 2 == 1) // if string has odd number of chars, remove the middle char
        s = s.substr(0, s.length()/2) + s.substr(s.length()/2 + 1);
    
    int p1 = s.length() / 2 - 1;
    int p2 = s.length() / 2;

    for (int i = 0; i < s.length() / 2; i++){
        
        if (s[p1] != s[p2])
            return false;

        p1 -= 1;
        p2 += 1;
    }

    return true;
}


string longestPalindrome(string s) {
    
    // search through all substrings
    string longest;

    for (int i = 0; i < s.length(); i++){
        for (int j = 0; j < s.length(); j++){
            
            if (i == j)
                continue;

            string temp = s.substr(i, j - i + 1);

            if (temp.length() > longest.length() && isPalindrome(temp))
                longest = temp;

        }
    }

    return longest;
}



int main() {
    cout << longestPalindrome("txracecarracecarttt") << endl;
}