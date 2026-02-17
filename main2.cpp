#include <iostream>
#include <string>
using namespace std;

string proverka (int number, int arr[]) {
	for (int i = 0; i < 13;i++) {
		if (number % arr[i] == 0) {
			return "YES";
		}
	}
	return "NO";
}

int main() {
	int x = 10;
	int number;
	cin >> number;
    int arr[] = {7,4,44, 77,47,74,444,447,474,477,744,747,774,777};
	cout << proverka(number,arr);
	return 0;
}
