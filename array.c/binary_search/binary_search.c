/*
	嘘仙 : 襲惟 熱嬢彰 C情嬢 express
	凪戚走 : 444
	因採廃 劾促 : 2023-02-10
	爽薦 : 戚遭貼事
*/
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 16
#include<stdio.h>
int binary_search(int list[], int n, int key);
int main(void) {

	int key;
	int grade[SIZE] = { 2, 6, 11, 13, 18, 20, 22, 27, 29, 30, 34, 38, 41, 42, 45, 47 };

	printf("貼事拝 葵聖 脊径馬室推:");
	scanf("%d", &key);
	printf("貼事 衣引 = %d\n", binary_search(grade, SIZE, key));
	return 0;
}
int binary_search(int list[], int n, int key) {
	int low, middle, high;

	low = 0; 
	high = n - 1;

	while (low <= high) {
		printf("[%d %d]\n", low, high);
		middle = (low + high) / 2;
		if (key == list[middle]) {
			return middle; 
		}
		else if (key > list[middle]) {
			low = middle + 1;
		}
		else {
			high = middle - 1;
		}
	}
	return -1; // 葵戚 赤澗走 蒸澗走 左形檎 置社廃 2税 n腰精 宜焼亜醤 掬, 益軒壱 蒸生檎 -1鋼発 食奄辞澗 置社 4腰 宜焼亜さささささぞぞ6ぞ6
}