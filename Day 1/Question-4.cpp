// LeetCode Questions 
#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

int maxNumOfPairs(vector<string>& words) {
    int maxPairs = 0;
    unordered_map<string, int> reversedMap;

    for (const string& word : words) {
        string reversedWord = word;
        reverse(reversedWord.begin(), reversedWord.end());
        if (reversedMap.find(reversedWord) != reversedMap.end()) {
            maxPairs++;
            reversedMap[reversedWord]--;
            if (reversedMap[reversedWord] == 0) {
                reversedMap.erase(reversedWord);
            }
        } else {
            reversedMap[word]++;
        }
    }

    return maxPairs;
}

int main() {
    vector<string> words1 = {"cd", "ac", "dc", "ca", "zz"};
    cout << maxNumOfPairs(words1) << endl;  

    vector<string> words2 = {"ab", "ba", "cc"};
    cout << maxNumOfPairs(words2) << endl;  

    vector<string> words3 = {"aa", "ab"};
    cout << maxNumOfPairs(words3) << endl;  

    return 0;
}
