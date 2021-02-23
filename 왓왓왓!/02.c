#include<stdio.h>

#define DEBUG 1
#define NAME "HAPPY"

int main(void) {
#if DEBUG
	printf("디버깅 모드입니다");
#else
	printf("운영 모드입니다");
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