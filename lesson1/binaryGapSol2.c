#include <stdio.h>
#include <stdlib.h>
/*
	Question's URL => https://app.codility.com/programmers/lessons/1-iterations/binary_gap/
*/
int solution(int N){
	int tempN = N;
	int j = 0; int i = 0; int k;
	int initialGap = -1;
	int countGap = 0;
	
	
	while(tempN > 0){  // count digits
		tempN /= 2;
		i++;
	}
	
	int *array = (int *) malloc(sizeof(int)*(i-1)); // array is created with the element number of digit count
	i = 0;
	
	while(N > 0){ // dec to bin
		array[i] = N % 2;
		N /= 2;
		i++;
	}
	
	while(array[j] == 0) // skip the first 0s
		j++;
		
	for(k = j; k < i; k++){
		if(array[k] == 1){ 		//stop counting if there is 1
			if(initialGap < countGap)
				initialGap = countGap;
			countGap = 0;
		}
		else{					//start counting if there is 0
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
