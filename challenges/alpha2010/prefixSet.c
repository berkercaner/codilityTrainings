int solution(int A[], int N){
	int* checkA = calloc(N,sizeof(int));
	int i, p = 0;
	for(i=0; i<N; i++){
		if(checkA[A[i]] == 0){
			checkA[A[i]] = 1;
			p = i;
		}
	}
	free(checkA);
	return p;
}
