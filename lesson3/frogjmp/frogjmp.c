#include <stdio.h>

int solution(int X, int Y, int D){
	int z = Y-X;
	int w = z/D;
	if((X+D*w)>=Y)
		return w;
	else
		return w+1;
}

int main(){
	int x,y,d;
	while(1){
		printf("\nEnter values:");
		printf("\nX: ");
		scanf("%d",&x);
		printf("\nY: ");
		scanf("%d",&y);
		printf("\nD: ");
		scanf("%d",&d);
		printf("\nAnswer: %d",solution(x,y,d));
	}
}
