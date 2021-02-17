int cmpfunc(const void *a, const void *b){
	return(*(int*)a - *(int*)b);
}

struct border{
	int* left;
	int* right;
};

int solution(int A[], int N){
	struct border disc;
	int discCount = 0, intersect = 0;
	
	disc.left = (int*) malloc(sizeof(int)*N);
	disc.right = (int*) malloc(sizeof(int)*N);
	
	for(int i=0; i<N; i++){      // creating array of border points
		disc.left[i] = i - A[i];
		disc.right[i] = i + A[i];
	}
	
	qsort(disc.left, N, sizeof(int), cmpfunc); 
	qsort(disc.right, N, sizeof(int), cmpfunc);
	/*every left borders smaller than the same right border intersect*/
	for(j=0; j<N; j++){  
		if(disc.left[j] <= disc.right[m]){
			intersect += discCount;
			discCount++;
		}
		else{  // if right border smaller than the left, we reached one disc
			m++;  // check for the next right border
			discCount--;  // one disc cant intersect the next ones
			j--;  // check again the same left border with the next right order
				 // the foor loop will increase j so decreasing means checking for the same j
		}
		if(intersect > 10000000) // question's condition
			return -1;
	}
	return intersect;
}
