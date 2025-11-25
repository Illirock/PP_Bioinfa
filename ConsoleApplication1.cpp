#include <iostream>

using namespace std;

bool is_palindrome(string word, int lenght_checked)
{
	if (lenght_checked == word.length()) { return true; }
	else
	{
		if (word[lenght_checked] == word[word.length() - (1 + lenght_checked)])
		{
			return is_palindrome(word, lenght_checked + 1);
		}
		else { return false; }
	}
}

int max(int array[]) {
	int max;
	for (int item = 0; item < sizeof(array); item++) {
		cout << array[item] << endl;
		if (item == 0 || max < array[item]) {
			max = array[item];
		}
	}
	return max;
}

int max_recursive(int array[], int max, int lenght_checked = 0) {
	if (lenght_checked == sizeof(array)) { return max; }
	else {
		if (lenght_checked = 0 || array[lenght_checked] > max) { max = array[lenght_checked]; }
		return max_recursive(array, max, lenght_checked + 1);
	}
}

int main()
{
	//string word;
	//cout << "" << endl;
	//cin >> word;
	//is_palindrome(word, 0) ? cout << "Your word is palidrome" << endl : cout << "Your word isn't palidrome" << endl;
	//Zadanie 5
	int Table[10] = { 0, 9, 8, 43, 56321, 56489, 231, 1, 67423, 3 };
	cout << "Max value in table is: " << max(Table) << endl;
	cout << "Max value in table by recursive function is: " << max_recursive(Table, INT_MIN) << endl;
	//Zadanie 6

}
