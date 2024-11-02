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
void print2(int (*p)[2], int x, int y) {//指向arr第一行
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++) { //P+I解引用得到的是二维数组中第i行的的一维数组所有元素
			                      //，加上j则是这行中第j个的地址，然后再解引用得到第j个的值
			printf("%d ",*(*(p + i) + j));
			printf("%d ", (*(p + i))[j]);
//**IMPORTANT  arr[i]==*(arr+i)==*(p+i)==p[i]
		}
		printf("\n");
	}
}
int main() {
	//数组指针
	//int arr[3] = { 1,2,3 };
	//int (*p1)[3] = &arr;//p1就是数组指针，存放数组的地址
	//int (*parr3[10])[5];//是一个数组，每个元素是一个数组指针，该数组指针指向的数组有5个元素，每个元素是int
	//char* arr[5] = {NULL,NULL,NULL,NULL,NULL};
	//char* (*pa)[5] = &arr;

	int arr[2][2] = { {1,2},{3,4} };
	print1(arr, 2, 2);
	print2(arr, 2, 2);
	
	


















	return 0;

}