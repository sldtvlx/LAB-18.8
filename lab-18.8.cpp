/*
Базовый класс: Человек(Person)
Имя - string
Возраст - int
Произвольный класс: Абитуриент(Employee)
Колличество баллов - int
Специальность - string
Группа - Вектор(Vector)

Команды:
Создать группу
Добавить элемент в группу
Удалить последний элемент из группы
Вывести информацию об элементах группы
Вывести информацию о среднем возрасте
Конец работы
*/

#include "CLASS.h"
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	int s, old, menu = 4, num = 0;
	float kolvo_ballov;
	string name, specialnost;
	Employee* str;
	Employee a;
	cout << "Введи количество абитуриентов: ";
	cin >> s;
	str = new Employee[s];
	for (int i = 0; i < s; i++)
	{
		cout << "Введи имя, возраст, колличество баллов и специлиальность (через пробел): ";
		cin >> name >> old >> kolvo_ballov >> specialnost;
		str[i] = Employee(old, name, kolvo_ballov, specialnost);
	}

	while (menu == 1 || menu == 2 || menu == 3 || menu == 4)
	{

		cout << endl << endl << "Меню: \n\t1. Добавить элемент в конец \n\t2. Удалить последний элемент \n\t3. Получить средний возраст всех абитуриентов \n\t4. Получить информацию про группу \n\t0. Выход.";
		cout << endl << "Выбери пункт меню: "; cin >> menu;

		if (menu == 1)
		{
			Employee* str1;
			str1 = new Employee[s + 1];
			for (int i = 0; i < s; i++)
				str1[i] = str[i];
			cout << "Введи имя, возраст, зарплату и должность через пробел: ";
			cin >> name >> old >> kolvo_ballov >> specialnost;
			str1[s] = Employee(old, name, kolvo_ballov, specialnost);
			cout << "Элемент добавлен";
			delete[] str;
			str = str1;
			s++;
		}

		if (menu == 2)
		{
			Employee* str1;
			str1 = new Employee[s - 1];
			for (int i = 0; i < s - 1; i++)
				str1[i] = str[i];
			cout << "Элемент удален";
			delete[] str;
			str = str1;
			s--;
		}

		if (menu == 3)
		{
			int age = 0;
			for (int i = 0; i < s; i++)
			{
				age += str[i].old;
			}
			
			a.Sred_Vozr(age, s);
		}

		if (menu == 4)
		{
			for (int i = 0; i < s; i++)
			{
				str[i].GetInfo();
			}
		}

		if (menu == 0)
		{
			delete[] str;
			str = 0;
			break;
		}

	}
}