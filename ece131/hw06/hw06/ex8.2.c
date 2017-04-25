#include<stdio.h>

struct date
{
	int year;
	int month;
	int day;
};

int f(int month, int year);
int g(int month);
int N(struct date d);

int f (int month, int year)
{
	if(month <= 2){
		year -= 1;
	}
	
	return year;
}

int g(int month)
{
	if(month <= 2){
		month+=13;
	}
	else{
		month+=1;
	}
	return month;
}

int N (struct date d)
{
	int N =  1461*f(d.month, d.year) / 4 + 153*g(d.month) /5 + d.day;
  //dates preceeding 03/01/1800 to 02/28/1900
	if(d.year >= 1800 && d.month>=3 && d.day>=1 &&
		d.year <= 1900 && d.month<=2 && d.day<=28){
		N+=1;
}
  //dates preceeding 03/01/1700 to 02/28/1800
else if(d.year >= 1700 && d.month >=3 && d.day >=1 &&
	d.year <= 1800 && d.month <=2 && d.day <=28){
	N+=2;
}

return N;
}

int main(void)
{
	struct date day1, day2;
	int N1, N2;
	printf("Enter the two days you want to find the days elasped between them\n");
	printf("Enter date 1 (MM/DD/YYYY): ");
	scanf("%d/%d/%d", &day1.month, &day1.day, &day1.year);
	N1 = N(day1);
	printf("Enter date 2 (MM/DD/YYYY): ");
	scanf("%d/%d/%d", &day2.month, &day2.day, &day2.year);
	N2 = N(day2);

	printf("N1: %d \nN2: %d \n", N1, N2);
	printf("There are %d days between %d/%d/%d and %d/%d/%d\n", N2-N1,
		day1.month, day1.day, day1.year,
		day2.month, day2.day, day2.year);

	return 0;
}
