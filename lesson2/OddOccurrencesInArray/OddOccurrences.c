/*
 	Question's URL => https://app.codility.com/programmers/lessons/2-arrays/odd_occurrences_in_array/
*/
int solution (int A[],int N){
	int unpaired = A[0];	
	for(int i = 1; i < N; i++){
		unpaired ^= A[i];	//taking xor of all elements will result the different one ==> 1^3^4^3^1 = 4^0^0 = 4
	}
	return unpaired;
}

