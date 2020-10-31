#include <iostream>
using namespace std;
using Baby = int;
using Gusenok = char;
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
	default:
		cout << "Vvedite simvolllll" << endl;
		return 0;
	}


}
