#ifndef __TOOLS_H__

#define __TOOLS_H__

// Version 1.3.0

#include <iostream>
#include <cmath>
#include <string>
#include <climits>

using namespace std;

#define PI 3.14159265

bool is_prime(int num) {
	if (num == 1) return false;
	if (num == 2) return true;
	for (int i = 2; i <= num / 2 + 1; i++)
		if (num % i == 0)
			return false;
	return true;
}

long long mu(int num, int fng) {
	if (fng == 0) return 1;
	if (fng == 1) return num;
	return num * mu(num, fng - 1);
}

bool is_even(int num) {
	return (num % 2 == 0);
}

bool is_odd(int num) {
	return (num % 2 == 1);
}

void easy_memset(int *array, int len) {
	for (int i = 0; i <= len; i++)
		array[i] = 0;
}

void easy_memset(char *array, int len) {
	for (int i = 0; i <= len; i++)
		array[i] = '\0';
}

void easy_memset(bool *array, int len) {
	for (int i = 0; i <= len; i++)
		array[i] = false;
}

bool big(int *ary, int len) {
	for (int i = 0; i < len - 1; i++)
		for (int j = i + 1; j < len; j++)
			if (ary[i] > ary[j])
				return false;
	return true;
}

bool small(int *ary, int len) {
	for (int i = 0; i < len - 1; i++)
		for (int j = i + 1; j < len; j++)
			if (ary[i] < ary[j])
				return false;
	return true;
}

void ccin(int *ary, int len) {
	for (int i = 0; i < len; i++)
		cin >> ary[i];
}

void ccin(char *ary, int len) {
	for (int i = 0; i < len; i++)
		cin >> ary[i];
}

void ccin(bool *ary, int len) {
	for (int i = 0; i < len; i++)
		cin >> ary[i];
}

int intcounts(int *ary, int len) {
	int count = 0;
	for (int i = 0; i < len; i++)
		count += ary[i];
	return count;
}

int times2(int n) {
	return n * n;
}

int times3(int n) {
	return n * n * n;
}

int min_array(int *array, int len) {
	int mini = INT_MAX;
	for (int i = 0; i < len; i++)
		if (array[i] < mini)
			mini = array[i];
	return mini;
}

int max_array(int *array, int len) {
	int maxi = INT_MIN;
	for (int i = 0; i < len; i++)
		if (array[i] > maxi)
			maxi = array[i];
	return maxi;
}

int temp_array(int *array, int len) {
	int tempi = 0;
	for (int i = 0; i < len; i++)
		tempi += array[i] / len;
	return tempi;
}

double round_area(int r) {
	return (double)PI * times2(r);
}

int minimize(int num) {
	if (num < 2) return num;
	for (int i = 2; i <= num / 2 + 1; i++)
		if (num % i == 0 || mu(i, 2) > num)
			num -= i;
	return num;
}

int maximize(int num) {
	if (num < 2) return num + 1;
	for (int i = 2; i <= num / 2 + 1; i++)
		if (num % i == 0 || mu(i, 2) < num)
			num += i;
	return num;
}

int *closeimize(int *array, int len) {
	int mini = min_array(array, len);
	int maxi = max_array(array, len);
	int tempi = temp_array(array, len);
	for (int i = 0; i < len; i++) {
		if (array[i] > (mini * (abs((abs(tempi) + 1) / 2) + 1)))
			array[i] = minimize(array[i]);
		if (array[i] < (maxi / (abs((abs(tempi) + 1) / 2) + 1)))
			array[i] = maximize(array[i]);
	}
	return array;
}
#endif // __TOOLS_H__
