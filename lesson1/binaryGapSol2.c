#include <stdio.h>
#include <stdlib.h>

int solution(int N){
	int tempN = N;
	int j = 0; int i = 0; int k;
	int initialGap = -1;
	int countGap = 0;
	
	
	while(tempN > 0){
		tempN /= 2;
		i++;
	}
	
	int *array = (int *) malloc(sizeof(int)*(i-1));
	i = 0;
	
	while(N > 0){
		array[i] = N % 2;
		N /= 2;
		i++;
	}
	
	while(array[j] == 0)
		j++;
		
	for(k = j; k < i; k++){
		if(array[k] == 1){
			if(initialGap < countGap)
				initialGap = countGap;
			countGap = 0;
		}
		else{
			countGap++;
		}
	}
	free(array);
	return initialGap;	
}

int main(){
	int value;
	while(1){
		printf("\nEnter :  ");
		scanf("%d", &value);
		printf("answer: %d",solution(value));
	}
	return 0;
}
