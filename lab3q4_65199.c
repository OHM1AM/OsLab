#include <stdio.h>
int main() {
 	int num;
	float sum = 0;
	int count = 0;
	while(1){	
		printf("Please enter a number : ");
		scanf("%d",&num);
		if(num<=0)
			break;
		sum += num;
		count++;
	}
	printf("Sum = %.0f\n", sum);
	printf("Average = %.2f\n", (sum/count));
 	return 0;
 }
