#include <stdlib.h>
#include <stdio.h>



struct node{
	int value;
	struct node* next;
};

struct node* mainNode;

int decToBin(int N){
	struct node* tmp, *hold;
	int num;
	int gapCount = 0;
	int initialGap = -1;
	mainNode = (struct node*) malloc(sizeof(struct node));
	
	mainNode->value = N%2;
	mainNode->next = NULL;
	hold = mainNode;
	N/=2;
	
	while(N>0){
		tmp = (struct node*)malloc(sizeof(struct node));
		tmp->value = N%2;
		tmp->next = NULL;
		hold->next = tmp;
		hold = hold->next;
		N/=2;
	}
	
	struct node* binNode = mainNode;
	while(binNode->value == 0)
		binNode =  binNode->next;
	while(binNode){
		if(binNode->value == 1){
			if(initialGap < gapCount)
				initialGap = gapCount;
			gapCount = 0;
			binNode = binNode->next;
		}
		else if(binNode->value == 0){
			gapCount++;
			binNode = binNode->next;
		}
	}
	return initialGap;
}

int main(){
	int value;
	while(1){
		printf("Enter:  ");
		scanf("%d",&value);
		printf("\n%d\n",decToBin(value));
	}

return 0;
}
