#include <stdio.h>

int solution(int A[], int N){
	long sum = (long)(N+1)*(long)(N+2)>>1;
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
