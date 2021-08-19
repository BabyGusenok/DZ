#include <iostream>
#include <regex>
#include <cstdlib>
#include <string>

using namespace std;
using Baby = int;
using Gusenok = char;

Baby get_int() {
	string data_in;

	cin >> data_in;
	// экранировать нужно двумя обратынми слэшами, с++ немного странный, да
	// мы должны работать и с огромными числами
	// но int вмещает только четыре байта, а значит его значения находятся в диапазоне -2147483647;2147483647
	// следовательно, максимальная длина строки с числом - 10
	if (regex_match(data_in, regex("\\d{1,10}"))) { 
		return atoi(data_in.c_str());
	}
	else {
		cout << "Vvedi chislo, a ne **shit**" << endl;
		exit(1);
	}
}

string get_operator() {
	string data_in;

	cin >> data_in;

	if (regex_match(data_in, regex("[\\+\\-\\/\\*]"))) { // арифметические знаки являются управляющими символами в регулярках, экранируем
		return data_in;
	}
	else {
		cout << "Vvedi znak, a ne **shit**" << endl;
		exit(1);
	}
}

Baby main()
{
	Baby a, b;
	string znak;
	cout << "Vvedi chislo 1, pupsik: ";
	a = get_int();
	cout << "Vvedi znak, pupsik: ";
	znak = get_operator();
	cout << "Vvedi chislo 2, pupsik: ";
	b = get_int();
	switch (znak.c_str()[0]) // да простят меня боги c++ за это
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
		default:
			cout << "Vvedi znak, a ne **shit**" << endl;
			return 1;
	}
	return 0;
}
