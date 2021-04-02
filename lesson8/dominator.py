'''
	Question's URL => https://app.codility.com/programmers/lessons/8-leader/dominator/
'''
def getKey(val,dic):
	for key, value in dic.items():
		if value == val:
			return key

def solution(A):
	if len(A) == 0:
		return -1
	elif len(A) == 1:
		return 0
	
	stack = []
	mydict = {}
	occured = 0
	N = len(A)
	for i in range(N):
		mydict[i] = A[i]
	
	A.sort()
	holdLeader = A[N//2]
	count = 0
	for i in range(N):
		if A[i] == holdLeader:
			count += 1
	if count > N//2:
		index = getKey(holdLeader,mydict)
		return index
	return -1
