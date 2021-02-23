#include <stdio.h>

enum week {
	SUN=10,//시작은 무조건 0
	MON=20,
	TUE=30,
	WED=40,
	THU=50,
	FRI=60,
	SAT=70
};
enum boolean{
false,
true
};

int main_012312(void) {

	/*int mon = 0;
	int tue = 1;
	int wed = 2;
	int thurs = 3;
	int fri = 4;
	int sat = 5;
	int sun = 6;
	*/
	enum week w;
	w = SUN;
	if (true) {
		printf("aaaaa\n\n");
	}
	printf("sizeof(week)=%d\n\n", sizeof(enum week));
	printf("SUN=%d,MON=%d\n", SUN, MON);
	printf("THU=%d,THIR=%d\n", THU, WED);
	printf("FRI=%d,SAT=%d\n", FRI, SAT);
	return 0;
탈주하고싶다