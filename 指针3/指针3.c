//���������ָ�����������ָ��
#include <stdio.h>
//void test(int arr[2][3]);
//void test(int arr[][3]);
//void test1(int* arr); //����ģ����ε���arr��һ��һά����ĵ�ַ��������ָ�벻ƥ��
//void test2(int**  arr); //����ģ���Ԫ�صĵ�ַ�ǵ�һ�еõ�ַ����һ�еõ�ַ��һ������ĵ�ַ��һ������ĵ�ַ���ܷ��ڶ���ָ�������ָ���Ǵ��һ��ָ������ĵ�ַ��
//void test5(int (*arr)[3]);
//int main() {
//	int arr[2][3] = { 0 };
//
//	return 0;
//}
int Add(int x, int y) {//&�������ͺ��������Ǻ����ĵ�ַ
	int z;
	z = x + y;
	return z;
}
int main() {
	int (*pa)(int, int) = Add;//����ָ��  ��ָ������ָ�룬������Ǻ����ĵ�ַ�������ĵ�ַ�Ǵ����������ڴ�����Ŀռ���
	printf("%d", (* pa)(2, 3));
	return 0;
}
