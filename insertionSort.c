#include<stdio.h>
#include<stdlib.h>

struct arrData {
    int numbers[100];
    int count;
};

struct arrData inputArray();

int main(){
	struct arrData arr;
	int i, j, pos, temp;

	arr = inputArray();
	for(i = 1; i < arr.count; i++){
		pos = i;
		j = i - 1;
		while(j > -1 && arr.numbers[j] >= arr.numbers[pos]){
			temp = arr.numbers[pos];
			arr.numbers[pos] = arr.numbers[j];
			arr.numbers[j] = temp;
			pos = j;
			j = j - 1;
		}
	}
	for(i = 0; i < arr.count; i++){
		printf("%d ", arr.numbers[i]);
	}
	printf(" \n");	
}

struct arrData inputArray(){
	struct arrData arr;
	arr.count = 0;
	printf("Enter array: \n");
	do{
		scanf("%d", &arr.numbers[arr.count++]);
	}while(getchar() != '\n' &&  arr.count < 100);

	arr.numbers[arr.count];
	return arr;
}
