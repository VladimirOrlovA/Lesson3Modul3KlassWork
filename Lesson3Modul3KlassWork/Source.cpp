#include<stdio.h>
#include<iostream>
#include<cmath>
#include<locale.h>
#include<time.h>

void Task1()
{
	int dw;

start:

	printf("Enter number day of the week (1) to (7) : ");
	scanf_s("%d", &dw);

	switch (dw)

	{
	case 1: { printf("\n�����������\n"); goto start; } break;
	case 2: { printf("\n�������\n"); goto start; } break;
	case 3: { printf("\n�����\n"); goto start; } break;
	case 4: { printf("\n�������\n"); goto start; } break;
	case 5: { printf("\n�������\n"); goto start; } break;
	case 6: { printf("\n�������\n"); goto start; } break;
	case 7: { printf("\n�����������\n"); goto start; } break;

	default:
		break;
	}
}

void Task2()
{
	int dw, w;

start:

	int nd = 0 + rand() % 365;

	printf("Number day of the year => %d", nd);

	dw = nd % 7;

	switch (dw)


	{
	case 1: {  printf("\n�����������\n"); } break;
	case 2: {  printf("\n�������\n"); } break;
	case 3: {  printf("\n�����\n"); } break;
	case 4: {  printf("\n�������\n"); } break;
	case 5: {  printf("\n�������\n"); } break;
	case 6: {  printf("\n�������\n"); } break;
	case 7: {  printf("\n�����������\n"); } break;

	default:
		break;
	}

}

void Task3()
{
	int n = 785, n1, n2, n3, sum, m;

	n1 = n / 100;
	n2 = (n - n1 * 100) / 10;
	n3 = (n - n1 * 100) % 10;

	printf("\n1 ����� => %d\n", n1);
	printf("\n2 ����� => %d\n", n2);
	printf("\n3 ����� => %d\n", n3);

	sum = n1 + n2 + n3;
	m = n1 * n2 * n3;

	if (sum >= 10) { printf("����� ���� ����� ������� ���������� ����� => %d \n", sum); }
	if (m >= 100) { printf("������������  ���� ����� ������� ����������� ������ => %d \n", m); }

}

void Task4()
{
	int averdipl = 1 + rand() % 5;
	int s = 0 + rand() % 16;
	int k, r;

	if (s = 0) { printf("\n����� ���\n"); k = 1; }
	if (s < 2) { printf("\n���� ������ 2 ���\n"); k = 13; }
	if (s >= 2 && s <= 5) { printf("\n���� �� 2 �� 5 ���\n"); k = 16; }

	r = averdipl * k;

	printf("������� ��������� = %d \n", r);

	if (r >= 45) { printf("��������� ��� 45. �������� ������ � ������������"); }
}

void Task6()
{
	int d = 1 + rand() % 31;
	int cdate, cdated, cdatem, fm, nfm, dfm, dfmm, dfmd;

	printf("\n� �������� ���� ��������� 27.08.2018 �� ����� + %d ����\n", d);

	fm = 8 * 31 + 27; // ���� ���������� ��������� 27.08.2018

	cdate = fm + d;
	cdatem = cdate / 31;
	cdated = cdate % 31;

	printf("\n������� ���� %d.%d.2018\n", cdated, cdatem);

	nfm = fm + 28;

	dfmm = nfm / 31;	// ���������� ����� ���������� ����������
	dfmd = nfm % 31;	// ���������� ���� ������ ���������� ����������	

	printf("\n���� ���������� ���������� %d.%d.2018\n", dfmd, dfmm);
	printf("\n��������� ���������� ����� %d ����\n\n", nfm - cdate);

}

void Task7()
{

	int code, duration;

	printf("������� ��� ������  => ");
	scanf_s("%d", &code);
	printf("������� ������������ �����������  => ");
	scanf_s("%d", &duration);

	if (code == 7272) { printf("\n������ ��� 7272, ����� 25 �����. ��������� ����������� => %d \n", duration * 25); }
	if (code == 7252) { printf("\n������� ��� 7252, ����� 18 �����. ��������� ����������� => %d \n", duration * 18); }
	if (code == 7172) { printf("\n������ ��� 7172, ����� 13 �����. ��������� ����������� => %d \n", duration * 13); }
	if (code == 7292) { printf("\n����� ��� 7292, ����� 11 �����. ��������� ����������� => %d \n", duration * 11); }

}

