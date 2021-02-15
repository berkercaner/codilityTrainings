
struct Results solution(int N, int A[], int M){
	struct Results result;
	int holdIdx = 0, i;
	int maxCounter = 0, holdMax = 0;
	
	result.C = (int*) calloc(N,sizeof(int));
	result.L = N;
	
	for(i=0; i<M; i++){
		if(A[i]<=N){
			if(result.C[A[i]-1] < holdMax)
				result.C[A[i]-1] = holdMax;
			result.C[A[i]-1]++;
			if(result.C[A[i]-1] > maxCounter)
				maxCounter = result.C[A[i]-1];
		}
		else{
			holdIdx = i;
			holdMax = maxCounter;
		}
	}
	for(i=0; i<N; i++)
		result.C[i] = holdMax;
		
	for(i=holdIdx; i<M; i++)
		result.C[A[i]-1]++;
	
	return result;
}
