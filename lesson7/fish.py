def solution(A,B):
	left = 0
	stack = [] #fish stack for moving upwards
	n  = len(A)
	for i in range(n):
		if B[i] == 1:
			stack.append(A[i])
		else:
			while len(stack) > 0: #if there is a fish moving upwards
				if stack[-1] < A[i]: #if size of moving downwards fish greater
					stack.pop() #fish in the stack will be eaten
				else:
					break
			else:
				left += 1
	
	return left + len(stack)
