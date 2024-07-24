#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

typedef struct StackType {
	int arr[100];
	int top; //�迭�� ���
}StackType;

void init(StackType* s) //�ʱ�ȭ�Լ�
{
	s->top = -1; //�迭�� index 0���� ����
	}

int is_empty(StackType* s) {
	if(s->top==-1)
		return 1;
	return 0;
}

int is_full(StackType* s)
{
	if (s->top == SIZE - 1)
		return 1;
	return 0;
}

void push(StackType* s, int value)
{
	if (is_full(s))
	{
		printf("Stack is full");
		exit(1);
	}
	printf("pushed: %d\n", value);
	s->arr[++(s->top)] = value;
}

int pop(StackType* s)
{
	if (is_empty(s))
	{
		printf("Stack is empty");
			exit(1);
}
return s->arr[(s->top)--];
}

int peek(StackType* s)
{
	if (is_empty(s)) {
		printf("Stack is empty");
		exit(1);
	}
	return s->arr[(s->top)];
}

int main()
{
	StackType s;
	init(&s);

	push(&s, 3);
	push(&s, 2);
	push(&s, 1);

	printf("peek: %d\n", peek(&s));
	printf("peek: %d\n", pop(&s));
	printf("peek: %d\n", pop(&s));
	printf("peek: %d\n", pop(&s));

	printf("pop: %d", pop(&s));
	return 0;
}
