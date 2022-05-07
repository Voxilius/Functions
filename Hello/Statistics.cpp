#include "stdafx.h"
int Sum(int arr[], const int n) {
	int Sum = 0;
	for (int i = 0; i < n; i++) {
		Sum += arr[i];
	}
	return Sum;
}
double Sum(double arr[], const int n) {
	double Sum = 0;
	for (int i = 0; i < n; i++) {
		Sum += arr[i];
	}
	return Sum;
}
float Sum(float arr[], const int n) {
	float Sum = 0;
	for (int i = 0; i < n; i++) {
		Sum += arr[i];
	}
	return Sum;
}


double Avg(int arr[], const int n) {
	return (double)Sum(arr, n) / n;
}
double Avg(double arr[], const int n) {
	return (double)Sum(arr, n) / n;
}
double Avg(float arr[], const int n) {
	return (double)Sum(arr, n) / n;
}