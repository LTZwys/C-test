#include <stdio.h>
void print1(int arr[2][2], int x, int y){
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++) {
		for (j = 0; j < y; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
void print2(int (*p)[2], int x, int y) {//ָ��arr��һ��
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++) { //P+I�����õõ����Ƕ�ά�����е�i�еĵ�һά��������Ԫ��
			                      //������j���������е�j���ĵ�ַ��Ȼ���ٽ����õõ���j����ֵ
			printf("%d ",*(*(p + i) + j));
			printf("%d ", (*(p + i))[j]);
//**IMPORTANT  arr[i]==*(arr+i)==*(p+i)==p[i]
		}
		printf("\n");
	}
}
int main() {
	//����ָ��
	//int arr[3] = { 1,2,3 };
	//int (*p1)[3] = &arr;//p1��������ָ�룬�������ĵ�ַ
	//int (*parr3[10])[5];//��һ�����飬ÿ��Ԫ����һ������ָ�룬������ָ��ָ���������5��Ԫ�أ�ÿ��Ԫ����int
	//char* arr[5] = {NULL,NULL,NULL,NULL,NULL};
	//char* (*pa)[5] = &arr;

	int arr[2][2] = { {1,2},{3,4} };
	print1(arr, 2, 2);
	print2(arr, 2, 2);
	
	


















	return 0;

}