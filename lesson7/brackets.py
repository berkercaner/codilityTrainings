def solution(S):

	if len(S) == 0:
		return 1
		
	stack = []
	pairDict = {'(': ')', '{': '}', '[': ']'}
	
	for c in S:
		if c == '(' or c == '[' or c == '{':
			stack.append(c)
		else:
			if len(stack) == 0:
				return 0
			lastOpened = stack.pop()
			if pairDict[lastOpened] != c:
				return 0
				
	if len(stack) != 0:
		return 0
		
	return 1
