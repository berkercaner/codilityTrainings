int solution(int A[], int N){
	int sum = 0, sum_Ref = 0;
	long long perm = 1, perm_Ref = 1;
	
	for(long long i=1; i<=N; i++)
		perm_Ref *=i;
	sum_Ref = N*(N+1)>>1;
	
	for(int i=0; i<N; i++){
		sum += A[i];
		perm *= (long long) A[i];
	}
	if(sum == sum_Ref && perm == perm_Ref)
		return 1;
	return 0;
}
