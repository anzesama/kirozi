#define _CRE_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i = 0;

	while (i <=100){
		
		
		if (i%2 ==0){
			printf("%d������\n",i);
		}
		else{
			printf("%d����\n",i);
		}
		i++;
	}
	return 0;
}