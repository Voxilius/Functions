#include "stdafx.h"
#include "FillRand.h"
#include "Print.h"
#include "Sort.h"
#include "Statistics.h"

void main() {
	setlocale(LC_ALL, "Russian");
	const int n = 5;
	int arr[n];

	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << "����� ��������� �������: " << Sum(arr, n) << endl;
	cout << "�������-�������������� ��������� �������: " << Avg(arr, n) << endl;
}