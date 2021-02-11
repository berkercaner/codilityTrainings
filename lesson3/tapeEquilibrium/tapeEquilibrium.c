#include <stdio.h>
#include <stdlib.h>
int solution(int A[], int N){
	int total = 0, leftsum = 0, rightsum = 0;
	int min = 1000000000, diff = 0;
	
	if(N == 2)
		return abs(A[0]-A[1]);
	
	
	for(int i=0; i<N; i++)
		total += A[i];
	
	for(int i=0; i<N; i++){
		leftsum += A[i];
		rightsum = total - leftsum;
		diff = abs(leftsum-rightsum);
		if(min > diff)
			min = diff;
	}
	return min;
}

int main(){
	int A[] = {1,32,12,3,45,6,12,54,12,3,43,22,31,1,23,2,3,1,2,13,20};
	for(int i=0; i<21; i++)
		printf("%d ",A[i]);
	printf("\nAnswer: ");
	printf(" %d\n",solution(A,21));
}
