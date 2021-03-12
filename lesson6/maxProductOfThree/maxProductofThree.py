def getMax(v1,v2):
	if v1>=v2:
		return v1
	return v2

def solution(A):
	A.sort()
	N = len(A)
	maxCase1 = A[N-1]*A[N-2]*A[N-3]
	maxCase2 = A[0]*A[1]*A[N-1]
	
	result = getMax(maxCase1,maxCase2)
	return result
