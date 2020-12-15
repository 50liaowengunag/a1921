#include"paixu.h"
#include<stdio.h>
#include<stdlib.h>
#define N 20

int main() {
        int a[N], i;
        srand(0);

        for (i=0; i<N; i++)
                a[i] = rand() % 100;
        printf("初始数据为: ");

        for (i=0; i<N; i++)
                printf("%d ", a[i]);
        printf("\n");
        bubble1(a, N);
// 	bubble2(a, N);
//	bubble3(a, N);
	printf("排序后数据：");
	for(i=0; i<N; i++) printf("%d ",a[i]);
	printf("\n");


	int b[N],j;
	srand(0);
	for(j=0; j<N; j++)
		b[j] = rand() % 100;
	printf("初始数据：");
	for(j=0; j<N; j++)
		printf("%d ",b[j]);
	printf("\n");
	InsertSort(b, N);
//	SelectSort(b, N);
	printf("排序后数据：");
	for (j=0; j<N; j++)
		printf("%d ",b[j]);
	printf("\n");


	int c[N], k;
        srand(0);
	for (k=0; k<N; k++);
		c[k] = rand() % 100;
	printf("初始数据为：");
	for (k=0; k<N; k++)
		printf("%d ", c[k]);
	printf("\n");
	QuickSort(c, N);
//	MergeSort(c, N);
	printf("排序后数据：");
	for(k=0; k<N; k++)
		printf("%d ",c[k]);
	printf("\n");
}
