#include <stdio.h>

#define MAX_SIZE 10  // 定义最大的数组大小

void printNumberTable(int n) {
    int table[MAX_SIZE][MAX_SIZE];  // 使用固定大小的数组

    int num = 1;
    int startRow = 0, endRow = n - 1, startCol = 0, endCol = n - 1;

    while (startRow <= endRow && startCol <= endCol) {
        // 从左到右打印一行
        for (int i = startCol; i <= endCol; i++) {
            table[startRow][i] = num++;
        }
        startRow++;

        // 从上到下打印一列
        for (int i = startRow; i <= endRow; i++) {
            table[i][endCol] = num++;
        }
        endCol--;

        // 从右到左打印一行
       
            for (int i = endCol; i >= startCol; i--) 
            {
                table[endRow][i] = num++;
            }
            endRow--;
        

        // 从下到上打印一列
        
        
            for (int i = endRow; i >= startRow; i--) 
            {
                table[i][startCol] = num++;
            }
            startCol++;
        
    }

    // 打印数表
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%4d", table[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("请输入n的值：");
    scanf_s("%d", &n);
    printf("%d阶顺时针排序的数表如下：\n", n);
    printNumberTable(n);

    return 0;
}
//以上代码通过使用循环实现了一个输入n，输出n阶顺时针排序的数表的功能。
//
//首先，在printNumberTable函数中，定义了一个二维数组table来存储数表。
//在while循环中，使用四个变量startRow、endRow、startCol和endCol来记录当前遍历的子矩阵的四个边界位置。
//同时，使用一个变量num来表示当前要填充的数的值，初始化为1。
//
//在while循环中，通过四个for循环来实现顺时针填充数表的过程：
//
//从左到右打印一行，从startCol到endCol，将数值依次填充到table[startRow][i]，然后递增num。
//从上到下打印一列，从startRow + 1到endRow，将数值依次填充到table[i][endCol]，然后递增num。
//从右到左打印一行，但需要判断是否需要执行该步骤，即startRow <= endRow。若满足条件，
//从endCol - 1到startCol，将数值依次填充到table[endRow][i]，然后递增num，同时endRow--。
//从下到上打印一列，但需要判断是否需要执行该步骤，即startCol <= endCol。若满足条件，
//从endRow - 1到startRow + 1，将数值依次填充到table[i][startCol]，然后递增num，同时startCol++。
//最后，利用两个嵌套的for循环遍历数组，将数表打印输出。
//
//在main函数中，首先读取用户输入的n的值，然后调用printNumberTable函数，将结果打印输出。
