#include <string.h>
/*
	Question's URL => https://app.codility.com/programmers/lessons/7-stacks_and_queues/brackets/
*/

int solution(char *S){
/*
	this solution has made without using stack operations
*/
	int openC = 0, openP = 0, openS =0;
	int N = strlen(S);
/*
	openC = curly bracket open
	openP = paranthesis opened
	openS = square bracket opened
*/
	//condition from question
	if(N == 0)
		return 1;
	//if element number isn't even number, than it's not a nested array
	if(N%2 != 0)
		return 0;
	if(S[0] == ')' || S[0] == ']' || S[0] == '}')
		return 0;
	
	for(int i=0; i<N; i++){	
		if(S[i] == '(')
			openP++;
		if(S[i] == '[')
			openS++;
		if(S[i] == '{')
			openC++;
			
		if(S[i] == ')')	
			if(S[i-1] == '[' || S[i-1] == '{' || openP == 0)
				return 0;
			else
				openP--;
		if(S[i] == ']')
			if(S[i-1] == '(' || S[i-1] == '{' || openS == 0)
				return 0;
			else
				openS--;
		if(S[i] == '}')
			if(S[i-1] == '[' || S[i-1] == '(' || openC == 0)
				return 0;
			else
				openC--;
	}	
	
	if(openC == 0 && openP == 0 && openS == 0)
		return 1;
	return 0;
	
	
}
