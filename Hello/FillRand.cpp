#include "stdafx.h"
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