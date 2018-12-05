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
	case 1: { printf("\nПонедельник\n"); goto start; } break;
	case 2: { printf("\nВторник\n"); goto start; } break;
	case 3: { printf("\nСреда\n"); goto start; } break;
	case 4: { printf("\nЧетверг\n"); goto start; } break;
	case 5: { printf("\nПятница\n"); goto start; } break;
	case 6: { printf("\nСуббота\n"); goto start; } break;
	case 7: { printf("\nВоскресенье\n"); goto start; } break;

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
	case 1: {  printf("\nПонедельник\n"); } break;
	case 2: {  printf("\nВторник\n"); } break;
	case 3: {  printf("\nСреда\n"); } break;
	case 4: {  printf("\nЧетверг\n"); } break;
	case 5: {  printf("\nПятница\n"); } break;
	case 6: {  printf("\nСуббота\n"); } break;
	case 7: {  printf("\nВоскресенье\n"); } break;

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

	printf("\n1 число => %d\n", n1);
	printf("\n2 число => %d\n", n2);
	printf("\n3 число => %d\n", n3);

	sum = n1 + n2 + n3;
	m = n1 * n2 * n3;

	if (sum >= 10) { printf("Сумма цифр числа яляется двузначным число => %d \n", sum); }
	if (m >= 100) { printf("Произведение  цифр числа яляется трехзначным числом => %d \n", m); }

}

void Task4()
{
	int averdipl = 1 + rand() % 5;
	int s = 0 + rand() % 16;
	int k, r;

	if (s = 0) { printf("\nСтажа нет\n"); k = 1; }
	if (s < 2) { printf("\nСтаж меньше 2 лет\n"); k = 13; }
	if (s >= 2 && s <= 5) { printf("\nстаж от 2 до 5 лет\n"); k = 16; }

	r = averdipl * k;

	printf("Рейтинг бакалавра = %d \n", r);

	if (r >= 45) { printf("Проходной бал 45. Бакалавр принят в магистратуру"); }
}

void Task6()
{
	int d = 1 + rand() % 31;
	int cdate, cdated, cdatem, fm, nfm, dfm, dfmm, dfmd;

	printf("\nК последей дате новолуния 27.08.2018 вы ввели + %d дней\n", d);

	fm = 8 * 31 + 27; // дата последнего новолуния 27.08.2018

	cdate = fm + d;
	cdatem = cdate / 31;
	cdated = cdate % 31;

	printf("\nТекущая дата %d.%d.2018\n", cdated, cdatem);

	nfm = fm + 28;

	dfmm = nfm / 31;	// определяем месяц следующего полнолуния
	dfmd = nfm % 31;	// определяем день месяца следующего полнолуния	

	printf("\nДата следующего полнолуния %d.%d.2018\n", dfmd, dfmm);
	printf("\nСледующее полнолуние через %d дней\n\n", nfm - cdate);

}

void Task7()
{

	int code, duration;

	printf("Введите код города  => ");
	scanf_s("%d", &code);
	printf("Введите длительность переговоров  => ");
	scanf_s("%d", &duration);

	if (code == 7272) { printf("\nАлматы код 7272, тариф 25 тенге. Стоимость переговоров => %d \n", duration * 25); }
	if (code == 7252) { printf("\nШымкент код 7252, тариф 18 тенге. Стоимость переговоров => %d \n", duration * 18); }
	if (code == 7172) { printf("\nАстана код 7172, тариф 13 тенге. Стоимость переговоров => %d \n", duration * 13); }
	if (code == 7292) { printf("\nАктау код 7292, тариф 11 тенге. Стоимость переговоров => %d \n", duration * 11); }

}

void Task8()
{
	int w = 1 + rand() % 4;

	printf("\n	Индекс силы ветра : %d", w);

	switch (w)

	{
	case 1: {  printf("\n	Ветер слабый, скорость от 1 до 4 м/с		\n"); } break;
	case 2: {  printf("\n	Ветер умеренный, скорость от 5-10 м/c		\n"); } break;
	case 3: {  printf("\n	Ветер сильный, скорость от 9-18 м/c			\n"); } break;
	case 4: {  printf("\n	Ветер ураганный, скорость больше 19 м/c		\n"); } break;

	default:
		break;
	}

}

void Task9()
{
	int t, v, price=1500, payment, dif, change;
	const int a = 1, b = 2, c = 3;
	
	printf("\nВы можете выбрать следующие тематические открытки, у каждой по три варианта исполнения a,b,c : \n");
	printf("\n(1) \"Новогодние\"");
	printf("\n(2) \"С Днем Рождения\"");
	printf("\n(3) \"С Днем Защитника Отечества\"");
	printf("\n\nСтоимость открытки 1500 тенге\n\n");
	
start:

	printf("Введите тематику открытки от 1 до 3 : ");
	scanf_s("%d", &t);

	switch (t)

	{
	case 1: {  printf("\n	Открытка \"Новогодняя\"						\n"); } break;
	case 2: {  printf("\n	Открытка \"С Днем Рождения\"				\n"); } break;
	case 3: {  printf("\n	Открытка \"С Днем Защитника Отечества\"		\n"); } break;
	
	default: {printf("\nТематики под введенным Вами номером нет. Попробуйте еще раз...\n"); goto start; }
		break;
	}


start1:

	printf("\nВведите вариант исполнения a,b,c: ");
	scanf_s("%d", &v);	
	
	switch (v)

	{
	case a: {  printf("\n	Вариант исполнения a	\n"); } break;
	case b: {  printf("\n	Вариант исполнения b	\n"); } break;
	case c: {  printf("\n	Вариант исполнения c	\n"); } break;

	default: {printf("\nВведенного Вами варианта исполнения открытки нет. Попробуйте еще раз...\n"); goto start1; }
		break;
	}

	printf("\nВнесите оплату тенге\n");
	scanf_s("%d", &payment);

start2:

	if (payment < price) 
	{ 
		printf("\nОсталось внести еще %d тенге\n", price - payment);
		printf("Внесите недостающую сумму : ");
		scanf_s("%d", &dif);

		payment = payment + dif;
		goto start2;
	}
	
	if (payment == price) { printf("\nВозьмите Вашу открытку\n"); }
	
	if (payment > price)
	{
		change = payment - price;
		printf("\nВозьмите Вашу открытку и сдачу %d \n", change);

		int b1, b2, b3, b4, b5; // b1 купюра 2000  b2 купюра 1000   b3 купюра 500   b4 купюра 200  b5 купюра 100

		if (change >= 2000) { b1 = change / 2000; printf("\nКупюры по 2000 - %d шт.\n", b1); change = change - b1 * 2000; }
				
		if (change >= 1000 && change < 2000) { b2 = change / 1000; printf("\nКупюры по 1000 - %d шт.\n", b2); change = change - b2 * 1000; }
				
		if (change >= 500 && change < 1000) { b3 = change / 500; printf("\nКупюры по 500 - %d шт.\n", b3); change = change - b3 * 500; }
		if (change >= 200 && change < 500) { b4 = change / 200; printf("\nКупюры по 200 - %d шт.\n", b4); change = change - b4 * 200; }
		if (change >= 100 && change < 200) { b4 = change / 200; printf("\nКупюры по 100 - %d шт.\n", b4); change = change - b4 * 100; }
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