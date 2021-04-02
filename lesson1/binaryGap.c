#include <stdlib.h>
#include <stdio.h>

/*
	Question's URL => https://app.codility.com/programmers/lessons/1-iterations/binary_gap/
*/

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
	
	/* first node is created with the value of the first digit */
	mainNode->value = N%2; 
	mainNode->next = NULL;
	hold = mainNode;
	N/=2;
	
	/* next nodes will be created until the binary representation of the value is completed */
	while(N>0){
		tmp = (struct node*)malloc(sizeof(struct node));
		tmp->value = N%2;
		tmp->next = NULL;
		hold->next = tmp;
		hold = hold->next;
		N/=2;
	}
	
	struct node* binNode = mainNode;
	
	while(binNode->value == 0)  // gap must be between two 1s, so that every 0s in first place should be skipped.
		binNode =  binNode->next;
	while(binNode){
		if(binNode->value == 1){   // when there is '1' stop counting
			if(initialGap < gapCount)
				initialGap = gapCount;
			gapCount = 0;
			binNode = binNode->next;
		}
		else if(binNode->value == 0){ // when there is '0' start counting
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
