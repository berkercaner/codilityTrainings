/*
	Question's URL => https://app.codility.com/programmers/lessons/3-time_complexity/frog_jmp/
*/

int solution(int X, int Y, int D){
	int z = Y-X;   // taking distance
	int w = z/D;   // calculating jump
	if((X+D*w)>=Y) // we are dealing with integers so it might be w+1
		return w;
	else
		return w+1;
}

