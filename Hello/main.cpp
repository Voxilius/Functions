#include<iostream>
using namespace std;

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(float arr[], const int n);

template<typename T>
void Print(T arr[], const int n);

template<typename T>
void Sort(T arr[], const int n);

template<typename T>
int Sum(T arr[], const int n);

template<typename T>
double Avg(T arr[], const int n);

void main() {
	setlocale(LC_ALL, "Russian");
	const int n = 5;
	int arr[n];

	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее-арифмитическое элементов массива: " << Avg(arr, n) << endl;
}

void FillRand(int arr[], const int n) {
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 100;
	}
}
void FillRand(double arr[], const int n) {
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 10000;
		arr[i] /= 100;
	}
}
void FillRand(float arr[], const int n) {
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 1000;
		arr[i] /= 10;
	}
}

template<typename T>
void Print(T arr[], const int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << "\t";
	}
	cout << endl;
}

template<typename T>
void Sort(T arr[], const int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[i]) {
				T buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

template<typename T>
int Sum(T arr[], const int n) {
	T Sum = 0;
	for (int i = 0; i < n; i++) {
		Sum += arr[i];
	}
	return Sum;
}


template<typename T>
double Avg(T arr[], const int n) {
	return (double)Sum(arr, n) / n;
}