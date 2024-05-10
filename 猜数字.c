#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
void menu()
{
	printf("**********************************\n");
	printf("************  play(1)  ***********\n");
	printf("************  exit(0)  ***********\n");               //菜单函数
	printf("**********************************\n");
}

void subject_shutdown()                         //关机函数
{
	char input1[20];
	system("shutdown -s -t 45");                //设置一段时间后关机
	scanf_s("%s", &input1,sizeof(input1));          
again:
	if (strcmp(input1, "我是猪") == 0)
	{
		system("shutdown -a");                //输入相应字符串后取消关机
		printf("已成功取消关机，菜狗\n");
	}
	else
	{
		printf("重新输入!不好好输入就真关机了！！\n");
		goto again;
	}
}

void game()
{
	int guess = 0;
	int ret = rand() % 100 + 1;
	printf("请猜数字\n");
	int i = 5;                            //定义输入次数
	while (1)
	{
		if (i > 0)
		{
			scanf_s("%d", &guess);             //猜数
			if (guess < ret)                               
			{
				printf("猜小了,还有%d次机会\n", i - 1);
				i--;                                                     //每次猜完后次数减一
				continue;
			}
			else if (guess > ret)
			{
				printf("猜大了,还有%d次机会\n", i - 1);
				i--;
				continue;
			}
			else
			{
				printf("恭喜你，猜对了\n");
				break;
			}
		}
		else
		{
			printf("没机会喽，即将执行关机程序，如果输入：我是猪，则取消关机\n");
			subject_shutdown();
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));            //通过时间戳定义随机数起点，保证rand函数所产生的随机数不同

	do
	{
		menu();
		printf("请选择：");
		scanf_s("%d", &input);
		switch (input)                         //使用swith语句，输入值执行对应的语句
		{
		case 1:
			game();
			break;

		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择！\n");
			break;
		}
	} while (input);
	return 0;
}