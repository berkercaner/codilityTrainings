/*
	Question's url https://app.codility.com/programmers/lessons/5-prefix_sums/count_div/
*/
int solution(int A, int B, int K){
	if((A%K != 0) && (B%K != 0))
		return (B-A)/K;
	return (B-A)/K +1;
}
