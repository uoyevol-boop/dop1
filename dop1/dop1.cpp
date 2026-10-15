#include <iostream>
#include <math.h>

#define SIZE_ARRAY 20
#define MIN_VALUE 1
#define MAX_VALUE 100
#define POPITKI 3

unsigned int OTVET;
unsigned int CLOSE;
unsigned short POINTS;


void pointAdd(int value) {
	POINTS += value;
}

int point(int znach) {
	static unsigned short points = 0;
	printf("Ваше количество баллов - %d", MAX_VALUE - abs(OTVET - znach));
	return MAX_VALUE - abs(OTVET - znach);
}

int diaposon(int znach) {
	if (znach == OTVET) {
		printf("Вы угадали!");
		pointAdd(point(znach));
		return 0;
	}
	if (znach > OTVET) {
		printf("Ответ меньше чем число которое вы ввели");
		return -1;
	}
	if (znach < OTVET) {
		printf("Ответ больше чем число которое вы ввели");
		return 1;
	}
}

int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(0));

	Array arr;

	int otvet;
	char result;
	int numbers[SIZE_ARRAY];
	unsigned char popitka = POPITKI;

	createrRandomArray(numbers, MIN_VALUE, MAX_VALUE);
	
	printf("Угадайте значение максимума.");
	OTVET = max(numbers);

	while (popitka != 0) {
		std::cin >> otvet;
		result = diaposon(otvet);

		switch (result) {
		case 0: pointAdd(otvet);
		case 1: ;
		}
	}



	return 0;
}