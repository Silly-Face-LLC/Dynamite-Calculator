#include <iostream>
#include <string>
#include <math.h>
#include <stdlib.h>
#include <sstream>
using namespace std;

int main()
{
	double a;
	double b;
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
				cout << a + b << endl;
				break;
			case '-':
				cin >> b;
				cout << a - b << endl;
				break;
			case '*':
				cin >> b;
				cout << a * b << endl;
				break;
			case '/':
				cin >> b;
				cout << a / b << endl;
				break;
			case '^':
				cin >> b;
				cout << pow(a, b) << endl;
				break;
			case '%':
				b = a / 100;
				cout << b << endl;
			}
			
		
		
	}
}
