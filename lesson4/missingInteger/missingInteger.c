/*
	Question's url => https://app.codility.com/programmers/lessons/4-counting_elements/missing_integer/
*/

int solution(int A[], int N){
	int i, max = 0, j = 0;
	
	for(i=0; i<N; i++){
		if(A[i] > max)
			max = A[i];
		if(A[i] < 0)
			j++;
	}
	if(i == j)
		return 1;
	
	int* checkA = (int*)calloc(max,sizeof(int));
	for(i=0; i<N; i++){
		if(A[i] > 0){
			if(checkA[A[i]-1] == 0){
				checkA[A[i]-1] = 1;
			}
		}
	}
	for(i=0; i<max; i++){
		if(checkA[i] == 0)
			return i+1;
	}
	return max+1;
}
