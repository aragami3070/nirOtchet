#pragma once
#include <cmath>

// ������� ���������� ����������� x^n
double recursion(double x, long long n) {
	// ���� n == 0
	if (n == 0) {
		// �� ���������� 1
		return 1;
	}
	// ���� n > 0
	else if (n > 0) {
		// �� ���������� x * x^(n-1)
		return x * recursion(x, n - 1);
	}
	// ���� n < 0
	else {
		// �� ���������� 1 / (x^|n|)
		return 1 / recursion(x, abs(n));
	}
}
