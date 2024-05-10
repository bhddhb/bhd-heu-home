#include <stdio.h>

#define MAX_SIZE 10  // �������������С

void printNumberTable(int n) {
    int table[MAX_SIZE][MAX_SIZE];  // ʹ�ù̶���С������

    int num = 1;
    int startRow = 0, endRow = n - 1, startCol = 0, endCol = n - 1;

    while (startRow <= endRow && startCol <= endCol) {
        // �����Ҵ�ӡһ��
        for (int i = startCol; i <= endCol; i++) {
            table[startRow][i] = num++;
        }
        startRow++;

        // ���ϵ��´�ӡһ��
        for (int i = startRow; i <= endRow; i++) {
            table[i][endCol] = num++;
        }
        endCol--;

        // ���ҵ����ӡһ��
       
            for (int i = endCol; i >= startCol; i--) 
            {
                table[endRow][i] = num++;
            }
            endRow--;
        

        // ���µ��ϴ�ӡһ��
        
        
            for (int i = endRow; i >= startRow; i--) 
            {
                table[i][startCol] = num++;
            }
            startCol++;
        
    }

    // ��ӡ����
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%4d", table[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("������n��ֵ��");
    scanf_s("%d", &n);
    printf("%d��˳ʱ��������������£�\n", n);
    printNumberTable(n);

    return 0;
}
//���ϴ���ͨ��ʹ��ѭ��ʵ����һ������n�����n��˳ʱ�����������Ĺ��ܡ�
//
//���ȣ���printNumberTable�����У�������һ����ά����table���洢����
//��whileѭ���У�ʹ���ĸ�����startRow��endRow��startCol��endCol����¼��ǰ�������Ӿ�����ĸ��߽�λ�á�
//ͬʱ��ʹ��һ������num����ʾ��ǰҪ��������ֵ����ʼ��Ϊ1��
//
//��whileѭ���У�ͨ���ĸ�forѭ����ʵ��˳ʱ���������Ĺ��̣�
//
//�����Ҵ�ӡһ�У���startCol��endCol������ֵ������䵽table[startRow][i]��Ȼ�����num��
//���ϵ��´�ӡһ�У���startRow + 1��endRow������ֵ������䵽table[i][endCol]��Ȼ�����num��
//���ҵ����ӡһ�У�����Ҫ�ж��Ƿ���Ҫִ�иò��裬��startRow <= endRow��������������
//��endCol - 1��startCol������ֵ������䵽table[endRow][i]��Ȼ�����num��ͬʱendRow--��
//���µ��ϴ�ӡһ�У�����Ҫ�ж��Ƿ���Ҫִ�иò��裬��startCol <= endCol��������������
//��endRow - 1��startRow + 1������ֵ������䵽table[i][startCol]��Ȼ�����num��ͬʱstartCol++��
//�����������Ƕ�׵�forѭ���������飬�������ӡ�����
//
//��main�����У����ȶ�ȡ�û������n��ֵ��Ȼ�����printNumberTable�������������ӡ�����
