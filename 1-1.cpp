#include <iostream>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

bool isAllUniqueCharacters(string s);

int main()
{
	if (isAllUniqueCharacters("tescolin"))
		cout << "Correct" << endl;
	else
		cout << "Incorrect" << endl;

	if (!isAllUniqueCharacters("ooccc"))
		cout << "Correct" << endl;
	else
		cout << "Incorrect" << endl;

	return 0;
}

bool isAllUniqueCharacters(string s)
{
	set<char> mySet;
	pair<set<char>::iterator, bool> ret;
	for (char& c : s)
	{
		cout << c << endl;
		ret = mySet.insert(c);
		if (ret.second == false)
			return false; // element already exists
	}
	return true;
}

