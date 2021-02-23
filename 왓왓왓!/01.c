//전처리기란 #을 쓴 모든것
//전처리기는 컴파일 이전에 사용된다.
#include<stdio.h>
#define PI 3.14
#define STR_STRING "hello world"
#define OUTPUT printf
#define AGE int

#define ADD (x, y) x+y

/*

int main(void) {
	AGE age = 20;

	printf("PI=%f\n", PI);
	printf("STR_STRING = %s\n", STR_STRING);
	OUTPUT("STR_STRING_OUTPUT = %s\n", STR_STRING);
	printf("%d\n", ADD(1, 2));


	return 0; */
