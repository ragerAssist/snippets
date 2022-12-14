/*
 *  set_duplicate_s3.c
 *  判断一个整数集合中是否含有重复元素，假设集合中的元素都集中在某个不大的区间内
 *  (方法) 为该区间内的每一个整数都分配一个计数器，然后顺序扫描集合中的元素，统计集合中元素
 *         的出现次数，如果所有计数器的值都不超过1，则不存在重复元素，否则，存在重复元素，
 *         该算法在最坏情况下的时间复杂度为Θ(n)
 *  注：在这里，我们假设该区间为[0, R-1]
 */
/* $begin set_duplicate_s3.c */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#include <stdbool.h>	/* for bool, true, false */

#define RED(S)		"\033[01;31m" S "\033[00m"
#define ERRMSG(S)	RED(S)
#define N			USHRT_MAX
#define M			100
#define R			1000

typedef unsigned short ushrt;

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
			a[i] = rand() % R;
		}
		
		/* 进行判断 */
		bool flag;
		ushrt counter[R] = {0};
		
		clock_t t = clock();
		for (ushrt i = 0; i < N; ++i) {
			if (counter[a[i]] == 1) {
				flag = true;
				goto outer;
			}
			counter[a[i]] = 1;
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

/* $end set_duplicate_s3.c */
