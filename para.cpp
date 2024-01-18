#include <Windows.h>
#include <iostream>
using namespace std;

int main()
{
	 setlocale(LC_ALL, "Russian");
	 char c;
	 float num1, num2; 
	 cout << "Выбирете действие: * или /: ";
		 cin >> c;
		 cout << "Введите первое число: ";
		 cin >> num1;
		 cout << "Ваедите  втоорое число: ";
		 cin >> num2;
		 switch (c) {
		 case '*':
			 cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
			 break;
		 case '/':
			 if (num2 != 0)
				 cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
			 else
				 cout << "ошибочка, на ноль нельзя делить" << endl;
			 break;
			 
		 }
		 return 0;
}

