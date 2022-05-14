#include <iostream>
using namespace std;

int main()
{
	string num1, num2;
	cin >> num1 >> num2;
	int len1 = num1.length(), len2 = num2.length();
	if (len1 < len2)
		cout << num1 << ' ' << num2;
	else if (len1 > len2)
		cout << num2 << ' ' << num1;
	else
	{
		int i;
		for (i = 0; num1[i] && num1[i] == num2[i]; i++);
		if (num1[i] < num2[i])
			cout << num1 << ' ' << num2;
		else if (num1[i] > num2[i])
			cout << num2 << ' ' << num1;
	}

	return 0;
}