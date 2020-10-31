#include <iostream>
using namespace std;
typedef int Baby;
typedef char Gusenok;
Baby main()
{
	Baby a, b;
	Gusenok znak;
	cout << "ZNAK:";
	cin >> znak;
	cout << "Vvedi chislo 1 pupsik:" << endl;
	cin >> a;
	cout << "Vvedi chislo 2 pupsik:" << endl;
	cin >> b;
	switch (znak)
	{case '+':
		cout << a + b << endl;
		return 0;
	case '-':
		cout << a - b << endl;
		return 0;
	case '*':
		cout << a * b << endl;
		return 0;
	case '/':
		cout << a / b << endl;
		return 0; 
	default:
		cout << "Vvedite simvolllll" << endl;
		return 0;
	}


}