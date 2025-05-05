#include<iostream>
using namespace std;

void printingAllSubsets(string s, string current = "", int index = 0) {
    if (index == s.length()) {
        cout << current << endl;
        return;
    }

    // Include current character
    printingAllSubsets(s, current + s[index], index + 1);

    // Exclude current character
    printingAllSubsets(s, current, index + 1);
}

int main() {
    string str;
    cout << "\nEnter your string: ";
    cin >> str;
    printingAllSubsets(str, "", 0);
}
