#include <stdio.h>
//void test(int arr[])
//{
//	int sz = 0;
//	sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//
//}
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//	return 0;
//}


//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//	return 0;
//}

//int main()
//{
//	const char* pc = "abcdef";   //"abcdef\0"为常量字符串,本质是把字符串首字符的地址放到pc里
//	printf("%c\n", pc);
//	return 0;
//}

//void main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* p1 = "abcdef"; 
//	char* p2 = "abcdef";  //常量字符串，只有一个地址,p1,p2都存储该地址，但p1，p2地址不同
//	char**pp1=&p1;
//    char**pp2=&p2;
//    printf("%p\n", arr1);
//	printf("%p\n", arr2);
//	printf("%p\n", p1);
//	printf("%p\n", p2);
//    printf("%p\n", pp1);
//    printf("%p\n", pp2);
//}

//void main()
//{
//	int a = 1, b = 2, c = 3, d = 4;
//	int* arr[4] = { &a,&b,&c,&d };
//	int i = 0;
//	for (i = 0; i < 4; i++) {
//		printf("%d\n", *(arr[i]));
//	}
//}

void main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 2,3,4,5,6 };
	int arr3[] = { 3,4,5,6,7 };
	int* parr[] = { arr1,arr2,arr3 };
	int i = 0, j = 0;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 5; j++) {
			printf("%d", *(parr[i] + j));
		}
		printf("\n");
	}
}