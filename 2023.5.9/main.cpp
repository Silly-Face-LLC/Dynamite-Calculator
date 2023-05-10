#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{

	double a;
	double b;
	cout << "Dynamite Calculator \n \n";
	char ops;
	while (true) {
		cin >> a >> ops >> b;

		switch (ops)
		{
		case '+':

			cout << a + b << endl;
			break;
		case '-':

			cout << a - b << endl;
			break;
		case '*':

			cout << a * b << endl;
			break;
		case '/':

			cout << a / b << endl;
			break;
		case '^':

			cout << pow (a,b) << endl;
			break;
		}

	}
}
