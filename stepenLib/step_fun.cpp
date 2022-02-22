#include <cmath>
#include <iostream>
#include <iomanip>
#include "h_step_fun.h"
using namespace std;

//����������� ������� ��� �������� ����� ��������� ������� � �����������
double SumaLN(double x[], int n)
{
	//���������� ���������� 
	double s; int i;
	//���������� 
	s = 0;
	for (i = 0; i < n; i++)
		s = s + log(x[i]);
	return s;
}
//����������� ������� ��� �������� ������������ �������� � �����������
double ProizLN(double x[], double y[], int n)
{
	//���������� ���������� 
	double sp; int i;
	//���������� 
	sp = 0;
	for (i = 0; i < n; i++)
		sp = sp + log(x[i]) * log(y[i]);
	return sp;
}
//����������� ������� ��� ����� ��������� ��������� � �����������
double SumKvadLN(double x[], int n)
{
	//���������� ���������� 
	double sk; int i;
	//���������� 
	sk = 0;
	for (i = 0; i < n; i++)
		sk = sk + pow(log(x[i]), 2);
	return sk;
}