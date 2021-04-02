/*
Question's URL = https://app.codility.com/programmers/lessons/6-sorting/max_product_of_three/
*/

int cmpFunc(const void* a, const void* b)
	return (*(int*)a - *(int*)b);
	
int getMax(int v1, int v2)
	return v1>=v2 ? v1 : v2;
	
int solution(int A[], int N){
	int posProduct, mixProduct;
	qsort(A,N,sizeof(int),cmpFunc);
	
	maxCase1 = A[N-1]*A[N-2]*A[N-3];
	maxCase2 = A[0]*A[1]*A[N-1];
	
	return getMax(maxCase1, maxCase2);
}
