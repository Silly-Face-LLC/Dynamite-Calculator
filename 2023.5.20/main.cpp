#include <iostream>
#define PI 3.14159265
#include <string>
#include <math.h>
#include <stdlib.h>
#include <sstream>
using namespace std;

int main()
{
	double a;
	double b;
	double ans;
	char ops;
	//string a;
	//string b;
	//stringstream ss;
	cout << "Dynamite Calculator \n \n";
	//string ops;
	while (true) {
		/*getline(cin, a);
		getline(cin, ops);
		getline(cin, b);
		ss << a;
		ss << ops;
		ss << b;
		char ops = ops;*/
		cin >> a;
		cin >> ops;
		
			

			switch (ops)
			{
			case '+':
				cin >> b;
				ans = a + b;
				cout << ans << endl;
				break;
			case '-':
				cin >> b;
				ans = a + b;
				cout << ans << endl;
				break;
			case '*':
				cin >> b;
				ans = a + b;
				cout << ans << endl;
				break;
			case '/':
				cin >> b;
				ans = a / b;
				cout << ans << endl;
				break;
			case '^':
				cin >> b;
				ans = pow(a, b);
				cout << ans << endl;
				break;
			case '%':
				ans = a / 100;
				cout << ans << endl;
				break;
			case '#':
				ans = sqrt(a);
				cout << ans << endl;
				break;
			case 'c':
				ans = cos(a*PI/180);
				cout << ans << endl;
				break;
			case 's':
				ans = sin(a * PI / 180);
				cout << ans << endl;
				break;
			case 't':
				ans = tan(a * PI / 180);
				cout << ans << endl;
				break;
			}
			
			
		
		
	}
}
