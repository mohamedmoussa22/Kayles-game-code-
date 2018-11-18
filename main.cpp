#include <iostream>
using namespace std;

// word : Stores input string
// sub : Stores current subset
// index : Index in current subset, curr
void powerSet(string word, int index = -1,string sub = "")
{

	// base case
	if (index ==  word.length())

		return;

	// First print current subset
	cout << sub << "\n";

	// Try appending remaining characters
	// to current subset
	for (int i = index + 1; i <  word.length(); i++) {

		sub += word[i];
		powerSet(word, i, sub);

		// Once all subsets beginning with
		// initial "sub" are printed, remove
		// last character to consider a different
		// prefix of subsets.
		sub.erase(sub.size() - 1);
	}
	return;
}

// Driver code
int main()
{
	string word = "happy";
	powerSet(word);
	return 0;
}
