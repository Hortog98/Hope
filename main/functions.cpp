#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "fstream"
#include <string>
#include <math.h>
#include <algorithm>
#include <windows.h>
#include <cstdio>
#include <conio.h>
#include <time.h>
#include <locale.h>
#include "functions.h"
using namespace std;

void ramka(){//функция рисующая рамку
	setlocale(0,"");
	point2.X = 0;//определяем координаты x и н куда перенесем курсор в консоли
	point2.Y = 9;
	SetConsoleCursorPosition(hout, point2);//переносим курсор
	for (int i = 1; i <= 80; ++i){//рисуем верхнюю линию
		printf("%c", '_');
	}
	point2.Y = 20;
	SetConsoleCursorPosition(hout, point2);//переносим курсор
	for (int i = 1; i <= 80; ++i){//рисуем нижнюю линию
		printf("%c", '_');
	}
}

int modul(int x){//функция модуля
	if (x < 0)
		return -x;
	return x;
}
void result(int anserr){//оцениваем результат
	if (anserr>17) cout << "Train more!";
	else if (anserr > 12) cout << "You can do batter!";
	else if (anserr >= 5) cout << "Not bad!";
	else if (anserr == 4) cout << "Wooden medal!";
	else if (anserr == 3) cout << "Bronze medal!";
	else if (anserr == 2) cout << "Silver medal!";
	else if (anserr == 1) cout << "Gold medal!";
	else if (anserr == 0) cout << "Brilliant!";
}

int result_for_tests(int anserr){//оцениваем результат
	if (anserr>17) return 1;
	else if (anserr > 12) return 2;
	else if (anserr >= 5) return 3;
	else if (anserr == 4) return 4;
	else if (anserr == 3) return 5;
	else if (anserr == 2) return 6;
	else if (anserr == 1) return 7;
	else if (anserr == 0) return 8;
}
