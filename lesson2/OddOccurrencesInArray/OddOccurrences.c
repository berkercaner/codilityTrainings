#include <stdio.h>
#include <stdlib.h>

int solution (int A[],int N){
	int unpaired = A[0];	
	for(int i = 0; i < N; i++){
		unpaired ^= A[0];	//taking xor of all elements will result the different one ==> 1^3^4^3^1 = 4^0^0 = 4
	}
	return unpaired;
}

int main(){
	int A[] = {13,1,5,1,3,4,2,5,4,2,6,3,6};
	printf("\n%d\n",solution(A,13));
	return 0;
}
