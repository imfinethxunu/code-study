#include <stdio.h>


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