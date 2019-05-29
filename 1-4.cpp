#include <iostream>
#include <cstring>

using namespace std;

void replaceSpaces(char* str, int length);

int main()
{
	char test1[] = "doctor colin  ";
	replaceSpaces(test1, 12);
	cout << test1 << endl;

	return 0;
}

void replaceSpaces(char* str, int length)
{
	int spaceCount = 0, newLength, i;
	for (i = 0; i < length; i++)
	{
		if (str[i] == ' ')
		{
			spaceCount++;
		}
	}
	newLength = length + spaceCount * 2;
	str[newLength] = '\0';
	// if not ' ', move to back. otherwise %20
	for (i = length - 1; i >= 0; i--)
	{
		if (str[i] == ' ')
		{
			str[newLength - 1] = '0';
			str[newLength - 2] = '2';
			str[newLength - 3] = '%';
			newLength = newLength - 3;
		}
		else
		{
			str[newLength - 1] = str[i];
			newLength = newLength - 1;
		} 
	}
}
