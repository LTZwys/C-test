#include <stdio.h>


//¼ÆËãÆ÷
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
	z = x * y;
	return z;
}
int Div(int x, int y) {
	int z;
	z = x / y;
	return z;
}
void menu() {
	printf("0.Exit 1.Add 2.Sub 3.Mul 4.Div\n");
}
int main() {
	int x = 0;
	int y = 0;
	int c = 0;
	int (*JSQ[4])(int, int) = { Add,Sub,Mul,Div };
	int (*(*pJSQ)[4])(int, int) = &JSQ;
	do
	{
		menu();
		printf("choose:>");
		scanf_s("%d", &c);
		if (c == 0) {
			printf("Exit\n");
			break;
		}
		if (c != 1 && c != 2 && c != 3 && c != 4) {
			printf("wrong command\n");
			continue;
		}
		printf("give two numbers:>");
		scanf_s("%d%d", &x, &y);
		printf("%d", (*JSQ[c-1])(x, y));
		break;
	} while (1);
	return 0;
}

