#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

typedef struct StackType {
	int arr[100];
	int top; //배열의 상단
}StackType;

void init(StackType* s) //초기화함수
{
	s->top = -1; //top을 -1로 설정하여 스택이 비어있음을 나타냄
	}

int is_empty(StackType* s) //스택이 비어있는지 확인하는 함수
{
	if(s->top==-1)
		return 1;
	return 0;
}

int is_full(StackType* s) //스택이 가득 찼는지 확인하는 함수
{
	if (s->top == SIZE - 1)
		return 1;
	return 0;
}

void push(StackType* s, int value) // 스택에 값을 삽입하는 함수
{
	if (is_full(s))
	{
		printf("Stack is full");
		exit(1);
	}
	printf("pushed: %d\n", value);
	s->arr[++(s->top)] = value; //top을 증가시키고 그 위치에 값을 저장
}

int pop(StackType* s) //스택에서 값을 삭제하고 반환하는 함수
{
	if (is_empty(s))
	{
		printf("Stack is empty");
	        exit(1);
}
return s->arr[(s->top)--]; //top위치의 값을 반환하고 top을 감소시킴
}

int peek(StackType* s) //스택의 최상단 값을 반환하는 함수
{
	if (is_empty(s)) {
		printf("Stack is empty");
		exit(1);
	}
	return s->arr[(s->top)]; //top 위치 반
}

int main()
{
	StackType s;
	init(&s);

	push(&s, 3);
	push(&s, 2);
	push(&s, 1);

	printf("peek: %d\n", peek(&s));
	printf("pop: %d\n", pop(&s));
	printf("pop: %d\n", pop(&s));
	printf("pop: %d\n", pop(&s));

	printf("pop: %d", pop(&s));
	return 0;
}
