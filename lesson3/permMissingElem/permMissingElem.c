#include <stdio.h>

int solution(int A[], int N){
	long sum = (long)(N+1)*(long)(N+2)>>1;
	for(int i=0; i<N; i++)
		sum -= (long)A[i];
	return (int)sum;
}
