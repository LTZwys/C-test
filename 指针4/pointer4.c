#include <stdio.h>
//int Add(int x, int y) {
//	int z;
//	z = x + y;
//	return z;
//}
//int Sub(int x, int y) {
//	int z;
//	z = x - y;
//	return z;
//}
//int Mul(int x, int y) {
//	int z;
//	z = x *y;
//	return z;
//}
//int Div(int x, int y) {
//	int z;
//	z = x /y;
//	return z;
//}
//int main() {
//	//需要一个数组，以存放4个函数的地址——函数指针的数组
//	int (*pa[4])(int, int) = { Add,Sub,Mul,Div };
//	int i = 0;
//	for (i = 0; i < 4; i++) {
//		printf("%d\n", (*pa[i])(2, 3));
//	}
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src) {
//
//}
//int main() {
//	char* (*ps)(char*, const char*) = my_strcpy;
//	char* (*ps[4])(char*, const char*) = { my_strcpy };
//	return 0;
//}


//计算器

int Add(int x, int y) {
	int z;
	z = x + y;
	return z;
}
int Sub(int x, int y) {
	int z;
	z = x - y;
	return z;
}
int Mul(int x, int y) {
	int z;
	z = x *y;
	return z;
}
int Div(int x, int y) {
	int z;
	z = x /y;
	return z;
}
void menu() {
	printf("0.Exit 1.Add 2.Sub 3.Mul 4.Div\n");
}
int main() {
	int x = 0;
	int y = 0;
	int c=0;
	int (*JSQ[4])(int, int) = { Add,Sub,Mul,Div };
	do
	{
		menu();
		printf("choose:>");
		scanf("%d", &c);
		if (c == 0) {
			printf("Exit\n");
			break;
		}
		if (c != 1 && c != 2 && c != 3 && c != 4 && c != 0) {
			printf("wrong command\n");
			continue;
		}
		printf("give two numbers:>");
		scanf("%d%d", &x, %y);
		printf("%d", (*JSQ[c])(x, y));
		break;
	} while (1);
	
	return 0;
}

