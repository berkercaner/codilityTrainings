#include <stdio.h>

/*
	Question's URL => https://app.codility.com/programmers/lessons/1-iterations/binary_gap/
*/

int solution(int N){
	int countGap = 0;
	int initialGap = -1;
	while(N % 2 == 0) // skip first 0s
		N /= 2;
	while(N > 0){	// count 0s without taking it to array or linked listed
		if(N % 2 == 1){
			if(initialGap < countGap)
				initialGap = countGap;
			countGap = 0;
		}
		else
			countGap++;		
		N /= 2;
	}
	return initialGap;
}

int main(){
	int value;
	while(1){
		printf("\nEnter :  ");
	 	scanf("%d",&value);
	 	printf("\n%d",solution(value));	
		
	}
	return 0;
}
