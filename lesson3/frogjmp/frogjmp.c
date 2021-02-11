#include <stdio.h>

int solution(int X, int Y, int D){
	int z = Y-X;
	int w = z/D;
	if((X+D*w)>=Y)
		return w;
	else
		return w+1;
}
