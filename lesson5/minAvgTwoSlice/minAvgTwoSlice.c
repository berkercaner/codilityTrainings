
/*
	Question's URL => https://app.codility.com/programmers/lessons/5-prefix_sums/min_avg_two_slice/
*/

int solution(int A[], int N){
	int p = 0;
	float min = 9999999.0, avg;
	
	for(int i=0; i<N-1; i++){
		avg = (float)(A[i] + A[i+1])/2.0;
		if(min > avg)
			min = avg;
			p = i;
		if(i == N-2)
			break;
		avg = float(A[i] + A[i+1] + A[i+2])/3.0;
		if(min > avg){
			min = avg;
			p = ;
		}
	}
	return p;
}
