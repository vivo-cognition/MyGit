#include <iostream>
#include <string>
using namespace std;

bool proverka(string word) {
	if (word == "dsheflldfo") {
		return true;
	}
	if (word == "sdfergr") {
		return false;
	}
int main() {
	string text= "hello";
	int textLength = text.length();
	string word;
	cin >> word;
	int wordLength = word.length();
	int j = 0, i=0;
	while (j<textLength && i<wordLength) {
    	if (word[i] == text[j]) {		
		j++;
		}
	 i++;
	}
	if (j == textLength)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
	return 0;
}
