int solution(int A, int B, int K){
	if((A%K != 0) && (B%K != 0))
		return (B-A)/K;
	return (B-A)/K +1;
}
