struct Results solution(int A[], int N, int K){ // K means how many times will be shifted
	struct Results temp;
	int counter,i,minShift;
	
	temp.A = (int *) malloc(sizeof(int)*N);
	temp.N = N;
	
	for(counter = 0; counter < N; counter++){
		minShift = K % N;						// it's for reducing cycles of for loop
		i = counter;
		for(int j=minShift; j>0; j--){ // finding the position of the element where will be shifted
			if(i == N-1)
				i = 0;
			else
				i++;			
		}
		temp.A[i] = A[counter];
	}
	
	return temp;
}
