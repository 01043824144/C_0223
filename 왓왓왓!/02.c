#include<stdio.h>

#define DEBUG 1
#define NAME "HAPPY"

int main(void) {
#if DEBUG
	printf("����� ����Դϴ�");
#else
	printf("� ����Դϴ�");
#endif

#ifdef NAME
#undef NAME
#define NAME "KIM"

#else 
#define NAME "nothing"
#endif

	printf("%s\n\n", NAME);

	return 0;
}