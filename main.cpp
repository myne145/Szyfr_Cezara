#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

const char alphabet[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','r','s','t','u','w','x','y','z'};

int getAlphabetIndex(char c) {
    for(int i = 0; i < 24; i++) {
        if(c == alphabet[i]) {
            return i;
        }
    }
    return -1;
}

void caesarCipher(string word, int howManyLettersToMove) {
    char wordChar[word.size()];
    char result[word.size()];
    strncpy(wordChar, word.c_str(), sizeof(wordChar));
    for(int i = 0; i < sizeof(wordChar); i++) {
        int index = getAlphabetIndex(wordChar[i]) + howManyLettersToMove;
        if(index >= 24) {
            index = index - 24;
        }
        result[i] = alphabet[index];
    }
    for(int i = 0; i < sizeof(result); i++)
        cout << result[i];
}

int main() {
    caesarCipher("slowo", 1);
    return 0;
}
