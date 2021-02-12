#include <stdio.h>

int solution(int X,int A[], int N){
	int i,checkA[X];
	int sum = 0, total;
	
	total = X*(X+1)>>1;   // take total sum of sorted path
		
	for(i=0;i<N;i++)	  // initiliaze 0 for not visited leaves
		checkA[i] = 0;
	
	for(i=0;i<N;i++){		
		if(A[i] <= X){	  
			if(checkA[A[i]-1] == 0){ // if A[i] == 3, checkA[3-1] = 3 ==> if not visited ==>visit
				checkA[A[i]-1] = 1;
				sum += A[i];     // ==>take sum of visited leaves to compare with total
			}
		}
		if(sum == total)
			break;
	}
	
	if(N==1 && A[0]<X)
		return -1;
	if(sum != total)	
		return -1;
	return i;
	
}

int main(){
	int A[] = {1,3,1,4,2,3,5,4};
	printf("%d\n", solution(5,A,8));
	return 0;	
}
