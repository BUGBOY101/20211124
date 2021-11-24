#define	_CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
int a[10000000];
int main() {
	int i, n, m, count;
	char s[10];
	for (i = 0; i <= 1000000; i++) {
		_itoa(i, s, 10);
		if (strstr(s, "4") == NULL && strstr(s, "62") == NULL) {
			a[i] = 1;
		}
		else
			a[i] = 0;
	}
	while (cin >> n >> m && n || m) {
		count = 0;
		for (i = n; i <= m; i++) {
			count += a[i];
		}
		cout << count << endl;
	}
}
//选择排序-将第一个分别与后面的数相比较

//#include<iostream>
//using namespace std;
//int main() {
//	int a[10] = { 4,3,2,1,5,7,9,8,6,10 }, i, j;
//	/*for (i = 0; i < 9; i++) {
//		for (j = i + 1; j <10; j++) {
//			if (a[i] > a[j]) {
//				int temp = a[i];
//				a[i] = a[j];
//				a[j] = temp;
//			}
//		}
//	}*/
//	//冒泡排序
//	for (i = 0; i < 9; i++) {
//		for (j = 0; j < 10 - i - 1; j++) {
//			if (a[j] > a[j + 1]) {
//				int temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//			}
//		}
//	}
//	for (i = 0; i < 10; i++) {
//		cout << a[i] << " ";
//	}
//	cout << endl;
//}