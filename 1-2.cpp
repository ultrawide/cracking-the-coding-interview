#include <iostream>
#include <cstring>

using namespace std;

void reverse(char* str);

int main()
{
	//char test[] = {'a', 'b', 'c'};
//	char test[] = {'\0'};
	char test[] = {'a', 'b', 'c', 'd'};
	reverse(test);
	cout << test << endl;

	return 0;
}

void reverse(char* str)
{
	if (str == NULL)
		return;

	int len = strlen(str);
	for (int i = 0; i < len/2; i++)
	{
		char swap = str[i];
		str[i] = str[len-i-1];
		str[len-i-1] = swap;
	}

	return;
}

