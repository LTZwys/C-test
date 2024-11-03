//数组参数、指针参数、函数指针
#include <stdio.h>
//void test(int arr[2][3]);
//void test(int arr[][3]);
//void test1(int* arr); //错误的，传参的是arr第一行一维数组的地址，与整数指针不匹配
//void test2(int**  arr); //错误的，首元素的地址是第一行得地址，第一行得地址是一个数组的地址，一个数组的地址不能放在二级指针里，二级指针是存放一级指针变量的地址的
//void test5(int (*arr)[3]);
//int main() {
//	int arr[2][3] = { 0 };
//
//	return 0;
//}
int Add(int x, int y) {//&函数名和函数名都是函数的地址
	int z;
	z = x + y;
	return z;
}
int main() {
	int (*pa)(int, int) = Add;//函数指针  是指向函数的指针，储存的是函数的地址，函数的地址是创建函数向内存申请的空间标号
	printf("%d", (* pa)(2, 3));
	return 0;
}
