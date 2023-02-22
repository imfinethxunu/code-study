#include <stdio.h>


/*ppt. function1*/

//void comp_num(int n1, int n2) {
//	printf("n1 = %d n2 = %d", n1, n2);
//}
//void main() {
//	int N1, N2;
//	printf("type two integers : ");
//	scanf("%d %d", &N1, &N2);
//	comp_num(N1, N2);
//}

/* odd even */
//void odd_even(int num) {
//	if (num % 2 == 0)
//		printf("%d is even", num);
//	else
//		printf("%d is odd", num);
//}
//void main() {
//	int num;
//	printf("Enter the integer : ");
//	scanf("%d", &num);
//	odd_even(num);
//}

///*print integer according to integer*/
//void comp_num(int n1, int n2) {
//	if (n1 == n2) {
//		printf("%d", n1);
//	}
//	else if (n1 > n2) {
//		printf("%d %d", n2, n1);
//	}
//	else
//		printf("%d %d", n1, n2);
//}
//void main() {
//	int n1, n2;
//	printf("Enter the two integer : ");
//	scanf("%d %d", &n1, &n2);
//	comp_num(n1, n2);
//}

/*Fibonacci*/
//void fibo(int num) {
//	int num, first = 0, second = 0, next, i;
//	for (i = 0; i < num; i++) {
//		if (i <= 1) {
//			next = i;
//		}
//		else {
//			next = first + second;
//			first = second;
//			second = next;
//		}
//		printf("%d", next);
//	}
//}
//void main() {
//	int num;
//	printf("Type an integer : ");
//	scanf("%d", num);
//	fibo(num);
//}

/*return add*/
//int main() {
//	int i, num, sum;
//	for(1)
//}






/*ppt. function2*/


/* n1 n2 exchange*/
//int n1, n2;
//void exchange(int n1, int n2) {
//	int tmp = 0;
//	tmp = n1;
//	n1 = n2;
//	n2 = tmp;
//	printf("n1 : %d n2 : %d", n1, n2);
//}
//void main() {
//	printf("Enter the two integers : ");
//	scanf("%d %d", &n1, &n2);
//	printf("n1 : %d n2 : %d ", n1, n2);
//	printf("After exchanging : ");
//	exchange(n1, n2);
//}

/*HW4-3 squares of integers*/
//교수님 코드 참고
//int square(int x) {
//	return x * x;
//}
//void main() {
//	int x;
//	for (x = 1; x <= 10; ++x)
//		printf(" %d", square(x));
//}

/*HW4-4 sum each number*/
//int sum(int num) {
//	int n1, n2, n3, n4;
//	int sum;
//
//	n1 = num / 1000;
//	n2 = num / 100 - 10 * n1;
//	n3 = num / 10 - 100 * n1 - 10 * n2;
//	n4 = num % 10;
//
//	sum = n1 + n2 + n3 + n4;
//
//	return sum;
//}
//void main() {
//	int num;
//	printf("Enter the number : ");
//	scanf("%d", &num);
//	sum(num);
//	printf("%d", sum(num));
//}

/*calculate maximum*/
int maximum(int x, int y, int z) {
	int max = x;

	if (y > max) {
		max = y;
	}
	if (z > max) {
		max = z;
	}
	
	return max;
}
void main() {
	int x, y, z;
	printf("Enter the three integers : ");
	scanf("%d %d %d", &x, &y, &z);
	maximum(x, y, z);
	printf("result = %d", maximum(x, y, x));
}