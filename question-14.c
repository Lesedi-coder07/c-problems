#include <stdio.h>

int main (void) {
	int N;
	int choices[100];
	scanf("%d", &N);
	int count = 0;
	int S;
	
	
	for (int i = 0; i < N; i++){
		scanf("%d", &choices[i]);
	}
	
	scanf("%d", &S);
		printf("Reversed List:" );
	for (int i = (N-1); i >= 0; i--){
		if (choices[i] == S) count++; 
		printf(" %d", choices[i]);
	}
	

	printf("\nSearch Count: %d", count);
	
	return 0;
}