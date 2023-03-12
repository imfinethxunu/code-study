#include <stdio.h>
#define MAX_SIZE 10

int queue[MAX_SIZE];
int front = -1;
int rear = -1;

int queue_full() {
	if (rear >= MAX_SIZE - 1)
		return 1;
	return 0;
}

int queue_empty() {
	if (rear < front)
		return 1;
	return 0;
}

int enqueue(int x) {
	rear++;
	queue[rear] = x;
}

int dequeue() {
	int	temp = queue[front];
	front++;
	return temp;
}

int print_queue() {
	printf("queue = ");

	if (front == -1) {
		for (int i = 0; i <= rear; i++)
			printf("%d ", queue[i]);
	}
	else {
		for (int i = front; i <= rear; i++)
			printf("%d ", queue[i]);
	}

	printf("(front = %d, rear = %d)\n", front, rear);
}

void run_enqueue(int arr[], int num) {
	if (front == -1) {
		for (int i = 0; i < num; i++) {
			printf("enpueue(%d) , ", arr[i]);
			if (!queue_full())
				enqueue(arr[i]);
			else
				printf("queue full! ");

			print_queue();
		}
	}
	else
		for (int i = front; i < num; i++) {
			printf("enpueue(%d) , ", arr[i]);
			if (!queue_full())
				enqueue(arr[i]);
			else
				printf("queue full! ");

			print_queue();
		}
}

void run_dequeue(int num) {
	int value;
	for (int i = 0; i < num; i++) {
		printf("dequeue() ");
		if (!queue_empty()) {
			value = dequeue();
			printf("-> %d  ", value);
		}
		else
			printf("queue is empty ");

		print_queue();
	}
}

int main() {
	int numbers[] = { 3,9,4,5,2,1,6,8,7,5,8 };

	print_queue();

	run_enqueue(numbers, 5);
	run_dequeue(3);
	run_enqueue(numbers, 10);
	run_dequeue(11);

}