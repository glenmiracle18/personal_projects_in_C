#include <stdio.h>

int main(void){
	int disp[2][3];
	int i, j;

	/* assigning the array to the input */

	for (i = 0; i < 2; i++){
		for( j = 0; j < 3; j++) {

			printf("Please input a number to be displayed: [%d][%d]: ", i, j);
			scanf("%d", &disp[i][j]);
		}
	}
	/* display an array of elements */
	
	printf("Two dimensiona array elements:\n");
	for ( i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++){
			printf("%d ", disp[i][j]);
			if (j==2){
				printf("\n");
			}
		}
	}
	return 0;
}

