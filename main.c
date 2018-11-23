#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

int find_max(const int * pointer, const int counter) {


	int max = *pointer;

	for (int i = 1; i < counter; i++) //sifir indisli oge'yi zaten max'a atadık.
		if (*(pointer + i ) > max)
			max = *(pointer + i);

	return max;
}


int main() {

	int n = 0;
	char input_line[10000];

	int scanned = 0;
	char type_str[10000];
	int type_int = 0;
	char value_str[10000];
	int value_int = 0;

	int ones = 0;
	int twos = 0;

//	printf("N giriniz:\n");
	scanf("%d", &n); 
	getchar();     //scanf buffer'inda kalan newline'i almak icin


	int* sequence = (int *)malloc((n * sizeof(int)));
	if (sequence == NULL) {
		printf("No space allocated.");
	}
	int* ptr = sequence;


	for (int i = 0; i < n; i++) {
  
		fgets(input_line, 100, stdin);
		scanned = sscanf(input_line, "%s %s", type_str, value_str);

		type_int = atoi(type_str);
		if (scanned == 2) {
			value_int = atoi(value_str);
		}

		switch (type_int){
		case 1:
			*ptr = value_int;
			ptr = ptr + 1;
			++ones;
			break;
		case 2:
			ptr = ptr - 1;
			++twos;
			break;
		case 3:
			printf("%d\n", find_max(sequence,ones-twos));
			break;
		}

  }//for'un

}
