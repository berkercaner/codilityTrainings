'''
 Question's URL => https://app.codility.com/programmers/lessons/7-stacks_and_queues/brackets/
'''

def solution(S):
	#condition from the question
	if len(S) == 0:
		return 1
		
	stack = []
	#creating dictionary for comperison
	pairDict = {'(': ')', '{': '}', '[': ']'}
	
	for c in S:
		#creating array with opening brackets
		if c == '(' or c == '[' or c == '{':
			stack.append(c)
		else:
			#if there is nothing to pop when closing brackets occured, it's not a nested array
			if len(stack) == 0:
				return 0
			#pop the last element
			lastOpened = stack.pop()
			#if it's not paired with closed bracket, it's not a nested array 
			if pairDict[lastOpened] != c:
				return 0
	#if there are still nonclosed brackets, it's not a nested array
	if len(stack) != 0:
		return 0
	
	#everything fine if it end up here
	return 1
