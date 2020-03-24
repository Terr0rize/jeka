
#include <iostream>
#include "FamilyMember.h"
using namespace std;

struct member
{
	double x; //мама
	double y; //папа
	double z; //дочь 
	double k; //сын 

	double raz1;
	double raz2;
	double raz3;
	double raz4;


};
int main()
{
	setlocale(LC_ALL, "Russian");
	member mother, father, dother, son;
	FamilyMember perem;
	double sumras;
	int e;
	do {
		system("pause");
		system("cls");
		
		cout << "1. Заполнить данные о бюджете.  " << endl;
		cout << "2. Вывести данные каждого члена семьи и общий" << endl;
		cout << "3. Текущий расход каждого члена и вывод общего списка расходов" << endl;
		cout << "4. Найти разность бюджета и расходов" << endl;
		cout << "5. Выйти из программы" << endl;
	
		cin >> e;
		switch (e)
		{
		case 1:
		{
			cout << "Заполните данные бюджета о маме, папе, дочери, сыне." << endl;
			cout << "Мама  =  ";
			cin >> mother.x;
			cout << "Папа  =  ";
			cin >> father.y;
			cout << "Дочь  =  ";
			cin >> dother.z;
			cout << "Сын  =   ";
			cin >> son.k;
		}; break;
		case 2:
		{
			cout << "Мама =  " << mother.x << endl;
			cout << "Папа =  " << father.y << endl;
			cout << "Дочь =  " << dother.z << endl;
			cout << "Сын  =  " << son.k << endl;
			perem.budjet(mother.x, father.y, dother.z, son.k);
		}; break;
		case 3: {
			cout << "Текущий расход каждого члена" << endl;

			cout << "Введите расход за отопление мамы  =  ";
			cin >> mother.raz1;
			cout << "Введите расход бензин папы =  ";
			cin >> father.raz2;
			cout << "Введите расход за учебу дочери =  ";
			cin >> dother.raz3;
			cout << "Введите расход за еду сын =  ";
			cin >> son.raz4;
			perem.sumrashod(mother.raz1, father.raz2, dother.raz3, son.raz4);

		}break;
		case 4: {
			perem.budjet(mother.x, father.y, dother.z, son.k);

			perem.sumrashod(mother.raz1, father.raz2, dother.raz3, son.raz4);

			sumras = (mother.x + father.y + dother.z + son.k) - (mother.raz1 + father.raz2 + dother.raz3 + son.raz4);
			cout << "Остаток бюджета =  " << sumras << endl;
		}; break;
		case 5: {
			return 0;
		}; break;
		}
	} while (e != 7);

	return 0;
}





