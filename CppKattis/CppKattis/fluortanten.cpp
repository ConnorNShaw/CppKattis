#include <iostream>
#include <vector>
#include <string>
using namespace std;

long long get_sum(vector<int> list);

int main() {

	//Take input (first line is one number, second line is a list of numbers)

	string input;
	cin >> input;					//Take the first line
	int first_num = stoi(input);	//Parse int
	//getline(cin, input);			//Take the next line
	vector<int> num_list;

	for (int i = 0; i < first_num; i++) {
		cin >> input;
		if (input != "0") {
			num_list.push_back(stoi(input));
		}
	}

	/*for (int i = 0; i < num_list.size(); i++) {
		cout << num_list[i] << "\n";
	}*/

	get_sum(num_list);

	long long highest_sum = get_sum(num_list);
	long long current_sum = highest_sum;

	for (int i = num_list.size() - 1; i >= 0; i--) {
		int current_num = num_list[i];
		current_sum += current_num;		//Putting zero before current number
		if (current_sum > highest_sum) {
			highest_sum = current_sum;
		}
	}

	cout << highest_sum << "\n";
}

long long get_sum(vector<int> list) {
	long long sum = 0;
	for (int i = 0; i < list.size(); i++) {
		sum += ((i + 1) * list[i]);
	}
	return sum;
}