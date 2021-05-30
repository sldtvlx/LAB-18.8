#include "CLASS.h"
#include <iostream>
#include <string>
using namespace std;

void Employee::GetInfo()
{
	cout << "Имя - " << name << ", возраст - " << old << ", специальность - " << dol << ", колличество баллов - " << zp << endl;
}

void Employee::Sred_Vozr(int all_age, int s)
{
	float sred = all_age / s;
	cout << "Средний возраст всех абитуриентов: " << sred << endl;
}