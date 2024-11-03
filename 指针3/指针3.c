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
int Add(int x, int y) {     //&函数名和函数名都是函数的地址
	int z;
	z = x + y;
	return z;
}
int main() {
	int (*pa)(int, int) = Add;//函数指针  是指向函数的指针，储存的是函数的地址，函数的地址是创建函数向内存申请的空间标号
	printf("%d\n", (pa)(2, 3));
	printf("%d\n", (* pa)(2, 3));
	return 0;
}
/*//////
(*(void(*)())0)();
void(*)() 是一个函数指针的类型，指向一个不接受参数也不返回任何值的函数。
(void(*)())0 将整数0强制转换为上述类型的函数指针。在大多数操作系统中，地址0是保留的，通常用作空指针的表示。
(*(void(*)())0)() 通过解引用（ * ）操作符和紧跟其后的调用操作符（()），尝试调用位于地址0的函数。由于地址0不是有效的函数地址，这样的调用会导致运行时错误。

//////*/

/*//void(*signal(int, void(*)(int)))(int)
可简化为：
typedef void(*p)(int);
p signal(int, p);

typedef void(*p)(int);
这行代码定义了一个名为p的新类型，它是一个指向函数的指针类型。这个函数接收一个int类型的参数，
并返回void（即不返回任何值）。简单来说，p是一个函数指针类型，指向的函数签名是void func(int)。

p signal(int, p);
这行代码声明了一个函数signal，它接收两个参数：第一个参数是int类型，第二个参数是之前定义的函数指针类型p。
函数的返回类型是p，即它返回一个指向函数的指针，这个指针指向的函数签名也是void func(int)。
//*/

