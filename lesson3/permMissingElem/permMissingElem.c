#include <stdio.h>
/*
	question's URL => https://app.codility.com/programmers/lessons/3-time_complexity/perm_missing_elem/
*/

int solution(int A[], int N){
	long sum = (long)(N+1)*(long)(N+2)>>1; difference of sum of 1...N+1 and sum of array elements will give the result;
	for(int i=0; i<N; i++)
		sum -= (long)A[i];
	return (int)sum;
}

int main(){
	int A[]={5,3,1,2,4,6,8,10,7};
	printf("Array: ");
	for(int i=0;i<9;i++)
		printf("%d ",A[i]);
	
	printf("\nMissing element: %d\n",solution(A,9)); 
}
