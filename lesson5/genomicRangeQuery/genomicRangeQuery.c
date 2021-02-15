#include <string.h>
#include <stdlib.h>
struct prefixSum{
	int *value;
};

struct Results solution(char *S, int P[], int Q[], int M){
	struct Results result;
	struct prefixSum prefSum[3];
	result.A = (int*) malloc(sizeof(int)*M);
	result.M = M;
	int a,c,g;
	int length = strlen(S);

	for(int i=0; i<3; i++)
		prefSum[i].value = (int*) calloc(length+1,sizeof(int));
	
	for(int i=0; i<length; i++){
		a = 0, c = 0, g = 0;
		if(S[i] == 'A')
			a = 1;
		if(S[i] == 'C')
			c = 1;
		if(S[i] == 'G')
			g = 1;
			
		prefSum[0].value[i+1] = prefSum[0].value[i] + a;			
		prefSum[1].value[i+1] = prefSum[1].value[i] + c;			
		prefSum[2].value[i+1] = prefSum[2].value[i] + g;
	}
	
	for(int i=0; i<M; i++){
		if(prefSum[0].value[Q[i]+1] - prefSum[0].value[P[i]] > 0)
			result.A[i] = 1;
		else if(prefSum[1].value[Q[i]+1] - prefSum[1].value[P[i]] > 0)
			result.A[i] = 2;
		else if(prefSum[2].value[Q[i]+1] - prefSum[2].value[P[i]] > 0)
			result.A[i] = 3;
		else
			result.A[i] = 4;
	}
	return result;
}
