// 20.08.2018.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;
// Find factorial of 5!
//int f(int n)
//{
//	if (n == 1)
//		return 1;
//	return n * f(n - 1);
//}
//Find Max 

// 46. Написать рекурсивную функцию, которая вычисляет xy с помощью умножения. Проиллюстрируйте работу функции примером.
//int power(int x, int y)
//{
//	if (y == 0)
//		return 1;
//
//	return x * power(x, y - 1);
//}

//47. Написать рекурсивную функцию, которая вычисляет x*y с помощью сложения. Проиллюстрируйте работу функции примером.
//int sum(int x, int y)
//{
//	if (y == 1)
//		return x;
//	return x + sum(x, y - 1);
//}
//48. Написать рекурсивную функцию, которая выводит N звезд в ряд, число N задает пользователь. Проиллюстрируйте работу функции примером.
//void print(int n)
//{
//	if (n == 0)
//		return;
//	cout << '*';
//	print(n - 1);
//}
//49. Написать рекурсивную функцию, которая вычисляет сумму всех чисел в диапазоне от a до b. Пользователь вводит a и  b. Проиллюстрируйте работу функции примером.
//int sum1(int a, int b)
//{
//	if (a == b) return a;
//	return a + sum1(a + 1, b);
//}
//int sum(int a[], int left, int right)
//{
//	int middle = (left + right) / 2;
//	if (left == right) return a[left];
//	return (sum(a, left, middle) + sum(a, middle + 1, right));
//}

//max
//int max2(int a[], int n, int max)
//{
//	if (n == 0) return max;
//	if (max2(a, n - 1, max) < a[n]) max = a[n];
//
//	return max2(a, n - 1, max);
//
//}
//int max1(int a[], int n, int left, int right, int max)
//{
//	int mid=0;
//	mid = (left + right) / 2;
//	if (left == right) return a[left];
//	if (max1(a, n, left, mid, max) < a[n]) max = a[n];
//	return max1
//
//
//}

//int max_arr(int arr[], int l, int r)
//{
//
//	if (r == l) return arr[r];
//	int mid = (r + l) / 2;
//	int leftSide = max_arr(arr, l, mid);
//	int rightSide = max_arr(arr, mid + 1, r);
//
//	return (leftSide > rightSide ? leftSide : rightSide);
//	//return max(max_arr(arr, l, mid), max_arr(arr, mid + 1, r));
//}
//
//int max_arr2(int a[], int size, int m)
//{
//	if (size == 0) return m;
//	if (max_arr2(a, size - 1, m) < a[size]) m = a[size];
//
//	return max_arr2(a, size-1, m);
//}


// 51.Напишите рекурсивную функцию, которая принимает одномерный массив из 100 целых чисел заполненных 
//случайным образом и находит позицию, с которой начинается последовательность из 10 чисел, сумма которых минимальна.
int position(int arr[], int pos, int size, int max)
{
	int p = 0;
	int sum = 0;
	int max = INT_MIN;
	for (int i = 0; i < 10; i++)
	{

	}
}

int min10(int a[100], int n, int &p)
{
	int s = 0;
	for (int i = n; i < n + 10; ++i) s += a[i];
	cout << "n: " << n << "; s: " << s << endl;
	if (100 - n == 10)
	{
		p = n;
		return s;
	}
	else
	{
		int s1 = min10(a, n + 1, p);
		if (s <= s1)
		{
			p = n;
			return s;
		}
		else return s1;
	}
}

int main()
{
	setlocale(LC_ALL, "Rus");

	/*int n = 0;
	cin >> n;
	cout << f(n) << endl;
*/

//46.
	/*int x, y;
	cin >> x >> y;
	cout << power(x, y) << endl;*/

	//47
	/*int x, y;

	cout << sum(2, 5) << endl;*/

	//48
	/*int x;
	cin >> x;
	print(x);*/

	//49.

	//int a, b;
	//cin >> a >> b;
	//cout << sum(a,b)<< endl;

	/*int a[] = { 3,8,1,9,6,7,8 };
	
	cout << max_arr(a,0,6) << endl;*/

	int a[100];
	int p;
	for (int i = 0; i < 100; i++)
	{
		a[i] = 0 + rand() % 200;
	}
	for (int i = 0; i < 100; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	min10(a, 0, p);
	cout << p << endl;

	system("pause");
	return 0;
}

