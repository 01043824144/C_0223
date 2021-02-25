#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//�츮�� å�̸��� �۰��̸��� �������̴� (�迭��)
//å���� ũ��� 100���� �� �� �ִ�.

#define MAX_CAPACITY 100 //100������ �� �� �ִ� å��

char* book_name[MAX_CAPACITY]; //å�̸�
char* book_author[MAX_CAPACITY]; //�۰��̸�
int book_idx = 0; //�迭�ε���


//�Լ� �����
void(add)(); //å �߰�
void(del)(); //å ��ü
void(list)(); //å ����� ����ϴ� �Լ�
void(find)(); //å�� ã�� �Լ�
void(save)(); //��������
void(read)(); //������ ����
void(help)(); //���� ���
char* ex_strdup(char*);


int main(void) {

	char command[100];

	while (1) {
		printf("��ɾ �Է��ϼ��� >");
		scanf("%s", command);
		//command = add "�߰�" / command = find "�˻�"
		//���ڿ� �񱳽ÿ��� strcmp();�Լ��� ����Ͽ� 
		//�����Ͱ� ����ġ�� ������ ���� ��ü�� ���ؾ� �Ѵ�.
	//	if (*command == "add") {

		//strcmp (�񱳹��ڿ�1 / �񱳹��ڿ� 2)
		//���࿡ ���� ���ڿ��̶�� 0 / �׷��� ������ 1
		if (strcmp(command, "add") == 0) {
			add();
		}
		else if (strcmp(command, "del") == 0) {
			del();
		}
		else if (strcmp(command, "list") == 0) {
			list();
		}
		else if (strcmp(command, "find") == 0) {
			find();
		}
		else if (strcmp(command, "save") == 0) {
			save();
		}
		else if (strcmp(command, "read") == 0) {
			read();
		}
		else if (strcmp(command, "help") == 0) {
			help();
		}


		else
		{
			printf("�´� ��ɾ �����ϴ�.\n");
			break;
		}
	}


	return 0;
}

//�Լ����Ǻ�

void add() {
	//printf("add�Լ� ȣ��\n"); }
	//add å�̸� �۰��� [����]
	//add -> commmand ���� 
	//å�̸� buf1 / �۰��� buf2
	char buf1[100], buf2[100]; //1�� å�̸� 2�� �۰���

	scanf("%s",buf1);
	scanf("%s",buf2);

	//book_name[book_idx] = buf1;
	//book_author[book_idx] = buf2;

	//strdup(������ ���ڿ�)->return ���� ������ ���ڿ��� �����͸� �Ѱ���
	//strdup -> malloc(�޸� �����Ҵ�) �� ������ ���ڿ���ü�� �����ȴ�.
	//string duplication / string copy (sttcpy)
	book_name[book_idx] = ex_strdup(buf1);//_strdup()
	book_author[book_idx] = ex_strdup(buf2);
	printf("%s�� �����Ͽ����ϴ�\n", book_name[book_idx]);
	book_idx++;
}

void del() { printf("del�Լ� ȣ��\n"); }
void list() {
	for (int i = 0; i < book_idx; i++) {
		printf("%-10s %-10s\n", book_name[i], book_author[i]);
	}
}

void find() { printf("find�Լ� ȣ��\n"); }
void save() { printf("save�Լ� ȣ��\n"); }
void read() { printf("read�Լ� ȣ��\n"); }
void help() { printf("help�Լ� ȣ��\n"); }


char* ex_strdup(char* source) {
	char* tmp =(char*)malloc(strlen(source)+1);
	if (tmp == NULL) {
		return NULL;
	}
//�޸��Ҵ� ����
	strcpy(tmp, source);
	return tmp;
}