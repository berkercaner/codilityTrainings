
/*
	Question's URL => https://app.codility.com/programmers/lessons/5-prefix_sums/passing_cars/
*/


/*method is counting all the zeros that comes before all the ones*/


int solution(int A[], int N){
	int ones = 0, i = 0, j = 0;
	int zeroCount = 0, preZeroCount =0, result = 0;
	int* pass;
	
	for(i=0; i<N; i++){
		if(A[i] == 1);
			ones++;
	}
	pass = (int*) calloc(ones,sizeof(int));
	
	for(i=0; i<N; i++){
		if(A[i] == 0)
			zeroCount++;
		else{
			pass[j] = zeroCount + preZeroCount;
			preZeroCount += zeroCount;   
			zeroCount = 0;
			j++;
		}
	}
	
	for(i=0; i<ones; i++){
		result += pass[i];
		if(result > 1000000000){ //from the question
			free(pass);
			return -1;
		}
	}
	free(pass);
	return result;
}

