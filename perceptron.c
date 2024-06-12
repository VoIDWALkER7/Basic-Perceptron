#include <stdio.h>

int main(){

	printf("\n \t ------ NEW JOB AI ------ ");
	float p;
	float threshold = 1.5;
	
	//better salary
	float x1;
	float w1 = 0.8;

	char input;

	printf("\nDoes the Job have a better salary? ( Y or N )");
	scanf(" %c",&input);
	
	if(input == 'Y' || input == 'y'){
		x1 = 1;
	}
	else if(input == 'N' || input == 'n'){
		x1 = 0;
	}
	else{
		printf("\nINVALID INPUT");
	}


	//travel time
	float x2;
	float w2 = 0.4;
	
	printf("\nDoes the Job have a better travel time? ( Y or N )");
	scanf(" %c",&input);

	if(input == 'Y' || input == 'y'){
		x2 = 1;
	}
	else if(input == 'N' || input == 'n'){
		x2 = 0;
	}
	else{
		printf("\nINVALID INPUT");
	}

	//more interesting
	float x3;
	float w3 = 0.6;

	printf("\nIs the Job more interesting? ( Y or N )");
	scanf(" %c",&input);
	
	if(input == 'Y' || input == 'y'){
		x3 = 1;
	}
	else if(input == 'N' || input == 'n'){
		x3 = 0;
	}
	else{
		printf("\nINVALID INPUT");
	}

	//better prospects
	float x4;
	float w4 = 0.7;

	printf("\nDoes the Job have better prospects? ( Y or N )");
	scanf(" %c",&input);
	
	if(input == 'Y' || input == 'y'){
		x4 = 1;
	}
	else if(input == 'N' || input == 'n'){
		x4 = 0;
	}
	else{
		printf("\nINVALID INPUT");
	}

	//dissatisfied
	float x5;
	float w5 = 0.8;

	printf("\nAre you dissatisfied with your current job? ( Y or N )");
	scanf(" %c",&input);
	
	if(input == 'Y' || input == 'y'){
		x5 = 1;
	}
	else if(input == 'N' || input == 'n'){
		x5 = 0;
	}
	else{
		printf("\nINVALID INPUT");
	}


	p = (x1 * w1) + (x2 * w2) + (x3 * w3) + (x4 * w4) + (x5 * w5);


	if(p > threshold){
		printf("\n YES: You should apply for the new job.");

	}
	else{
		printf("\n NO: You shouldn't apply for the new job.");
	}
}
