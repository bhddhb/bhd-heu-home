#include <stdio.h>
#include <stdlib.h>

void printPalindromes(int n) {
    int i, j;
    int m;
    for (i = 0; i <= n; i++) {
        // 将数字转换为字符串
        char numStr[10];
        sprintf(numStr, "%d", i);

        // 反转字符串
        int len = strlen(numStr);
        char reversedStr[len + 1];
        for (j = len - 1; j >= 0; j--)
            reversedStr[len - j - 1] = numStr[j];

        // 判断是否为回文数
        if (strcmp(numStr, reversedStr) == 0) {
            printf("%d,", i);
            m++;
            // 每行输出 10 个回文数后换行
            if (m % 10 == 0)
            {
                printf("\n");
                printf("\n");
            }
        }
    }
}

int main() {
    int n;

    scanf("%d", &n);

    printPalindromes(n);

    return 0;
}