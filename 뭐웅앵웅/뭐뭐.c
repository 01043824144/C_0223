#include <stdio.h>

typedef int AGE; //=int age
typedef char* NAME; //=char* NAME
typedef enum _week {S,M,T,W,TH,F,Sat} WEEK;
typedef struct _student {
	int hakno;
	char* name;
} STUDENT;

int main(void) {

	AGE age = 20; //age 데이터 타입
	NAME name = "윤 지"; // name 데이터타입
	WEEK w = S;
	STUDENT std;
	std.hakno = 10000;
	std.name = "윤지";
	return 0;
}