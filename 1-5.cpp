#include <iostream>
#include <string.h>

using namespace std;

string compressString(string& str);

int main()
{
	string test1 = "aaabbccdddd";
	string ret1 = compressString(test1);
	cout << test1 << endl;
	cout << ret1 << endl;

	return 0;
}

string compressString(string& str)
{
	int length = str.length();
	if (length == 0)
		return "";
	
	string ret = "";
	char currChar = str[0];
	int index = 0, count = 0;

	while (index != length)
	{
		if (currChar == str[index])
		{
			count++;
		}
		else
		{
			ret += currChar;
			ret += to_string(count);
			count = 1;
			currChar = str[index];
		}
		index++;	
	}
	ret += currChar;
	ret += to_string(count);
	return ret;
}
