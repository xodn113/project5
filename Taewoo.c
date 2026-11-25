#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
int main(void) {
	int n1 = 34;
	int n2 = 22;
	int n3 = 40;

	int sum;
	float avg;
	sum = n1 + n2 + n3;
	avg = sum / 3.0;
	printf("n1 = %d, n2 = %d, n3 = %d\n", n1, n2, n3);
	printf("세 수의 합: %d\n", sum);
	printf("세수의 평균: %.2f\n", avg);
}

int main(void) {
	int age = 21;
	int h = 175;
	printf("반갑습니다 저의 이름은 홍길동입니다\n");
	printf("나이는 %d 이고, 키는 %d입니다.", age, h);
}

#define pi  3.14159
#define CIRCLE_AREA(r) (pi * (r) * (r))

int main(void) {
	int ra = 5;
	printf("반지름이 %d인 원의 면적: %.2f\n", ra, CIRCLE_AREA(ra));

}


int main(void) {
	int a = 11, b = 4;
	float x = 11.0, y = 4.0;
	printf("정수형 나눗셈: 11 / 4 = %d\n", a / b);
	printf("실수형 나눗셈: 11.0 / 4.0 = %.2f\n", x / y);
	printf("혼합형 나눗셈: 11 / 4.0 = %.2f\n", a / y);
	printf("나머지 연산: 11 %% 4 = %d\n", a % b);
}
*/




/*
int main() {
	double num1, num2;


	printf("첫 번쨰 숫자를 입력하시오:");
	scanf("%lf", &num1);
	printf("두 번째 숫자를 입력하시오:");
	scanf("%lf", &num2);

	printf("+: %.21f\n", num1 + num2);
	printf("-: %.21f\n", num1 - num2);
	printf("*: %.21f\n", num1 * num2);
	printf("/: %.21f\n", num1 / num2);
	return 0;
}



int main(void) {
	int x = 100;
	int y = 200;
	int avg;

	avg = (x+y) / 2;
	printf("x = %d, y = %d\n", x, y);
	printf("두 수의 평균: %d\n", avg);

	return 0;
}
*/
 


