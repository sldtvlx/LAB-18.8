#include "CLASS.h"
#include <iostream>
#include <string>
using namespace std;

void Employee::GetInfo()
{
	cout << "��� - " << name << ", ������� - " << old << ", ������������� - " << dol << ", ����������� ������ - " << zp << endl;
}

void Employee::Sred_Vozr(int all_age, int s)
{
	float sred = all_age / s;
	cout << "������� ������� ���� ������������: " << sred << endl;
}