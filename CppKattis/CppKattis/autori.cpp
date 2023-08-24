#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {

	//Take input
	string input;
	cin >> input;

	//Create vector to store output
	vector<char> output_chars;

	//Print the first letter and every letter after a '-' char
	for (int i = 0; i < input.length(); i++) {
		if (i == 0) {
			output_chars.push_back(input[i]);
		}
		if (input[i] == '-') {
			output_chars.push_back(input[i + 1]);
			i++;
		}
	}

	//Print output
	for (int i = 0; i < output_chars.size(); i++) {
		cout << output_chars[i];
	}
}