#include <stdio.h>
#include <windows.h>
#include<stdlib.h>
#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3
#define SPACE 4
int keycontrol();
void maindraw();
void consol();
int menudraw();
void gotoxy(int, int);
void menuscreen();
void gamescreen();
int print_O(int x, int y);
int print_X(int x, int y);
//����
int main() {
	int n = 0, num = 0;
	int line[9] = { 0 };
	int line2[9] = { 0 };
	int sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0, sum5 = 0, sum6 = 0, sum7 = 0, sum8 = 0;
	int ssum1 = 0, ssum2 = 0, ssum3 = 0, ssum4 = 0, ssum5 = 0, ssum6 = 0, ssum7 = 0, ssum8 = 0;
	consol();//init
	while (1) {
		maindraw(0);
		int menucode = menudraw();
		if (menucode == 1) {
			gamescreen();
			gotoxy(1, 27);
			printf("������ ���۵Ǿ����ϴ�\n");
			while (n < 9) {
				n++;
				if (n % 2 == 1) {
					gotoxy(1, 27);
					printf("ù��° ������ ���ڸ� �Է��� �ּ���(1~9) : ");
					scanf_s("%d", &num);
					line[num - 1]++;
					if (line[num - 1] > 1 || line2[num - 1] > 0) {
						gotoxy(1, 27);
						printf("�̹� ĭ�� ü�����ֽ��ϴ�.\n");
						n--;
						continue;
					}
					else if (num == 1) {
						print_O(4, 1);
						gotoxy(1, 27 + n);
					}
					else if (num == 2) {
						print_O(19, 1);
						gotoxy(1, 27 + n);
					}
					else if (num == 3) {
						print_O(33, 1);
						gotoxy(1, 27 + n);
					}
					else if (num == 4) {
						print_O(4, 9);
						gotoxy(1, 27 + n);
					}
					else if (num == 5) {
						print_O(19, 9);
						gotoxy(1, 27 + n);
					}
					else if (num == 6) {
						print_O(33, 9);
						gotoxy(1, 27 + n);
					}
					else if (num == 7) {
						print_O(4, 17);
						gotoxy(1, 27 + n);
					}
					else if (num == 8) {
						print_O(19, 17);
						gotoxy(1, 27 + n);
					}
					else if (num == 9) {
						print_O(33, 17);
						gotoxy(1, 27 + n);
					}
					else {
						gotoxy(1, 27);
						printf("0���� 9������ ���ڸ� �Է����ּ���\n");
						n--;
					}
					
				}
				else {
					gotoxy(1, 27);
					printf("�ι�° ������ ���ڸ� �Է��� �ּ���(1~9) : ");
					scanf_s("%d", &num);
					line2[num - 1]++;
					if (line[num - 1] > 0 || line2[num - 1] > 1) {
						gotoxy(1, 27);
						printf("�̹� ĭ�� ü�����ֽ��ϴ�.\n");
						n--;
						continue;
					}
					else if (num == 1) {
						print_X(5, 2);
						gotoxy(1, 27 + n);
					}
					else if (num == 2) {
						print_X(21, 2);
						gotoxy(1, 27 + n);
					}
					else if (num == 3) {
						print_X(36, 2);
						gotoxy(1, 27 + n);
					}
					else if (num == 4) {
						print_X(5, 10);
						gotoxy(1, 27 + n);
					}
					else if (num == 5) {
						print_X(21, 10);
						gotoxy(1, 27 + n);
					}
					else if (num == 6) {
						print_X(36, 10);
						gotoxy(1, 27 + n);
					}
					else if (num == 7) {
						print_X(5, 17);
						gotoxy(1, 27 + n);
					}
					else if (num == 8) {
						print_X(21, 17);
						gotoxy(1, 27 + n);
					}
					else if (num == 9) {
						print_X(36, 17);
						gotoxy(1, 27 + n);
					}
					else {
						gotoxy(1, 27);
						printf("0���� 9������ ���ڸ� �Է����ּ���\n");
						n--;
					}
					
				}
				sum1 = line[0] + line[1] + line[2];
				sum2 = line[3] + line[4] + line[5];
				sum3 = line[6] + line[7] + line[8];
				sum4 = line[0] + line[3] + line[6];
				sum5 = line[1] + line[4] + line[7];
				sum6 = line[2] + line[5] + line[8];
				sum7 = line[0] + line[4] + line[8];
				sum8 = line[2] + line[4] + line[6];
				ssum1 = line2[0] + line2[1] + line2[2];
				ssum2 = line2[3] + line2[4] + line2[5];
				ssum3 = line2[6] + line2[7] + line2[8];
				ssum4 = line2[0] + line2[3] + line2[6];
				ssum5 = line2[1] + line2[4] + line2[7];
				ssum6 = line2[2] + line2[5] + line2[8];
				ssum7 = line2[0] + line2[4] + line2[8];
				ssum8 = line2[2] + line2[4] + line2[6];
				if (sum1 == 3 || sum2 == 3 || sum3 == 3 || sum4 == 3 || sum5 == 3 || sum6 == 3 || sum7 == 3 || sum8 == 3) {
					gotoxy(1, 27 + n);
					gotoxy(1, 27);
					printf("ù��° ���� �¸�!!                                    ");
					return 0;
				}
				else if (ssum1 == 3 || ssum2 == 3 || ssum3 == 3 || ssum4 == 3 || ssum5 == 3 || ssum6 == 3 || ssum7 == 3 || ssum8 == 3) {
					gotoxy(1, 27 + n);
					gotoxy(1, 27);
					printf("�ι�° ���� �¸�!!                                    ");
					return 0;
				}
			}
		}
		else if (menucode == 2) {
			menuscreen();
		}
		else if (menucode == 3) {
			return 0;
		}

		system("cls");
	}
	return 0;
}
//�ܼ�â ũ�� ����
void consol() {
	system("mode con cols=65 lines=55 | title �� �� �� ��");

	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO ConsoleCursor;
	ConsoleCursor.bVisible = 0;
	ConsoleCursor.dwSize = 1;
	SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
}
//���ο� game���
void maindraw() {
	printf("\n\n\n");
	printf("            /$$$$$$   /$$$$$$  /$$$$$$/$$$$   /$$$$$$\n");
	printf("           /$$__  $$ |____  $$| $$_  $$_  $$ /$$__  $$\n");
	Sleep(300);
	printf("          | $$  | $$  /$$$$$$$| $$ | $$ | $$| $$$$$$$$\n");
	printf("          | $$  | $$ /$$__  $$| $$ | $$ | $$| $$_____/\n");
	Sleep(300);
	printf("          |  $$$$$$$|  $$$$$$$| $$ | $$ | $$|  $$$$$$$\n");
	printf("           (____  $$ (_______/|__/ |__/ |__/ (_______/\n");
	Sleep(300);
	printf("           /$$  \ $$  \n");
	printf("          |  $$$$$$/\n");
	Sleep(300);
	printf("           (______/\n");
}
//gotoxy
void gotoxy(int x, int y) {
	HANDLE consolHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(consolHandle, pos);
}
//����game�� ���ӽ���, �޴�, �����ư ��� �� ����
int menudraw() {
	int x = 28;
	int y = 11;
	gotoxy(x - 2, y);
	printf("> ���ӽ���");
	gotoxy(x, y + 1);
	printf("  �޴�");
	gotoxy(x, y + 2);
	printf("  ����");
	while (1) {
		int n = keycontrol();
		switch (n) {
		case UP: {
			if (y > 11) {
				gotoxy(x - 2, y);
				printf(" ");
				gotoxy(x - 2, --y);
				printf(">");
			}
			break;
		}
		case DOWN: {
			if (y < 13) {
				gotoxy(x - 2, y);
				printf(" ");
				gotoxy(x - 2, ++y);
				printf(">");
			}
			break;
		}
		case SPACE: {
			return y - 10;
		}
		}
	}
}
//Ű�� �Է¹ޱ�
int keycontrol() {
	char key = getch();
	if (key == 8 || key == 'w') {
		return UP;
	}
	else if (key == 5 || key == 's') {
		return DOWN;
	}
	else if (key == 4 || key == 'a') {
		return LEFT;
	}
	else if (key == 6 || key == 'd') {
		return RIGHT;
	}
	else if (key == ' ') {
		return SPACE;
	}
}
//�޴�ȭ��
void menuscreen() {
	system("cls");
	printf("\n\n");
	printf("                             [���۹�]\n\n");
	printf("                        �̵� : w, a, s, d\n");
	printf("                        ���� : �����̽���\n\n\n");
	printf("           �����̽��ٸ� ������ ����ȭ������ ���ư��ϴ�");

	while (1) {
		if (keycontrol() == SPACE) {
			break;
		}
	}
}
//���� ȭ��
void gamescreen() {
	system("cls");
	printf("===============================================\n");
	printf("||             ||             ||             ||\n");
	printf("||             ||             ||             ||\n");
	printf("||             ||             ||             ||\n");
	printf("||             ||             ||             ||\n");
	printf("||             ||             ||             ||\n");
	printf("||             ||             ||             ||\n");
	printf("||             ||             ||             ||\n");
	printf("===============================================\n");
	printf("||             ||             ||             ||\n");
	printf("||             ||             ||             ||\n");
	printf("||             ||             ||             ||\n");
	printf("||             ||             ||             ||\n");
	printf("||             ||             ||             ||\n");
	printf("||             ||             ||             ||\n");
	printf("||             ||             ||             ||\n");
	printf("===============================================\n");
	printf("||             ||             ||             ||\n");
	printf("||             ||             ||             ||\n");
	printf("||             ||             ||             ||\n");
	printf("||             ||             ||             ||\n");
	printf("||             ||             ||             ||\n");
	printf("||             ||             ||             ||\n");
	printf("||             ||             ||             ||\n");
	printf("===============================================\n");
}
//O����ϱ�
int print_O(int x, int y) {
	gotoxy(x, y);
	printf(" $$$$$$$\n");
	gotoxy(x, y + 1);
	printf("$$     $$\n");
	gotoxy(x, y + 2);
	printf("$$     $$\n");
	gotoxy(x, y + 3);
	printf("$$     $$\n");
	gotoxy(x, y + 4);
	printf("$$     $$\n");
	gotoxy(x, y + 5);
	printf(" $$$$$$$\n");
}
//X����ϱ�
int print_X(int x, int y) {
	gotoxy(x, y);
	printf("#   #\n");
	gotoxy(x, y + 1);
	printf(" # #\n");
	gotoxy(x, y + 2);
	printf("  #\n");
	gotoxy(x, y + 3);
	printf(" # #\n");
	gotoxy(x, y + 4);
	printf("#   #\n");
	gotoxy(x, y + 5);
}