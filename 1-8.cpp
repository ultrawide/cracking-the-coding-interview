#include <iostream>
#include <string.h>

using namespace std;

bool isRotation(string s1, string s2);

int main()
{
	string test1a = "colin";
	string test1b = "olinc";
	if (isRotation(test1a, test1b))
		cout << "Correct" << endl;

	string test2a = "colin";
	string test2b = "bobth";
	if (!isRotation(test2a, test2b))
		cout << "Correct" << endl;
	return 0;
}

bool isRotation(string s1, string s2)
{
	if (s1.length() == s2.length() && s1.length() > 0)
	{
		string s1s1 = s1 + s1;
		size_t found = s1s1.find(s2);
		if (found == string::npos)
			return false;
		else
			return true;
	}
	return false;
}
