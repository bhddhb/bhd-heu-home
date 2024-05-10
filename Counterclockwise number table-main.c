#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define maxsize 20                  //定义数表不超过20阶

void print_numble(int n)                //逆时针数表函数
{
	int arr[maxsize][maxsize];
	int sr = 0;                  //起始行
	int endr = n - 1;            //终止行
	int sc = 0;                  //起始列
	int endc = n - 1;            //终止列
	int m = 1;         //从1开始，填入数组
	while (sr <= endr && sc <= endc)
	{
		//从下到上
		
		for (int i = endr ; i >= sr; i--)
		{
			arr[i][endc] = m++;
		}
		endc--;
		
		//从右到左
		for (int i = endc ; i >= sc; i--)
		{

			arr[sr][i] = m++;
		}
		sr++;
		
		//从上到下
		for (int i = sr  ; i <= endr; i++)
		{
			arr[i][sc] = m++;
		}
		sc++;
		
		//从左到右
		for (int i = sc  ; i <= endc; i++)
		{
			arr[endr][i] = m++;
		 }
		endr--;
	}
	for (int i = 0; i < n ; i++)
	{
		for (int s = 0; s < n ; s++)
		{ 
			printf("%4d", arr[i][s]);              //打印数组
		}
		printf("\n");
	}
}



int main()
{
	int n = 0;
	printf("请输入阶数：");
	scanf("%d", &n);
	printf("%d阶逆时针数表为：\n", n);
	print_numble(n);
	return 0;
}
