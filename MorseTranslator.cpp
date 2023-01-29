#include <iostream>
#include <string>
using namespace std;

int main() {
    string morse[26] = { ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--","--.." };
    string input;
    cout << "Enter your word:";
    cin >> input;

    for (int i = 0; i < input.length(); i++) {
        int index = tolower(input[i]) - 'a';

        cout << morse[index] << "   "; //printing corresponding Morse code for each letter of the given word.
    }

    return 0;
}