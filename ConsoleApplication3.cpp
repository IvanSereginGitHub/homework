#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int calc[11];
	int i;
	char c, s[255];

	for (i = 1; i <= 10; i++) {
		calc[i] = 0;
	}
	cin >> s;
	i = 0;
	do {
		if (('0' <= s[i]) && (s[i] <= '9'))
		{
			calc[s[i] - '0' + 1]++;
		}
		i++;
	} 
	while 
		(s[i] != '!');

	for (i = 1; i <= 10; i++) {
		if (calc[i] > 0) {
			cout << char(i - 1 + '0') << " - "<< calc[i]<< endl;
		}
	}
}
//ЗАДАНИЕ ВЫПОЛНЕНО НА ОСНОВЕ СТРАНИЦЫ 195-196
