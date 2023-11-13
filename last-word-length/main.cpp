/*********************************************************
 * LAST WORD LENGTH
 * Given piece of text, find the length of the last word.
*********************************************************/
#include <iostream>
using namespace std;

int countLastWordLength(string s) {
    int lastspace = 0;
    for (int i=0; i<s.length(); i++) {
        if (s[i] == ' ') {
            lastspace = i;
        }
    }
    int lastword = 0;
    for (int i=lastspace+1; i<s.length(); i++)
        lastword++;
    return lastword;
}

int main() {
    string sentences[] = {"First one", 
                          "This is the second", 
                          "And behold! This is the third", 
                          "Look, even a fourth!"};
    for (string s : sentences) {
        cout << s << endl;
        cout << "Length of last word: " << countLastWordLength(s) << endl;
    }
}