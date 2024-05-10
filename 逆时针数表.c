#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define maxsize 20                  //������������20��

void print_numble(int n)                //��ʱ��������
{
	int arr[maxsize][maxsize];
	int sr = 0;                  //��ʼ��
	int endr = n - 1;            //��ֹ��
	int sc = 0;                  //��ʼ��
	int endc = n - 1;            //��ֹ��
	int m = 1;         //��1��ʼ����������
	while (sr <= endr && sc <= endc)
	{
		//���µ���
		
		for (int i = endr ; i >= sr; i--)
		{
			arr[i][endc] = m++;
		}
		endc--;
		
		//���ҵ���
		for (int i = endc ; i >= sc; i--)
		{

			arr[sr][i] = m++;
		}
		sr++;
		
		//���ϵ���
		for (int i = sr  ; i <= endr; i++)
		{
			arr[i][sc] = m++;
		}
		sc++;
		
		//������
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
			printf("%4d", arr[i][s]);              //��ӡ����
		}
		printf("\n");
	}
}



int main()
{
	int n = 0;
	printf("�����������");
	scanf("%d", &n);
	printf("%d����ʱ������Ϊ��\n", n);
	print_numble(n);
	return 0;
}