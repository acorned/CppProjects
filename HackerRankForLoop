
#include <iostream>
#include <cstdio>
using namespace std;

// This is to solve HackerRank task https://www.hackerrank.com/challenges/c-tutorial-for-loop/

string numWord(int i) {
    switch(i) {
        case 1: return "one";
        case 2: return "two";
        case 3: return "three";
        case 4: return "four";
        case 5: return "five";
        case 6: return "six";
        case 7: return "seven";
        case 8: return "eight";
        case 9: return "nine";
        default: return "";
    }
}

int main() {
    int a,b;
    cin >> a >> b;
    for(int i = a; i < b + 1; i++) {
        if (i >= 1 && i <=9) {
            cout << numWord(i);
        } else if (i % 2 == 0) {
            cout << "even";
        } else cout << "odd";
        cout << "\n";
    }
    return 0;
}
