#include<iostream>
#include<stdio.h>
#include<locale.h>
#include<time.h>
#include<ColorDlg.h>
#include<math.h>

void task1() {
//1.������������ ������ ��� �����.����������, ����� �� ��� �����, � ���� ���, ������� �� �� ����� � ������� �����������.
	int a, b;
	printf("������� ������ �����: ");
	scanf_s("%d", &a);
	printf("������� ������ �����: ");
	scanf_s("%d", &b);
	if (a==b)
	{
		printf("����� �����! &d \t %d \n", a, b);
	}
	else if (a < b)
	{
		printf("����� �� �����! %d ������ %d \n", a, b);
	}
	if (b < a)
	{
		printf("����� �� �����! %d ������ %d \n", b, a);
	}
}

void task2()
{
//2.������������ � ���������� ������ 5 ������ ��������.����������, ������� �� ������� � ��������.������� �������� ������, ���� ��� ������� ���� 4 ����� � ����
	int a, b, c, d, e, f;
	printf("������� ���� ������: ");
	scanf_s("%d%d%d%d%d", &a, &b, &c, &d, &e);
	f = (a + b + c + d + e) / 5;
	if (f>=4)
	{
		printf("������� �������! \n");
	}
	else
	{

		printf("������� �� �������! \n");
	}
}

void task3()
{
//4.�������� ��������� - �����������.������������ ������ ��� ����� � �������� �������������� ��������.������� �� ����� ���������
	float a, b, e;
	printf("������� ���������: ");
	scanf_s("%d%d", &a, &b);
	if (a+b)
	{
		e = a + b;
		printf("%d\n", e);
	}
	else if (a-b)
	{
		e = a - b;
		printf("%d\n", e);
	}
	else if (a*b)
	{
		e = float (a * b);
		printf("%d\n", e);
	}
	else if (a/b)
	{
		e =float (a / b);
		printf("%d\n", e);
	}
}

void task4()
{
//
	char text, fon;
	printf("������� ���� ������: \n 0=������ \n 1=����� \n 2=������� \n 3=������� \n 4=������� \n 5=������� \n 6=������ \n 7=����� \n 8=����� \n 9=������-����� \n A=������-������� \n B=������-������� \n C=������-������� \n D=������-������� \n E=������-������ \n F=����-����� \n");
	scanf_s("%c",&text);
	printf("������� ���� ����:");
	scanf_s("%c", &fon);
	switch (text)
	{
	case 1: {system ("textcolor 01"); break; }
	case 2: {system("color 02"); break; }
	case 3: {system("color 03"); break; }
	case 4: {system("color 04"); break; }
	case 5: {system("color 05"); break; }
	case 6: {system("color 06"); break; }
	case 7: {system("color 07"); break; }
	case 8: {system("color 08"); break; }
	case 9: {system("color 09"); break; }
	case 'A': {system("color 0A"); break; }
	case 'B': {system("color 0B"); break; }
	case 'C': {system("color 0C"); break; }
	case 'D': {system("color 0D"); break; }
	case 'E': {system("color 0E"); break; }
	case 'F': {system("color 0F"); break; }
	default:
		break;
	}
	switch (fon)
	{
	case 1: {system("foncolor 10"); break; }
	case 2: {system("color 20"); break; }
	case 3: {system("color 30"); break; }
	case 4: {system("color 40"); break; }
	case 5: {system("color 50"); break; }
	case 6: {system("color 50"); break; }
	case 7: {system("color 70"); break; }
	case 8: {system("color 80"); break; }
	case 9: {system("color 90"); break; }
	case 'A': {system("color A0"); break; }
	case 'B': {system("color B0"); break; }
	case 'C': {system("color C0"); break; }
	case 'D': {system("color D0"); break; }
	case 'E': {system("color E0"); break; }
	case 'F': {system("color F0"); break; }
	default:
		break;
	}
	getchar;
}

void task5()
{
//6.�������� ���������, ������� �� ������ ������������ �������� ��������� �� ����� � ������� �� ������� �� ������� ������������
	int chislo, stepen, s;
	printf("������� �����: ");
	scanf_s("%d", &chislo);
	printf("������� �������: ");
	scanf_s("%d", &stepen);
	if (chislo<=7 && stepen<=7)
	{
		s = pow(chislo, stepen);
		printf("���������: %d\n", s);
	}
	else
	{
		printf("����� ��������� �����! \n");
	}
}

void task6()
{
	srand(time(NULL));
	int f;
	int a = 0 + rand() % 25;
	int b = 0 + rand() % 25;
	int c = 0 + rand() % 25;
	f = (a + b + c) / 4;
	printf("��������� ����������: %d\n", f);
}

int main()
{
	setlocale(LC_ALL, "");
	int task;
	int flag;
start:
	printf("������� ����� �������: ");
	scanf_s("%d", &task);
	switch (task)
	{
	case 1:
	{
		task1();
	}break;
	case 2:
	{
		task2();
	}break;
	case 3:
	{
		task3();
	}break;
	case 4:
	{
		task4();
	}break;
	case 5:
	{
		task5();
	}break;
	case 6:
	{
		task6();
	}break;
	default:
		break;
	}
	printf("���� ������ ���������� ������� 1! \n");
	scanf_s("%d", &flag);
	if (flag==1)
	{
		goto start;
	}
	system("pause");
}