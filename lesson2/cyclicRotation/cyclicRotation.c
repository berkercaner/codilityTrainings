#include <stdio.h>
#include <stdlib.h>
struct Results{
	int* A;
	int N; // length
};

struct Results Solution(int A[], int N, int K){ // K means how many times will be shifted
	struct Results temp;
	int counter;
	int i;
	int minShift;
	
	
	temp.A = (int *) malloc(sizeof(int)*N);
	temp.N = N;
	
	for(counter = 0; counter < N; counter++){
		minShift = K % N;
		i = counter;
		for(minShift; minShift > 0; minShift--){
			if(i == N-1)
				i = 0;
			else
				i++;			
		}
		temp.A[i] = A[counter];
	}
	
	return temp;
}

int main(){
	int A[] = {1,2,3,4};
	struct Results main = Solution(A,4,9);
	for(int i=0;i<4;i++)
		printf(" %d ",main.A[i]);
		
	return 0;
}
