#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
void menu()
{
	printf("**********************************\n");
	printf("************  play(1)  ***********\n");
	printf("************  exit(0)  ***********\n");               //�˵�����
	printf("**********************************\n");
}

void subject_shutdown()                         //�ػ�����
{
	char input1[20];
	system("shutdown -s -t 45");                //����һ��ʱ���ػ�
	scanf_s("%s", &input1,sizeof(input1));          
again:
	if (strcmp(input1, "������") == 0)
	{
		system("shutdown -a");                //������Ӧ�ַ�����ȡ���ػ�
		printf("�ѳɹ�ȡ���ػ����˹�\n");
	}
	else
	{
		printf("��������!���ú��������ػ��ˣ���\n");
		goto again;
	}
}

void game()
{
	int guess = 0;
	int ret = rand() % 100 + 1;
	printf("�������\n");
	int i = 5;                            //�����������
	while (1)
	{
		if (i > 0)
		{
			scanf_s("%d", &guess);             //����
			if (guess < ret)                               
			{
				printf("��С��,����%d�λ���\n", i - 1);
				i--;                                                     //ÿ�β���������һ
				continue;
			}
			else if (guess > ret)
			{
				printf("�´���,����%d�λ���\n", i - 1);
				i--;
				continue;
			}
			else
			{
				printf("��ϲ�㣬�¶���\n");
				break;
			}
		}
		else
		{
			printf("û����ඣ�����ִ�йػ�����������룺��������ȡ���ػ�\n");
			subject_shutdown();
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));            //ͨ��ʱ��������������㣬��֤rand�������������������ͬ

	do
	{
		menu();
		printf("��ѡ��");
		scanf_s("%d", &input);
		switch (input)                         //ʹ��swith��䣬����ִֵ�ж�Ӧ�����
		{
		case 1:
			game();
			break;

		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}