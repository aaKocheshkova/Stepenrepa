#include <cmath>
#include <iostream>
#include <iomanip>
#include "h_stand_fun.h"
using namespace std;

//����������� ������� ����� �������
void inputv(double x[], int n)
{//���������� ����������
	int i;
	//����
	for (i = 0; i<n; i++)
	{
		cin >> x[i];
	}
}
//����������� ������� ������ �������
void outputv(double x[], int n)
{//���������� ����������
	int i;
	//�����
	for (i = 0; i<n; i++)
	{
		if (i % 8 == 0) cout << endl;
		cout << setw(10) << x[i];
	}
}