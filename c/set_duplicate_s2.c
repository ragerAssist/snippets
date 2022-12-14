/*
 *  set_duplicate_s2.c
 *  判断一个整数集合中是否含有重复元素
 *  (方法2) 首先使用快速排序对集合排序，再进行比较，该算法在平均情况下的时间复杂度为Θ(nlogn)
 *  注：log以2为底
 */
/* $begin set_duplicate_s2.c */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#include <stdbool.h>	/* for bool, true, false */

#define RED(S)		"\033[01;31m" S "\033[00m"
#define ERRMSG(S)	RED(S)
#define N			USHRT_MAX
#define M			100

typedef unsigned short ushrt;

static
int compar(const void *p1, const void *p2) {
	return * (const int *) p1 - * (const int *) p2;
}

int main(void) {
	double clock_ticks = 0.0;
	for (int i = 0; i < M; ++i) {
		/* 生成数据 */
		unsigned long int res;
		int *a;
		if(__builtin_umull_overflow(sizeof(int), N, &res) ||
			(a = (int *) malloc(res)) == NULL)
		{
			fprintf(stderr, ERRMSG("Out of memory!\n"));
			exit(EXIT_FAILURE);	/* 异常退出 */
		}
		
		srand(time(NULL) + i);
		for (ushrt i = 0; i < N; ++i) {
			a[i] = rand();
		}
		
		/* 进行判断 */
		bool flag;
		clock_t t = clock();
		qsort(a, N, sizeof(int), compar);
		for (ushrt i = 0; i < N - 1; ++i) {
			if (a[i] == a[i + 1]) {
				flag = true;
				goto outer;
			}
		}
		flag = false;
outer:	
		clock_ticks += clock() - (double) t;

		if (flag == true)
			printf("%d: duplicate elements.\n", i + 1);
		else
			printf("%d: no duplicate elements.\n", i + 1);

		free(a);
	}
	printf("%.0lf clicks, %.6lf seconds.\n", clock_ticks,  clock_ticks / CLOCKS_PER_SEC);
	
	exit(EXIT_SUCCESS);
}

/* $end set_duplicate_s2.c */
