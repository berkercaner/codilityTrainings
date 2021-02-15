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
/* ***short example***
	A[] = {0,0,1,0,1} ==> expected 5
	==> first for loop ==> pass[] = {0,0}
	==> second for loop
		=>i=0 -> zeroCount = 1 - preZeroCount = 0
		=>i=1 -> zeroCount = 2 - preZeroCount = 0
		=>i=2 -> pass[0] = zeroCount + preZeroCount = 2
			  -> preZeroCount = zeroCount + preZeroCount = 2
			  -> zeroCount = 0;
		=>i=3 -> zeroCount = 1 - preZeroCount = 2
		=>i=4 -> pass[i] = zeroCount + preZeroCount = 3
			  -> preZeroCount = zeroCount + preZeroCount = 3
			  ->zeroCount = 0
	==> pass[] = {2,3}
	==>third for loop
			  ->result = result + pass[0] = 2
			  ->result = result + pass[1] = 5
	==>result = 5
*/