void Task8()
{
	int w = 1 + rand() % 4;

	printf("\n	������ ���� ����� : %d", w);

	switch (w)

	{
	case 1: {  printf("\n	����� ������, �������� �� 1 �� 4 �/�		\n"); } break;
	case 2: {  printf("\n	����� ���������, �������� �� 5-10 �/c		\n"); } break;
	case 3: {  printf("\n	����� �������, �������� �� 9-18 �/c			\n"); } break;
	case 4: {  printf("\n	����� ���������, �������� ������ 19 �/c		\n"); } break;

	default:
		break;
	}

}

void Task9()
{
	int t, v, price=1500, payment, dif, change;
	const int a = 1, b = 2, c = 3;
	
	printf("\n�� ������ ������� ��������� ������������ ��������, � ������ �� ��� �������� ���������� a,b,c : \n");
	printf("\n(1) \"����������\"");
	printf("\n(2) \"� ���� ��������\"");
	printf("\n(3) \"� ���� ��������� ���������\"");
	printf("\n\n��������� �������� 1500 �����\n\n");
	
start:

	printf("������� �������� �������� �� 1 �� 3 : ");
	scanf_s("%d", &t);

	switch (t)

	{
	case 1: {  printf("\n	�������� \"����������\"						\n"); } break;
	case 2: {  printf("\n	�������� \"� ���� ��������\"				\n"); } break;
	case 3: {  printf("\n	�������� \"� ���� ��������� ���������\"		\n"); } break;
	
	default: {printf("\n�������� ��� ��������� ���� ������� ���. ���������� ��� ���...\n"); goto start; }
		break;
	}


start1:

	printf("\n������� ������� ���������� a,b,c: ");
	scanf_s("%d", &v);	
	
	switch (v)

	{
	case a: {  printf("\n	������� ���������� a	\n"); } break;
	case b: {  printf("\n	������� ���������� b	\n"); } break;
	case c: {  printf("\n	������� ���������� c	\n"); } break;

	default: {printf("\n���������� ���� �������� ���������� �������� ���. ���������� ��� ���...\n"); goto start1; }
		break;
	}

	printf("\n������� ������ �����\n");
	scanf_s("%d", &payment);

start2:

	if (payment < price) 
	{ 
		printf("\n�������� ������ ��� %d �����\n", price - payment);
		printf("������� ����������� ����� : ");
		scanf_s("%d", &dif);

		payment = payment + dif;
		goto start2;
	}
	
	if (payment == price) { printf("\n�������� ���� ��������\n"); }
	
	if (payment > price)
	{
		change = payment - price;
		printf("\n�������� ���� �������� � ����� %d \n", change);

		int b1, b2, b3, b4, b5; // b1 ������ 2000  b2 ������ 1000   b3 ������ 500   b4 ������ 200  b5 ������ 100

		if (change >= 2000) { b1 = change / 2000; printf("\n������ �� 2000 - %d ��.\n", b1); change = change - b1 * 2000; }
				
		if (change >= 1000 && change < 2000) { b2 = change / 1000; printf("\n������ �� 1000 - %d ��.\n", b2); change = change - b2 * 1000; }
				
		if (change >= 500 && change < 1000) { b3 = change / 500; printf("\n������ �� 500 - %d ��.\n", b3); change = change - b3 * 500; }
		if (change >= 200 && change < 500) { b4 = change / 200; printf("\n������ �� 200 - %d ��.\n", b4); change = change - b4 * 200; }
		if (change >= 100 && change < 200) { b4 = change / 200; printf("\n������ �� 100 - %d ��.\n", b4); change = change - b4 * 100; }
	}
	


}

int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));

	int task;
	int flag;

start:

	printf("Enter number of task from (1) to (9) => ");
	scanf_s("%d", &task);

	switch (task)
	{
	case 1: {(Task1()); } break;
	case 2: {(Task2()); } break;
	case 3: {(Task3()); } break;
	case 4: {(Task4()); } break;
	case 6: {(Task6()); } break;
	case 7: {(Task7()); } break;
	case 8: {(Task8()); } break;
	case 9: {(Task9()); } break;

	default:
		break;
	}

	{
		printf("\nDo You want to continue? set 0 or 1 =>  ");
		scanf_s("%d", &flag);

		if (flag == 1)
			goto start;

		system("pause");
	}
}