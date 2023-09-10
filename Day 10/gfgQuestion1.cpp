#include <iostream>
#include <string>
#include <map>

using namespace std;


void printWord(string N) {
	map<char, string> digits {
		{'1', "One"}, {'2', "Two"}, {'3', "Three"}, {'4', "Four"},
		{'5', "Five"}, {'6', "Six"}, {'7', "Seven"}, {'8', "Eight"},
		{'9', "Nine"}, {'0', "Zero"}
	};
	
	for (char number : N) {
		cout << digits[number] << " ";
	}
}

int main() {
	string N = "123";
	printWord(N);
	return 0;
}
