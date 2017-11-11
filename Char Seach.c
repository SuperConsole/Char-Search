#include<stdio.h>

int main(void){
	char Target='7';
	int Index_Search=0;
	int Place_Number=0;
	char str[]="A0B1C2D3E4F56H7I8J9K";
	while(str[Index_Search] != Target){
		Index_Search++;
	}
	Place_Number = Index_Search;
	printf("Previous Number: %c\n",str[Place_Number-1]);
	printf("Next Number: %c",str[Place_Number+1]);
}