/*

int main(void) {

	int decimal = 338;
	printf("10진수: %d\n", decimal);

int octal = 033;
	printf("8진수 (10진수로 출력): %d\n", octal);
	printf("8진수 (8진수로 출력): %o\n", octal);

	int hex = 0x1F;
	printf("16진수 (10진수로 출력): %d\n", hex);
	printf("16진수 (16진수로 출력): %X\n", hex);

	int binary = 0b1100;
	printf("2진수 (10진수로 출력): %d\n", binary);

}

int main(voipd) {

int n1 = 34;
int n2 = 22;
int n3 = 40;

int sum;
float avg;


sum = n1 + n2 + n3;
avg = sum / 3.0;

printf("n1 = %d, n2 = %d, n3 = %d\n", n1, n2, n3);
printf("합계: %d, 평균: %.2f\n", sum, avg);
return 0;
}




int main(void) {
	int n; scanf("%d", &n);
	int h; scanf("%x", &h);

	char str[256]; scanf("%s", str);
	printf("n = %d\n", n);
	printf("h(10진수) = %d, h(16진수) = %x\n", h, h);
	printf("s = %s\n", str);

}


int main(void) {
	char str[5];
	printf("문자열을 입력하세요: ");
	if(scanf_s("%s", str, (unsigned int)sizeof(str)) == 1)
		printf("입력된 문자열: %s\n", str);
	else
		printf("문자열이 버퍼 크기보다 큽니다\n");


int main(void) {
	float height, weight, bmi;
	height = 171;
	weight = 62;

	float height_m = height / 100.0;
	bmi = weight / (height_m * height_m);

	printf("당신의 체질량 지수: %.2f\n", bmi);
}


int main(void) {
	int x, y;
	printf(" 두 정수를 입력하시요: ");
	scanf_s("%d %d", &x, &y);

	printf("%d && %d의 결과값: %d\n", x, y, x && y);
	printf("%d || %d의 결과값: %d\n", x, y, x || y);
	printf("!%d의 결과값: %d\n", x, !x);
	}


int main(void) {
	int x = 20;

	printf("x = %d입니다\n",x);
	x += 10;
	printf("x += 10; 의 결과 x = %d\n", x);
	x -= 10;
	printf("x -= 1; 의 결과 x = %d\n", x);
}


int main(void) {
	int number;
	printf("정수를 입력하시요: ");
	scanf("%d", &number);
	if (number < 0)
		number = -number;
	printf("절대값은 %d입니다.\n", number);

}

int main(void) {
	int score;

	printf("시험 점수를 입력하시요: ");
	scanf("%d", &score);

	if (score >= 90) {
		printf("합격입니다.\n");
		printf("장학금도 받을 수 있습니다. \n");
	}
}


int main(void) {
	int i;
	for (i = 10; i > 0; i--) 
		printf("%d\n", i);
	
}


int main(void) {
	int arr[] = { 10, 20, 30, 40, 50 };
	int i;
	for (i = 0; i < 5; i++) 
		printf("arr[%d] = %d\n", i, arr[i]);
	
}

int main(void) {
	int i = 0;
	do {
		printf("1---새파일    2---파일열기\n");
		printf("3---파일 닫기  4---파일 저장\n");
		printf("하나를 선택하시요 : ");
		scanf_s("%d", &i);
	} while (i < 1 || i > 4);
	printf("선택한 메뉴 = %d\n", i);
}

int main(void) {
	for (int i = 1; i <= 2; i++) {
		for (int j = 1; j <= 3; j++) {
			printf("i = %d, j = %d\n", i, j);
		}
		printf("\n");
	}
}



void func(void) {
	static int x = 10;
	printf("in func : x = %d\n", x);
	x++;
	printf("after x++ : x = %d\n", x);
}
int main(void) {
	func();
	func();
}


int is_prime(int n) {
	if (n < 2) return 0;
	for (int i = 2; i * i <= n; i++) 
		if (n % i == 0) return 0;
		return 1;
}
	int main(void) {
		int number;

		printf("정수를 입력하시요: ");
		scanf("%d", &number);

		if (is_prime(number))
			printf("%d는 소수입니다.\n", number);
		else
			printf("%d는 소수가 아닙니다.\n", number);
	}
	

int main(void) {
	int year, result;
	printf("연도를 입력하시요: ");
	scanf("%d", &year);
	result = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
	printf("result = %d\n", result);
}



#include <stdlib.h>
#include <time.h>

#define SIZE 50
#define RANGE 100

int main(void) {
	int i;
	srand(time(NULL));
	for (i = 0; i < SIZE; i++)
		printf("%d ",rand() % RANGE + 1);
}


#include <stdio.h>
int main(void) {
	int s[5] = { 10, 20, 30, 40, 50 };
	printf("배열의 첫 원소 s[0] = %d, 배열의 마지막 원소 s[4] = %d\n", s[0], s[4]);
	
}

int main(void) {
	int s[] = { 10, 20, 30, 40, 50 };

	for (int i = 0; i < 5; i++)
		printf("s[%d] = %d\n", i, s[i]);
}


int main(void) {
	int score[] = { 94, 82, 95, 77, 89 };
	int i, size;

	size = sizeof(score) / sizeof(score[0]);
	printf("배열의 크기 = %d\n", size);
	for(i = 0; i < size; i ++)
		printf("score[%d] = %d\n", i, score[i]);
}


int main(void) {
	int m[3] = { 10, 20, 30 }, n[3], i;
	for (i = 0; i < 3; i++)
		n[i] = m[i];
	printf("원본배열m: ");
	for (i = 0; i < 3; i++)
		printf("%d ", m[i]);
	printf("\n사본 배열 n : ");
	for (i = 0; i < 3; i++)
		printf("%d ", n[i]);

}


int main(void) {
	int score[] = { 94, 82, 95, 77, 89 };
	int sum = 0, size, i;
	float average;

	size = sizeof(score) / sizeof(score[0]);
	for (i = 0; i < size; i++)
		sum += score[i];
	average = (float)sum / size;
	printf("배열원소합: %d, 배열원소평균: %2f\n", sum, average);

}




#include <stdlib.h>
#include <time.h>



#define SIZE 50
#define RANGE 100


int main(void) {
	int arr[SIZE], i;

	srand((unsigned int)time(NULL));
	for (i = 0; i < SIZE; i++)
		arr[i] = rand() % RANGE + 1;
	for (i = 0; i < SIZE; i++)
		printf("%d ", arr[i]);
}



#include <stdlib.h>
#include <time.h>

#define size 50
#define range 100

int main(void) {
	int arr[size];
	int count[range + 1] = { 0 };
	int i, mode = 0, max_freq = 0;

	srand(time(NULL));
	for ( i = 0; i < size; i++ ) {
		arr[i] = rand() % range + 1;
		count[arr[i]]++;
	}
	for ( i = 1; i <= range; i++ ) {
		if ( count[i] > max_freq ) {
			max_freq = count[i];
			mode = i;
		}
	}
	printf("최빈값: %d, 빈도: %d\n", mode, max_freq);
}


#define SIZE 3
int main(void) {
	int m[SIZE] = { 10, 20, 30 }, n[SIZE] = { 10, 20, 30 };
	printf("m의주소 = %p\n", m);
	printf("n의주소 = %p\n", n);
}

 
#define size 3
int main(void) {
	int m[size] = { 10, 20, 30 }, n[size] = { 10, 20, 30 };
	int same_count = 0;
	for (int i = 0; i < size; i++)
		if (m[i] == n[i])
			same_count++;
	if (same_count == size)
		printf("m과n은 같다\n");
	else
		printf("m과 n은 다르다\n");
}



#define sizea 3
#define sizeb 4
#define sizec (sizea+sizeb)
int main(void) {
	int a[sizea] = { 10, 20, 30 };
	int b[sizeb] = { 50, 60, 70, 80 };
	int c[sizec];

	for (int i = 0; i < sizea; i++)
		c[i] = a[i];
	for (int i = 0; i < sizeb; i++)
		c[sizea + i] = b[i];

	printf("배열 c: ");
	for (int i = 0; i < sizec; i++)
		printf("%d ", c[i]);
}


#define size 3
int main(void) {
	int a[size] = { 100, 200, 300 };
	int b[size] = { 40, 50, 60 };
	int c[size];

	for(int i = 0; i < size; i++)
		c[i] = a[i] + b[i];
	printf("배열 c: ");
	for (int i = 0; i < size; i++)
		printf("%d ", c[i]);	

}


#include <stdio.h>
#define SIZE 5

int get_avg(int arr[], int SIZE) {
	int total = 0;

	for (int i = 0; i < SIZE; i++)
		total += arr[i];

	return total / SIZE;

}
int main(void) {
	int score[SIZE] = { 31, 63, 62, 87, 14 };

	printf("배열원소의 평균 = %d\n", get_avg(score, SIZE));
}



int main(void) {
	int size;
	printf("배열 크기입력: ");
	scanf("%d", &size);

	int* arr = (int*)malloc(size * sizeof(int));

	if (arr == NULL) {
		printf("메모리 할당 실패\n");
		return 1;
	}

	for (int i = 0; i < size; i++) arr[i] = i;
	for (int i = 0; i < size; i++) printf("%d ", arr[i]);
	printf("\n");

	free(arr);
}



int get_max(int arr[], int size) {
	int max = arr[0];
	for (int i = 1; i < size; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}

int get_min(int arr[], int size) {
	int min = arr[0];
	for (int i = 1; i < size; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	return min;
}

int main(void) {
	int arr[100], n;

	printf("배열원소수를 입력: ");
	scanf("%d", &n);
		if (n <= 0 || n > 100) {
			printf("배열원소수는 1~100 사이여야 합니다.\n");
			return 1;
}

		printf("우너소를 입력: ");
		for (int i = 0; i < n; i++) {
			scanf("%d", &arr[i]);
		}

		int max_value = get_max(arr, n);
		int min_value = get_min(arr, n);
		printf("최댓값: %d\n", max_value);
		printf("최솟값: %d\n", min_value);
	}
	

#define SIZE 5

void print_array(int arr[], int size) {
	for(int i=0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
void get_twice(int arr[], int size) {
	for (int i = 0; i < size; i++)
		arr[i] *= 2;
}
int main(void) {
	int score[SIZE] = { 31, 63, 62, 87, 14 };
	printf("get_twice() 호출 전: ");
	print_array(score, SIZE);
	get_twice(score, SIZE);
	printf("get_twice() 호출 후: ");
	print_array(score, SIZE);
}


void func(int x[]) {
	x[0] = x[0] * 10;
	printf("in func : x[0] = %d\n", x[0]);
}
int main(void) {
	int a[] = { 20 };
	func(a);
	printf("in main : a[0] = %d \n", a[0]);
}

#include <stdio.h>

void reverse(int arr[], int size) {
	int temp;
	for (int i = 0; i < size / 2; i++) {
		temp = arr[i];
		arr[i] = arr[size - 1 - i];      
		arr[size - 1 - i] = temp;
	}
}

int main(void) {
	int arr[100], n;

	printf("배열 크기 입력: ");
	if (scanf("%d", &n) != 1 || n <= 0 || n > 100) {
		printf("배열원소수는 1~100 사이여야 합니다.\n");
		return 1;
	}

	printf("%d개의 원소를 입력: ", n);
	for (int i = 0; i < n; i++) {

		scanf(" %d", &arr[i]);
	}

	reverse(arr, n);

	printf("역순 배열: ");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}


void rotate_right(int arr[], int size, int k) {
	k = k % size;

	int temp[10];
	for (int i = 0; i < k; i++)
		temp[i] = arr[size - k + i];

	for (int i = size - 1; i >= k; i--)
		arr[i] = arr[i - k];

	for (int i = 0; i < k; i++)
		arr[i] = temp[i];
}
int main(void) {
	int n, k, arr[10];

	printf("배열원소수 입력: ");
	scanf("%d", &n);

	printf("원소입력: ");
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	printf("회전 수 입력: ");
	scanf("%d", &k);

	rotate_right(arr, n, k);

	printf("-----------------\n");
	printf("배열을 오른쪼그로 %d회 회전한 결과: ", k);
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}



#define SIZE 9

int main(void) {
	int arr[SIZE] = { 3, 24, 5, 7, 2., 10, 9, 4, 44 };
	int key = 10;

	for(int i = 0; i < SIZE; i++)
		if(arr[i] == key)
			printf("탐색성공: arr[%d]에서 %d를 찾았습니다\n", i, key);
}


#define SIZE 9
int search(int src[], int size, int key) {
	for (int i = 0; i < size; i++) {
		if (src[i] == key){
			return i;
	}
}
return -1;
}
int main(void) {
	int arr[SIZE] = { 3, 24, 5, 7, 2, 10, 9, 4, 44 };
	int key = 10;
	int index = search(arr, SIZE, key);
	if (index != -1)
		printf("탐색성공: arr[%d]에서 %d를 찾았습니다\n", index, key);
	else
		printf("탐색실패: %d를 찾을 수 없습니다\n", key);
}


int binary_search(int arr[], int low, int high, int x) {
	while (low <= high) {
		int mid = low + (high - low) / 2;
		if (arr[mid] == x)
			return mid;
		else if (arr[mid] < x)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return -1;
}
int main(void) {
	int arr[] = { 3, 4, 5, 7, 9, 10, 24, 44 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int key = 10;
	int result = binary_search(arr, 0, size - 1, key);

	if (result == -1)
	printf("키 %d가 arr 배열에 없습니다.\n", key);
	else
		printf("탐색성공 arr[%d]에서 %d를 찾았습니다\n", result, key);
}


int main(void) {
	int first, last, middle, key, array[40];

	for (int i = 0; i < 40; i++) {
		array[i] = i * 10;
		printf("%d ", array[i]);
	}

	printf("\n키 값을 입력하시오: ");
	scanf("%d", &key);
	first = 0; last = 40 - 1;
	middle = (first + last) / 2;

	while (first <= last) {
		if (array[middle] < key)
			first = middle + 1;
		else if (array[middle] == key) {
			printf("%d는 array[%d]에 있습니다.\n", key, middle);
			break;
		}
		else
			last = middle - 1;
		middle = (first + last) / 2;
	}
	if (first > last)
		printf("키값 %d가 배열에 없음.\n", key);
}

#define SIZE 5
void bubble_sort(int list[], int n) {
	int i, j, temp;

	for ( i = n -1; i>0; i--)
		for (j = 0; j < i; j++) {
			if (list[j] > list[j + 1]) {
				temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
			}	
		}
}

int main(void) {
	int i;
	int arr[SIZE] = { 24, 5, 7, 3, 20 };

	bubble_sort(arr, SIZE);
	printf("버블 정렬 후 데이터: ");
	for (int i = 0; i < SIZE; i++)
		printf("%d ", arr[i]);

}


#include <stdio.h> 

void selection_sort(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		int min_index = i;

		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[min_index])
				min_index = j;
		}

		if (min_index != i) {
			int temp = arr[i];
			arr[i] = arr[min_index];
			arr[min_index] = temp;
		}

		printf("단계 %d: ", i + 1);
		for (int k = 0; k < n; k++)
			printf("%d ", arr[k]);
		printf("\n");
	}
	
}

int main(void) {
	int arr[] = { 64, 25, 12, 22, 11 };
	int n = sizeof(arr) / sizeof(arr[0]);

	selection_sort(arr, n);

	printf("정렬된 배열: ");
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}


#include <stdio.h>
#define ROWS 2
#define COLS 5

int main(void) {
	int arr[ROWS][COLS] = {
		{0, 1, 2, 3, 4},
		{5, 6, 7, 8, 9}
	};
	for (int i = 0; i < ROWS; i++) {
		int sum = 0;
		for (int j = 0; j < COLS; j++)
			sum += arr[i][j];
		printf("행 %d의 합: %d\n", i, sum);
	}

	return 0;
}


int main(void) {
	int arr3[][2][5] = {
		{
			{0, 1, 2, 3, 4},
			{5, 6, 7, 8, 9}
		},
		{
			{10, 11, 12, 13, 14},
			{15, 16, 17, 18, 19}
		},
		{
			{20, 21, 22, 23, 24},
			{25, 26, 27, 28, 29}
		}
	};

	for (int i = 0; i < 3; i++) {
		printf(" 층 %d:\n", i);
		for (int j = 0; j < 2; j++) {
			printf("  행 %d: ", j);
			for (int k = 0; k < 5; k++)
				printf("%d ", arr3[i][j][k]);
			printf("\n");
		}
	}
	return 0;
}


#define DEPTH 3
#define ROMS 2
#define COLS 5

int main(void) {
	int arr3[DEPTH][ROMS][COLS] = {
		{
			{0, 1, 2, 3, 4},
			{5, 6, 7, 8, 9}
		},
		{
			{4, 5, 6, 7, 8},
			{8, 9, 10, 11, 12},
		},
		{
			{5, 6, 7, 8, 9},
			{1, 2, 3, 4, 5},
		}
	};
	for (int i = 0; i < DEPTH; i++) {
		int sum = 0;

		for (int j = 0; j < ROMS; j++) {
			for (int k = 0; k < COLS; k++)
				sum += arr3[i][j][k];
		}
		printf("층 %d의 합: %d\n", i, sum);
	}
	return 0;
}


#define DEPTH 3
#define ROWS 2
#define COLS 5

int main(void) {
	int arr3[DEPTH][ROWS][COLS] = {
	{
		{0, 1, 2, 3, 4},
		{5, 6, 7, 8, 9}
	},
	{
		{4, 5, 6, 7, 8},
		{8, 9, 10, 11, 12},
	},
	{
		{5, 6, 7, 8, 9},
		{1, 2, 3, 4, 5},
	}
	};
	for (int i = 0; i < DEPTH; i++) {
		for (int j = 0; j < ROWS; j++) {
			int row_sum = 0;
			for (int k = 0; k < COLS; k++) {
				row_sum += arr3[i][j][k];
			}
			printf("층 %d, 행 %d의 합: %d\n", i, j, row_sum);
		}
	}
	return 0;

}

int main(void) {
	int a = 10;
	int* p = &a;

	printf("변수 a의값: %d\n", a);
	printf("변수 a의 메모리주소: %p\n", &a);
	printf("포인터 p의 값: %p\n", p);
	printf("포인터 p가 가리키는 값: %d\n", *p);
}

int main(void) {
	int a = 10;
	int* p = &a;

	printf("a의 초기값: %d\n", a);
	*p = 20;
	printf("포인터를 통해 변경된 a의값: %d\n", a);
}


int main(void) {
	char *pc = (char *)0x10000;
	int *pi = (int *)0x10000;
	double *pd = (double *)0x10000;

	printf("증가 전 pc=%p, pi=%p, pd=%p\n", pc, pi, pd);
	pc++;
	pi++;
	pd++;
	printf("증가 후 pc=%p, pi=%p, pd=%p\n", pc, pi, pd);
}

int main(void) {
	int arr[5] = { 10, 20, 30, 40, 50 };
	int* ptr1 = arr, * ptr2 = &arr[0];

	printf("배열이름 arr: %p\n", arr);
	printf("포인터 ptr1: %p\n", ptr1);
	printf("포인터 ptr2: %p\n", ptr2);
	printf("arr[0]: %d, *ptr1: %d  *ptr2[0]: %d\n", arr[0], *ptr1, ptr2[0]);
}
*/