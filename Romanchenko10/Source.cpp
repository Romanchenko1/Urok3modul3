#include<iostream>
#include<stdio.h>
#include<locale.h>
#include<time.h>
#include<ColorDlg.h>
#include<math.h>

void task1() {
//1.Пользователь вводит два числа.Определить, равны ли эти числа, и если нет, вывести их на экран в порядке возрастания.
	int a, b;
	printf("Введите первое число: ");
	scanf_s("%d", &a);
	printf("Введите второе число: ");
	scanf_s("%d", &b);
	if (a==b)
	{
		printf("Числа равны! &d \t %d \n", a, b);
	}
	else if (a < b)
	{
		printf("Числа не равны! %d меньше %d \n", a, b);
	}
	if (b < a)
	{
		printf("Числа не равны! %d меньше %d \n", b, a);
	}
}

void task2()
{
//2.Пользователь с клавиатуры вводит 5 оценок студента.Определить, допущен ли студент к экзамену.Студент получает допуск, если его средний балл 4 балла и выше
	int a, b, c, d, e, f;
	printf("Введите пять оценок: ");
	scanf_s("%d%d%d%d%d", &a, &b, &c, &d, &e);
	f = (a + b + c + d + e) / 5;
	if (f>=4)
	{
		printf("Студент допущен! \n");
	}
	else
	{

		printf("Студент не допущен! \n");
	}
}

void task3()
{
//4.Написать программу - калькулятор.Пользователь вводит два числа и выбирает арифметическое действие.Вывести на экран результат
	float a, b, e;
	printf("Введите выражение: ");
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
	printf("Введите цвет текста: \n 0=черный \n 1=синий \n 2=зеленый \n 3=голубой \n 4=красный \n 5=лиловый \n 6=желтый \n 7=белый \n 8=серый \n 9=светло-синий \n A=Светло-зеленый \n B=светло-голубой \n C=светло-красный \n D=светло-лиловый \n E=светло-желтый \n F=ярко-белый \n");
	scanf_s("%c",&text);
	printf("Введите цвет Фона:");
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
//6.Написать программу, которая по выбору пользователя возводит введенное им число в степень от нулевой до седьмой включительно
	int chislo, stepen, s;
	printf("Введите число: ");
	scanf_s("%d", &chislo);
	printf("Введите степень: ");
	scanf_s("%d", &stepen);
	if (chislo<=7 && stepen<=7)
	{
		s = pow(chislo, stepen);
		printf("Результат: %d\n", s);
	}
	else
	{
		printf("Число привысило лимит! \n");
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
	printf("требуется пересадить: %d\n", f);
}

int main()
{
	setlocale(LC_ALL, "");
	int task;
	int flag;
start:
	printf("Введите номер задания: ");
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
	printf("Если хотите продолжить нажмите 1! \n");
	scanf_s("%d", &flag);
	if (flag==1)
	{
		goto start;
	}
	system("pause");
}