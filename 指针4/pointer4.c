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
//	//��Ҫһ�����飬�Դ��4�������ĵ�ַ��������ָ�������
//	int (*pa[4])(int, int) = { Add,Sub,Mul,Div };
//	int i = 0;
//	for (i = 0; i < 4; i++) {
//		printf("%d\n", (*pa[i])(2, 3));
//	}
//	return 0;
//}

char* my_strcpy(char* dest, const char* src) {

}
int main() {
	char* (*ps)(char*, const char*) = my_strcpy;
	char* (*ps[4])(char*, const char*) = { my_strcpy };
	return 0;
}
