#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//int main()
//{
//	char arr1[] = "xyb";
//	char arr2[] = "###########";
//	//             xyb\0  ######
//	strcpy(arr2, arr1); //字符串拷贝
//	printf("%s\n", arr2);  //%s字符串结束标识为\0
//	return 0;
//}


//memset 内存设置
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);  //替换前五个字符为*
//	printf("%s\n", arr);
//	return 0;
//}


//用函数实现两个数交换
//形参实例化之后其实相当于实参的一份临时拷贝，函数形参和实参分别占用不同的内存块，对形参的修改不会影响实参！！！
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

//交换两个数
//void swap1(int* x, int* y)    // 形参
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
//	//int* pa = &a; //j将a的地址存放在指针变量pa中
//	//*pa = 20;  //解引用操作符
//	int b = 20;
//	printf("%d,%d\n", a, b);   //函数的实参可以是常量、变量、表达式、函数等。
//	swap1(&a, &b);
//	printf("%d,%d\n", a, b);
//	return 0;
//}


//用函数判断一个数是否为素数

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





//用函数判断1000-2000之间闰年
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


//用函数进行二分查找

//int bit_search(int arr[], int k, int sz)
//{
//	int left=0;
//	int right = sz - 1;
//	
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;    //中间元素的下标
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
//	int ret=bit_search(arr, k, sz); //arr传递过去的是首元素的地址
//	if (ret != 1)
//		printf("找到了，下标是：%d\n",ret );
//	else
//	{
//		printf("找不到啊！\n");
//	}
//	return 0;
//}

//void Add(int* p)
//{
//	(*p)++;   //++有优先级高于指针，故需要加括号
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);     //传递的是地址，故形参可以改变实参
//	printf("num=%d \n", num);
//	Add(&num);
//	printf("num=%d \n", num);
//	Add(&num);
//	printf("num=%d \n", num);
//	return 0;
//}




//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));      //printf函数返回值为字符的个数
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


//递归会栈溢出，函数调用在栈区（局部变量，形参）中申请空间

//int main()
//{
//	printf("hello\n");
//	main();
//	return 0;
//}

//输入1234，打印1 2 3 4 

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
//	//递归
//	printf(num);
//	return 0;
//}




//不设置临时变量，用函数求字符串长度
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


//递归求n!

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





//斐波那契数列  
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
思路：

for(i=31;i>=1;i--)
printf("%d ",（n >> i） & 1 )可以获取每一位
求一个数在内存存放中1的个数，按位（n >> 1） & 1 == 1
用函数，形参用unsighted接收
n=n&(n-1);
count++;

*/
//用函数，形参用unsighted接收
//




//打印指定的chengfab
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

























