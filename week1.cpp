#include <iostream>
#include <memory>
#include <algorithm>

using namespace std;

void inputArray(int* &a, int n) {
	a = new int[n];
	if (a == NULL) return;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
void printArray(int* &a, int n) {
	if (a == NULL) return;
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}
void delArray(int*& a) {
	if (a != NULL) delete[] a;
}
int FindMin(int* a, int n) {
	int min = 1e9;
	for (int i = 0; i < n; i++) {
		if (min > a[i]) min = a[i];
	}
	return min;
}
int FindMaxModulus(int* a, int n) {
	int max = -1e9;
	for (int i = 0; i < n; i++) {
		if (max < a[i]) max = a[i];
	}
	return max;
}
int countValue(int* a, int n, int key) {
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] == key) cnt++;
	}
	return cnt;
}
int lengthOfStr(char* str) {
	int i = 0;
	while (str[i] != NULL) {
		i++;
	}
	return i - 1;
}
char* PrettyStr(char* a) {
	int sz = lengthOfStr(a);
	if (islower(a[0])) a[0] -= 32;
	for (int i = 1; i < sz; i++) {
		if (a[i - 1] == ' ' && islower(a[i]) == 1) a[i] -= 32;
		else {
			if (isupper(a[i]) && i != 0 && a[i - 1] != ' ') a[i] += 32;
		}
	}
	return a;
}

long long sumOfSquare(int n) {
	if (n == 0) return 0;
	return n * n + sumOfSquare(n - 1);
}
int gcd(int a, int b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}
bool isPalindrome(int a[], int l, int r) {
	if (l >= r) return 1;
	if (a[l] == a[r]) return isPalindrome(a, l + 1, r - 1);
	else return 0;
}

long long factorial(int n) {
	if (n == 1) return 1;
	else return n * factorial(n - 1);
}
int countDigit(int n) {
	if (n < 10) return 1;
	else return 1 + countDigit(n / 10);
}
int main() {
	cout << countDigit(123456) << endl;
	return 0;
}