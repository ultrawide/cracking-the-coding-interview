#include <iostream>
#include <unordered_map>

using namespace std;

bool isStringPermutation(string s1, string s2);

int main()
{
	string s1 = "test";
	string s2 = "sett";

	if (isStringPermutation(s1, s2) == true)
		cout << "This is a string permutation!" << endl;
	else
		cout << "Incorrect" << endl;

	s1 = "colin";
	s2 = "program";

	if (isStringPermutation(s1, s2) == false)
		cout << "This is not a string permutation!" << endl;
	else
		cout << "Incorrect" << endl;
	
	return 0;
}

bool isStringPermutation(string s1, string s2)
{
	unordered_map<char, bool> stringMap;
	for (auto it = s1.begin(); it != s1.end(); it++)
	{
		stringMap[*it] = true;
	}

	for (auto it = s2.begin(); it != s2.end(); it++)
	{
		if (stringMap[*it] == false)
			return false;
	}
	
	return true;
}

