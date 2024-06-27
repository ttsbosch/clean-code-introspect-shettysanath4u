#include "StringCalculator.h"
#include <vector>
#include <iostream>
#include <string>
#include <regex>

void add_if_valid(vector<int> &numbers, string number_string) {
	int number = stoi(number_string);
	if (number <= 1000)
		numbers.push_back(number);
}

vector<int> get_numbers(const string &input) {
	regex numbers_only("(-?\\d+)+");

	vector<int> numbers;
	for_each(sregex_token_iterator(input.begin(), input.end(), numbers_only),
				sregex_token_iterator(),
				[&numbers](string s) { add_if_valid(numbers, s); });

	return numbers;
}
int StringCalculator::add(string input){
        if (input.empty())
		return 0;

	vector<int> numbers = get_numbers(input);

	//check_for_negatives(numbers);

	return 0;
}
