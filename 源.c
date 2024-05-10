#include <stdio.h>
#include <stdlib.h>

void printPalindromes(int n) {
    int i, j;
    int m;
    for (i = 0; i <= n; i++) {
        // ������ת��Ϊ�ַ���
        char numStr[10];
        sprintf(numStr, "%d", i);

        // ��ת�ַ���
        int len = strlen(numStr);
        char reversedStr[len + 1];
        for (j = len - 1; j >= 0; j--)
            reversedStr[len - j - 1] = numStr[j];

        // �ж��Ƿ�Ϊ������
        if (strcmp(numStr, reversedStr) == 0) {
            printf("%d,", i);
            m++;
            // ÿ����� 10 ������������
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