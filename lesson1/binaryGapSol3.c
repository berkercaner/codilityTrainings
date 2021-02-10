#include <stdio.h>



int solution(int N){
	int countGap = 0;
	int initialGap = -1;
	while(N % 2 == 0)
		N /= 2;
	while(N > 0){
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
