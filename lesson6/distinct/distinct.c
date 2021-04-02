
/*
	Question's URL ==> https://app.codility.com/programmers/lessons/6-sorting/distinct/
*/

#define maxValue 1000000  // 1000000 is the max value of an element of the array A

struct checkElement{
	int* checkNeg;
	int* checkPos;
}checkElement;

int solution(int A[], int N){
	int negCount = 0, posCount = 0, isSame = A[0];
	checkElement.checkNeg = (int*) calloc(maxValue,sizeof(int));
	checkElement.checkPos = (int*) calloc(maxValue,sizeof(int));
	
	for(int i=0; i<N; i++){
		if(A[i] < 0){
			if(checkElement.checkNeg[-A[i]] == 0)
				checkElement.checkNeg[-A[i]] = 1;
		}
		else{
			if(checkElement.checkPos[A[i]] == 0)
				checkElement.checkPos[A[i]] = 1;
		}
	}	
	for(int i=0; i<maxValue; i++){
		if(checkElement.checkNeg[i] == 1)
			negCount++;
		if(checkElement.checkPos[i] == 1)
			posCount++;
	}
	free(checkElement.checkPos);
	free(checkElement.checkNeg);
	return negCount+posCount;
}
