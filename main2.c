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
	char input_line[100];

	int scanned = 0;
	char type_str[20];
	int type_int = 0;
	char value_str[20];
	int value_int = 0;

	int ones = 0;
	int twos = 0;

	printf("N giriniz:\n");
	scanf("%d", &n); 
	getchar();     //scanf buffer'ında kalan newline'ı almak için
//	printf("kontrol: n=%d\n", n);


	int* sequence = (int *)malloc((n * sizeof(int)));
	if (sequence == NULL) {
		printf("No space allocated.");
	}
	int* ptr = sequence;


	for (int i = 0; i < n; i++) {
//		printf("Type ve eger istiyorsaniz Value giriniz: \n");

		fgets(input_line, 100, stdin);
//		printf("kontrol: %s\n", input_line);
		scanned = sscanf(input_line, "%s %s", type_str, value_str);

		type_int = atoi(type_str);
//		printf("kontrol type: %d\n", type_int);
		if (scanned == 2) {
			value_int = atoi(value_str);
//			printf("kontrol value: %d\n", value_int);
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



/*	printf("kontrol: malloc dizimizi yazdiriyoruz!\n");
	ptr = sequence;
	for (int i = 0; i < ones-twos; i++)
	{
		printf("%d ", *ptr);
		ptr = ptr + 1;
	}
*/

}
