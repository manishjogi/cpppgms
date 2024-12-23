#include <iostream>
#include <string>
#include <map>

using namespace std;

void anagram(string str1, string str2) {
    // Check if lengths are equal
    if (str1.length() != str2.length()) {
        cout << "Not anagram" << endl;
        return;
    }

    // Create a frequency map for characters in str1
    map<char, int> m;

    for (char c : str1) {
        m[c]++;
    }

    // Decrement the frequency for characters in str2
    for (char c : str2) {
        if (m.find(c) == m.end() || m[c] == 0) {
            cout << "Not anagram" << endl;
            return;
        }
        m[c]--;
    }

    cout << "Anagram" << endl;
}

int main() {
    string a = "sunild";
    string b = "dnilus";
    anagram(a, b);  // Output: Anagram

    // string c = "sunild";
    // string d = "uinls";
    // anagram(c, d);  // Output: Not anagram

    return 0;
}
