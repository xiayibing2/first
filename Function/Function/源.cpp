#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//int main()
//{
//	char arr1[] = "xyb";
//	char arr2[] = "###########";
//	//             xyb\0  ######
//	strcpy(arr2, arr1); //�ַ�������
//	printf("%s\n", arr2);  //%s�ַ���������ʶΪ\0
//	return 0;
//}


//memset �ڴ�����
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);  //�滻ǰ����ַ�Ϊ*
//	printf("%s\n", arr);
//	return 0;
//}


//�ú���ʵ������������
//�β�ʵ����֮����ʵ�൱��ʵ�ε�һ����ʱ�����������βκ�ʵ�ηֱ�ռ�ò�ͬ���ڴ�飬���βε��޸Ĳ���Ӱ��ʵ�Σ�����
//void swap(int x, int y)
//{
//	int temp = 0;
//	temp = x;
//	x = y;
//	y = temp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//printf("%d,%d\n", a, b);
//	swap(a, b);
//	printf("%d,%d\n", a, b);
//	return 0;
//}

//����������
//void swap1(int* x, int* y)    // �β�
//{
//	int temp = 0;
//	temp = *x;
//	*x = *y;
//	*y = temp;
//}
//
//int main()
//{
//	int a = 10;
//	//int* pa = &a; //j��a�ĵ�ַ�����ָ�����pa��
//	//*pa = 20;  //�����ò�����
//	int b = 20;
//	printf("%d,%d\n", a, b);   //������ʵ�ο����ǳ��������������ʽ�������ȡ�
//	swap1(&a, &b);
//	printf("%d,%d\n", a, b);
//	return 0;
//}


//�ú����ж�һ�����Ƿ�Ϊ����

//int is_prime(int j)
//{
//	int k = 0;
//	for (k = 2; k < j; k++)
//	{
//		if (j % k == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int i;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}





//�ú����ж�1000-2000֮������
//int is_leap_year(int y)
//{
//	if (y % 4 == 0 && y % 100 == 0 || y % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year) == 1)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}


//�ú������ж��ֲ���

//int bit_search(int arr[], int k, int sz)
//{
//	int left=0;
//	int right = sz - 1;
//	
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;    //�м�Ԫ�ص��±�
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 5;
//	int sz;
//	sz = sizeof(arr) / sizeof(arr[0]);
//	int ret=bit_search(arr, k, sz); //arr���ݹ�ȥ������Ԫ�صĵ�ַ
//	if (ret != 1)
//		printf("�ҵ��ˣ��±��ǣ�%d\n",ret );
//	else
//	{
//		printf("�Ҳ�������\n");
//	}
//	return 0;
//}

//void Add(int* p)
//{
//	(*p)++;   //++�����ȼ�����ָ�룬����Ҫ������
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);     //���ݵ��ǵ�ַ�����βο��Ըı�ʵ��
//	printf("num=%d \n", num);
//	Add(&num);
//	printf("num=%d \n", num);
//	Add(&num);
//	printf("num=%d \n", num);
//	return 0;
//}




//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));      //printf��������ֵΪ�ַ��ĸ���
//	                                  // 2
//}



//#include "add.h"
//int main()
//{
//	int a = 1;
//	int b = 1;
//	int sum = 0;
//	sum = Add(a, b);
//	printf("%d\n", sum);
//}


//�ݹ��ջ���������������ջ�����ֲ��������βΣ�������ռ�

//int main()
//{
//	printf("hello\n");
//	main();
//	return 0;
//}

//����1234����ӡ1 2 3 4 

//void printf(int n)
//{
//	if (n > 9)
//	{
//		printf(n / 10);
//	}
//	printf("%d ", n%10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	//�ݹ�
//	printf(num);
//	return 0;
//}




//��������ʱ�������ú������ַ�������
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//	{
//		return 0;
//	}
//}
//
//
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("len=%d\n", len);
//	return 0;
//}


//�ݹ���n!

//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//	   return n* Fac(n - 1);
//}
//
//
//int main()
//{
//	
//	int n = 1;
//	int ret = 1;
//	scanf("%d", &n);
//	ret = Fac(n);
//	printf("%d\n", ret);
//	return 0;
//}





//쳲���������  
//1 1 2 3 5 8 13 21 34 55 .....

//int count = 0;
//int Fib(int n)
//{
//	if (n == 3)
//	{
//		count++;
//	}
//	if (n <= 2)
//		return 1;
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}

//
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("%d\n", ret);
//	//printf("%d\n", count);
//}


/*
˼·��

for(i=31;i>=1;i--)
printf("%d ",��n >> i�� & 1 )���Ի�ȡÿһλ
��һ�������ڴ�����1�ĸ�������λ��n >> 1�� & 1 == 1
�ú������β���unsighted����
n=n&(n-1);
count++;

*/
//�ú������β���unsighted����
//




//��ӡָ����chengfab
//
//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%3d*%d=%-3d ", i, j, i * j);
//		}
//			printf("\n");
//	}
//}
//
//
//#include<stdlib.h>
//int main()
//{
//	int n = 1;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//	system("pause");
//}



//

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	for (i = 0; i <1; i++)
	{
		printf("arr[%d]====%p\n",i,&arr[i]);
		
	}
	return 0;
}

























