#include<stdio.h>

int main(void){
	//宣言
	char Target='7';//自分の学生番号の下1桁
	int Index_Search=0;//これを使い検索していく
	int Place_Number=0;//Targetのstr配列に対するインデックスを格納
	char str[]="A0B1C2D3E4F56H7I8J9K";
	
	//検索処理
	while(str[Index_Search] != Target){
		Index_Search++;
	}
	
	//インデックス格納
	Place_Number = Index_Search;//Index_Searchをそのまま使ってもいい。むしろそのほうが効率的
	
	//出力
	printf("Previous Number: %c\n",str[Place_Number-1]);//Place_Number-1が前
	printf("Next Number: %c",str[Place_Number+1]);//Place_Number+1が後
}
