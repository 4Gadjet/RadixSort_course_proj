#include <cmath>
#include <iostream>
#include <fstream>
#include <windows.h>
#include <conio.h>
#include <string>
#include <ctime>
#include <random>
#include <algorithm>
#include <iomanip>
//#include "модуль1.h"
//#include "модуль2.cpp"
using namespace std;


void teoreticheskiy()
{
	string str;
	int i = 0, page = 1;
	ifstream file;
	while (page > 0 && page < 5)
	{
		string str;

		if (page == 1)
		{
			file.open("theory.txt");
			while (!file.is_open())
			{
				cout << "Файл с теоретическим материалом поврежден или отсутствует!";
			}
			system("cls");
			while (getline(file, str))
			{
				if (str.find("@1")) 
				{
					if (str.find("  ")) cout << endl;
					cout << str;
				}
				else break;
			}
			cout << "\n\n\nЧтобы перейти на следующую страницу, введите 2\nДля возврата в меню, введите 0" << endl;
			int choise = 0;
			cin >> choise;
			if (choise == 2) page++;
			if (choise == 0) page += 300;
			while (choise != 2 && choise != 0)
			{
				cout << "Некорректный ввод!";
				cout << "\nЧтобы перейти на следующую страницу, введите 2\nДля возврата в меню, введите 0" << endl;
				cin >> choise;
				if (choise == 2) page++;
				if (choise == 0) page = 300;
			}
			file.close();
		}
		if (page == 4)
		{
			file.open("theory.txt");
			system("cls");
			while (!file.is_open())
			{
				cout << "Файл с теоретическим материалом поврежден или отсутствует!";
			}
			while (getline(file, str))
			{

				if (str.find("@3"));
				else break;
			}
				while (getline(file, str))
				{

					if (str.find("@4"))
					{
						if (str.find("  ")) cout << endl;
						cout << str;
					}
					else break;
				}
			cout << "\n\n\nЭто последняя страница\nДля возвращения на предыдущую введите 1\nДля возврата в меню, введите 0" << endl;
			int choise = 0;
			cin >> choise;
			if (choise == 1) page--;
			if (choise == 0) page = 300;
			while (choise < 0 || choise > 1)
			{
				cout << "Некорректный ввод!";
				cout << "\nЭто последняя страница\nДля возвращения на предыдущую введите 1\nДля возврата в меню, введите 0" << endl;
				cin >> choise;
				if (choise == 1) page--;
				if (choise == 0) page = 300;
			}
			file.close();
		}
		if (page == 2)
		{
			file.open("theory.txt");
			while (!file.is_open())
			{
				cout << "Файл с теоретическим материалом поврежден или отсутствует!";
			}
			system("cls");
			while (getline(file, str)) 
			{
				if (str.find("@1"));
				else break;
			}
			while (str.find("@2"))
			{

				while (getline(file, str))
				{
					if (str.find("@2"))
					{
						if (str.find("  ")) cout << endl;
						cout << str;
					}
					else break;
				}
			}
			cout << "\n\n\nЧтобы перейти на следующую страницу, введите 2\nДля возвращения на предыдущую введите 1\nДля возврата в меню, введите 0" << endl;
			int choise = 0;
			cin >> choise;
			if (choise == 2) page++;
			if (choise == 1) page--;
			if (choise == 0) page = 300;
			while (choise < 0 || choise > 2)
			{
				cout << "Некорректный ввод!";
				cout << "\nЧтобы перейти на следующую страницу, введите 2\nДля возвращения на предыдущую введите 1\nДля возврата в меню, введите 0" << endl;
				cin >> choise;
				if (choise == 2) page++;
				if (choise == 1) page--;
				if (choise == 0) page = 300;
			}
		}
				file.close();
				if (page == 3)
				{
					file.open("theory.txt");
					while (!file.is_open())
					{
						cout << "Файл с теоретическим материалом поврежден или отсутствует!";
					}
					while (getline(file, str))
					{
						if (str.find("@2"));
						else break;
					}
					system("cls");
					while (getline(file, str))
					{
						if (str.find("@3"))
						{
							if (str.find("  ")) cout << endl;
							cout << str;
						}
						else break;
					}
					cout << "\n\n\nЧтобы перейти на следующую страницу, введите 2\nДля возвращения на предыдущую введите 1\nДля возврата в меню, введите 0" << endl;
					int choise = 0;
					cin >> choise;
					if (choise == 2) page++;
					if (choise == 1) page--;
					if (choise == 0) page = 300;
					while (choise < 0 || choise > 2)
					{
						cout << "Некорректный ввод!";
						cout << "\nЧтобы перейти на следующую страницу, введите 2\nДля возвращения на предыдущую введите 1\nДля возврата в меню, введите 0" << endl;
						cin >> choise;
						if (choise == 2) page++;
						if (choise == 1) page--;
						if (choise == 0) page = 300;
					}
					file.close();

				}
	}

	file.close();
}

int EnterType() {
	cout << "\t\t***РЕЖИМ ДЕМОНСТРАЦИИ***\n\n" << endl;
	int choise;
	cout << "\nВыберите режим заполнения массива:\n1) Генерация случайных чисел\n2) Ручной ввод каждого значения\n0) Возврат в меню" << endl;
	cin >> choise;
	while (choise < 0 || choise >= 3) 
	{
		cout << "Некорректный ввод! Повторите попытку!\n" << endl;
		cout << "\nВыберите режим заполнения массива:\n1) Генерация случайных чисел\n2) Ручной ввод каждого значения\n0) Возврат в меню" << endl;
		cin >> choise;
	}
	return choise;
}

void Display_vec(vector <int> name)
{
	for (int i = 0; i < name.size(); i++)
	{
		cout << i + 1 << ") " << setw(3) <<  name[i] << endl;
	}
}

void Display(int* Array, int count)
{
	for (int i = 0; i < count; i++)
	{
		cout << i+1 << ") " <<setw(3) <<  Array[i] << endl;
	}

}

void Generation (int*& Array, int count)
{
	int a, b;
	cout << "Введите границы генерации a < b (a >= 0!)\nВведите границу а: ";
	cin >> a;
	while (a < 0) 
	{
		cout << "Некорректно введено значение!\na < b (a > 0!)\nВведите границу а: ";
		cin >> a;
	}
	cout << "a < b (a > 0 и b < 1000)\nВведите границу b:";
	cin >> b;
	while (b <= a || b >= 1000)
	{
		cout << "Некорректно введено значение!\nВведите границу b\na < b (a > 0 и b < 1000): ";
		cin >> b;
	}
	mt19937 gen(time(0));
	for (int i = 0; i <= count; i++)
	{
		uniform_int_distribution<> uid(a, b);
		Array[i] = uid(gen);
	}
	system("cls");
	cout << "Текущие границы генерации: a = " << a << "; b = " << b << endl;
}

void ManualInput(int*& Array, int count)
{
	cout << "Вводите целые числа строго больше 0, но меньше 1000!" << endl;
	for (int i = 0; i < count; i++)
	{
		cout << "Введите значение элемента №" << i + 1 << " = ";
		cin >> Array[i];
		while (Array[i] <= 0 || Array[i] >= 1000)
		{
			cout << "Некорректный ввод! Введите целое число больше 0: ";
			cin >> Array[i];
		}
	}
}

void MSD_type(int*& Array, int count, int max_radix)
{
	char ch;
	vector <int> One;
	int t;


	int buf_rad = 0;




		if (max_radix == 3)
		{
			t = 1 + max_radix;
			system("cls");
			cout << "\t\t***РЕЖИМ ДЕМОНСТРАЦИИ***\n\n" << endl;
			cout << "Сейчас будет произведена сортировка по " << buf_rad + 1 << " разряду" << endl;
			for (int i = 0; i <= t; i++) cout << " ";
			cout << "|" << endl;
			for (int i = 0; i <= t; i++) cout << " ";
			cout << "V" << endl;
			Display(Array, count);

			cout << "\n\nНажмите любую клавишу чтобы продолжить";
			ch = _getch();
			for (int i = 0; i < count; i++)
			{
				One.push_back(Array[i]);
			}
			system("cls");
			cout << "\t\t***РЕЖИМ ДЕМОНСТРАЦИИ***\n\n" << endl;

			for (int cycle = 0; cycle < count; cycle++)
			{
				for (int i = 0; i < count - 1; i++)
				{
					if ((One[i] % 10) > (One[i + 1] % 10))
					{
						int buf = One[i + 1];
						One[i + 1] = One[i];
						One[i] = buf;
					}
				}
			}
			cout << "Отсортируем массив по возрастанию единиц...\nМассив отсортирован!\n\n" <<endl;
			Display_vec(One);
			cout << "\n\nНажмите любую клавишу чтобы перейти к следующему разряду";
			ch = _getch();
			t--;

			system("cls");
			cout << "\t\t***РЕЖИМ ДЕМОНСТРАЦИИ***\n\n" << endl;
			cout << "Сейчас будет произведена сортировка по " << buf_rad + 2 << " разряду" << endl;
			for (int i = 0; i <= t; i++) cout << " ";
			cout << "|" << endl;
			for (int i = 0; i <= t; i++) cout << " ";
			cout << "V" << endl;
	
			Display_vec(One);
			cout << "\n\nНажмите любую клавишу, чтобы продолжить!";
			ch = _getch();


			system("cls");
			cout << "\t\t***РЕЖИМ ДЕМОНСТРАЦИИ***\n\n" << endl;
			cout << "Отсортируем массив по возрастанию десятков...\nМассив отсортирован!\n\n"<< endl;
			
			for (int cycle = 0; cycle < count; cycle++)
			{
				for (int i = 0; i < count - 1; i++)
				{
					if ((One[i] % 100) > (One[i + 1] % 100))
					{
						int buf = One[i + 1];
						One[i + 1] = One[i];
						One[i] = buf;
					}
				}
			}
			Display_vec(One);
			cout << "\n\nНажмите любую клавишу чтобы перейти к следующему разряду";
			ch = _getch();
			t--;

			system("cls");
			cout << "\t\t***РЕЖИМ ДЕМОНСТРАЦИИ***\n\n" << endl;
			cout << "Сейчас будет произведена сортировка по " << buf_rad + 3 << " разряду" << endl;
			for (int i = 0; i <= t; i++) cout << " ";
			cout << "|" << endl;
			for (int i = 0; i <= t; i++) cout << " ";
			cout << "V" << endl;
			Display_vec(One);
			cout << "\n\nНажмите любую клавишу, чтобы продолжить!";
			ch = _getch();


			system("cls");
			cout << "\t\t***РЕЖИМ ДЕМОНСТРАЦИИ***\n\n" << endl;
			cout << "Отсортируем массив по возрастанию сотен...\nМассив отсортирован!\n\n" << endl;

			for (int cycle = 0; cycle < count; cycle++)
			{
				for (int i = 0; i < count - 1; i++)
				{
					if ((One[i] / 100) > (One[i + 1] / 100))
					{
						int buf = One[i + 1];
						One[i + 1] = One[i];
						One[i] = buf;
					}
				}
			}
			Display_vec(One);

		}
		if (max_radix == 2)
		{
			t = 2 + max_radix;
			for (int i = 0; i < count; i++)
			{
				One.push_back(Array[i]);
			}
			system("cls");
			cout << "\t\t***РЕЖИМ ДЕМОНСТРАЦИИ***\n\n" << endl;
			cout << "Сейчас будет произведена сортировка по " << buf_rad + 1 << " разряду" << endl;
			for (int i = 0; i <= t; i++) cout << " ";
			cout << "|" << endl;
			for (int i = 0; i <= t; i++) cout << " ";
			cout << "V" << endl;
			Display_vec(One);
			for (int cycle = 0; cycle < count; cycle++)
			{
				for (int i = 0; i < count - 1; i++)
				{
					if ((One[i] % 10) > (One[i + 1] % 10))
					{
						int buf = One[i + 1];
						One[i + 1] = One[i];
						One[i] = buf;
					}
				}
			}
			cout << "\n\nНажмите любую клавишу чтобы продолжить";
			ch = _getch();
			t--;
			system("cls");
			cout << "\t\t***РЕЖИМ ДЕМОНСТРАЦИИ***\n\n" << endl;
			cout << "Отсортируем массив по возрастанию единиц...\nМассив отсортирован!\n\n" << endl;
			Display_vec(One);
			cout << "\n\nНажмите любую клавишу чтобы перейти к следующему разряду";
			ch = _getch();

			system("cls");
			cout << "\t\t***РЕЖИМ ДЕМОНСТРАЦИИ***\n\n" << endl;
			cout << "Сейчас будет произведена сортировка по " << buf_rad + 2 << " разряду" << endl;
			for (int i = 0; i <= t; i++) cout << " ";
			cout << "|" << endl;
			for (int i = 0; i <= t; i++) cout << " ";
			cout << "V" << endl;

			Display_vec(One);
			cout << "\n\nНажмите любую клавишу, чтобы продолжить!";
			ch = _getch();


			system("cls");
			cout << "\t\t***РЕЖИМ ДЕМОНСТРАЦИИ***\n\n" << endl;
			cout << "Отсортируем массив по возрастанию десятков...\nМассив отсортирован!\n\n" << endl;

			for (int cycle = 0; cycle < count; cycle++)
			{
				for (int i = 0; i < count - 1; i++)
				{
					if ((One[i] % 100) > (One[i + 1] % 100))
					{
						int buf = One[i + 1];
						One[i + 1] = One[i];
						One[i] = buf;
					}
				}
			}
			Display_vec(One);

		}
		if (max_radix == 1)
		{
			system("cls");
			cout << "\t\t***РЕЖИМ ДЕМОНСТРАЦИИ***\n\n" << endl;

			cout << "Поскольку, максимальный разряд элементов равен единице, мы просто сортируем элементы по возрастанию\n\n" << endl;
			sort(One.begin(), One.end());
			Display_vec(One);
		}
	cout << "\n\nНажмите любую клавишу чтобы продолжить";
	ch = _getch();

	system("cls");
	cout << "\t\t***РЕЖИМ ДЕМОНСТРАЦИИ***\n\n" << endl;

	cout << "Процесс поразрядной сортировки завершён!\nБыл использован тип сортировки MSD\nИзначальный массив чисел (до сортировки):\n " << endl;
	Display(Array, count);
	cout << "\nОтсортированный массив: " << endl;
	Display_vec(One);
	cout << "\n\nНажмите любую клавишу чтобы вернуться в меню";
	ch = _getch();
}

void LSD_type(int*& Array, int count, int max_radix)
{
	char ch;
	vector <int> One;
	int t;

	int buf_rad = 0;




	if (max_radix == 3)
	{
		t = -1 + max_radix;
		system("cls");
		cout << "\t\t***РЕЖИМ ДЕМОНСТРАЦИИ***\n\n" << endl;
		cout << "Сейчас будет произведена сортировка по " << buf_rad + 3 << " разряду" << endl;
		for (int i = 0; i <= t; i++) cout << " ";
		cout << "|" << endl;
		for (int i = 0; i <= t; i++) cout << " ";
		cout << "V" << endl;
		Display(Array, count);

		cout << "\n\nНажмите любую клавишу чтобы продолжить";
		ch = _getch();
		for (int i = 0; i < count; i++)
		{
			One.push_back(Array[i]);
		}
		system("cls");
		cout << "\t\t***РЕЖИМ ДЕМОНСТРАЦИИ***\n\n" << endl;

		for (int cycle = 0; cycle < count; cycle++)
		{
			for (int i = 0; i < count - 1; i++)
			{
				if ((One[i] / 100) > (One[i + 1] / 100))
				{
					int buf = One[i + 1];
					One[i + 1] = One[i];
					One[i] = buf;
				}
			}
		}
		cout << "Отсортируем массив по возрастанию сотен...\nМассив отсортирован!\n\n" << endl;
		Display_vec(One);
		cout << "\n\nНажмите любую клавишу чтобы перейти к следующему разряду";
		ch = _getch();
		t++;

		system("cls");
		cout << "\t\t***РЕЖИМ ДЕМОНСТРАЦИИ***\n\n" << endl;
		cout << "Сейчас будет произведена сортировка по " << buf_rad + 2 << " разряду" << endl;
		for (int i = 0; i <= t; i++) cout << " ";
		cout << "|" << endl;
		for (int i = 0; i <= t; i++) cout << " ";
		cout << "V" << endl;

		Display_vec(One);
		cout << "\n\nНажмите любую клавишу, чтобы продолжить!";
		ch = _getch();


		system("cls");
		cout << "\t\t***РЕЖИМ ДЕМОНСТРАЦИИ***\n\n" << endl;
		cout << "Отсортируем массив по возрастанию десятков...\nМассив отсортирован!\n\n" << endl;

		for (int cycle = 0; cycle < count; cycle++)
		{
			for (int i = 0; i < count - 1; i++)
			{
				if ((One[i] % 100) > (One[i + 1] % 100))
				{
					int buf = One[i + 1];
					One[i + 1] = One[i];
					One[i] = buf;
				}
			}
		}
		Display_vec(One);
		cout << "\n\nНажмите любую клавишу чтобы перейти к следующему разряду";
		ch = _getch();
		t++;

		system("cls");
		cout << "\t\t***РЕЖИМ ДЕМОНСТРАЦИИ***\n\n" << endl;
		cout << "Сейчас будет произведена сортировка по " << buf_rad + 1 << " разряду" << endl;
		for (int i = 0; i <= t; i++) cout << " ";
		cout << "|" << endl;
		for (int i = 0; i <= t; i++) cout << " ";
		cout << "V" << endl;
		Display_vec(One);
		cout << "\n\nНажмите любую клавишу, чтобы продолжить!";
		ch = _getch();


		system("cls");
		cout << "\t\t***РЕЖИМ ДЕМОНСТРАЦИИ***\n\n" << endl;
		cout << "Отсортируем массив по возрастанию единиц...\nМассив отсортирован!\n\n" << endl;

		for (int cycle = 0; cycle < count; cycle++)
		{
			for (int i = 0; i < count - 1; i++)
			{
				if ((One[i] % 10) > (One[i + 1] % 10))
				{
					int buf = One[i + 1];
					One[i + 1] = One[i];
					One[i] = buf;
				}
			}
		}
		Display_vec(One);

	}
	if (max_radix == 2)
	{
		t = 1 + max_radix;
		for (int i = 0; i < count; i++)
		{
			One.push_back(Array[i]);
		}
		system("cls");
		cout << "\t\t***РЕЖИМ ДЕМОНСТРАЦИИ***\n\n" << endl;
		cout << "Сейчас будет произведена сортировка по " << buf_rad + 2 << " разряду" << endl;
		for (int i = 0; i <= t; i++) cout << " ";
		cout << "|" << endl;
		for (int i = 0; i <= t; i++) cout << " ";
		cout << "V" << endl;
		Display_vec(One);
		for (int cycle = 0; cycle < count; cycle++)
		{
			for (int i = 0; i < count - 1; i++)
			{
				if ((One[i] % 100) > (One[i + 1] % 100))
				{
					int buf = One[i + 1];
					One[i + 1] = One[i];
					One[i] = buf;
				}
			}
		}
		cout << "\n\nНажмите любую клавишу чтобы продолжить";
		ch = _getch();
		t++;
		system("cls");
		cout << "\t\t***РЕЖИМ ДЕМОНСТРАЦИИ***\n\n" << endl;
		cout << "Отсортируем массив по возрастанию десятков...\nМассив отсортирован!\n\n" << endl;
		Display_vec(One);
		cout << "\n\nНажмите любую клавишу чтобы перейти к следующему разряду";
		ch = _getch();

		system("cls");
		cout << "\t\t***РЕЖИМ ДЕМОНСТРАЦИИ***\n\n" << endl;
		cout << "Сейчас будет произведена сортировка по " << buf_rad + 1 << " разряду" << endl;
		for (int i = 0; i <= t; i++) cout << " ";
		cout << "|" << endl;
		for (int i = 0; i <= t; i++) cout << " ";
		cout << "V" << endl;

		Display_vec(One);
		cout << "\n\nНажмите любую клавишу, чтобы продолжить!";
		ch = _getch();


		system("cls");
		cout << "\t\t***РЕЖИМ ДЕМОНСТРАЦИИ***\n\n" << endl;
		cout << "Отсортируем массив по возрастанию единиц...\nМассив отсортирован!\n\n" << endl;

		for (int cycle = 0; cycle < count; cycle++)
		{
			for (int i = 0; i < count - 1; i++)
			{
				if ((One[i] % 10) > (One[i + 1] % 10))
				{
					int buf = One[i + 1];
					One[i + 1] = One[i];
					One[i] = buf;
				}
			}
		}
		Display_vec(One);

	}
	if (max_radix == 1)
	{
		system("cls");
		cout << "\t\t***РЕЖИМ ДЕМОНСТРАЦИИ***\n\n" << endl;

		cout << "Поскольку, максимальный разряд элементов равен единице, мы просто сортируем элементы по возрастанию\n\n" << endl;
		sort(One.begin(), One.end());
		Display_vec(One);
	}
	cout << "\n\nНажмите любую клавишу чтобы продолжить";
	ch = _getch();

	system("cls");
	cout << "\t\t***РЕЖИМ ДЕМОНСТРАЦИИ***\n\n" << endl;

	cout << "Процесс поразрядной сортировки завершён!\nБыл использован тип сортировки LSD\nИзначальный массив чисел (до сортировки):\n " << endl;
	Display(Array, count);
	cout << "\nОтсортированный массив: " << endl;
	Display_vec(One);
	cout << "\n\nНажмите любую клавишу чтобы вернуться в меню";
	ch = _getch();
}

void Sort(int*& Array, int& count)
{
	system("cls");
	cout << "\t\t***РЕЖИМ ДЕМОНСТРАЦИИ***\n\n" << endl;
	cout << "Прежде всего нам необходимо подсчитать максимальное количество разрядов.\nДля этого найдем наибольшее число в исходном массиве" << endl;
	Display(Array, count);
	int max_chislo = 0, max_radix = 0;
	for (int i = 0; i < count; i++)
	{
		if (max_chislo < Array[i]) max_chislo = Array[i];
	}
	cout << "\nМаксимальное число найдено: " << max_chislo;
	for (max_chislo; max_chislo > 0; max_radix++)
	{
		if (max_chislo > 9) max_chislo /= 10;
		else max_chislo = 0;
	}
	cout << "\n\nЕго количество разрядов = " << max_radix << endl;
	cout << "\nКакой режим сортировки желаете использовать?\n1) MSD (Восходящая)\n2) LSD (Нисходящая)" << endl;
	int type = 0;
	cin >> type;
	while (type < 1 && type > 2)
	{
		cout << "\nНекорректный ввод! \nКакой режим сортировки желаете использовать?\n1) MSD (Восходящая)\n2) LSD (Нисходящая)" << endl;
		cin >> type;
	}
	cout << "\n\nНажмите любую клавишу чтобы продолжить";
	char ch = _getch();
	system("cls");
	cout << "\t\t***РЕЖИМ ДЕМОНСТРАЦИИ***\n\n" << endl;
	switch (type)
	{
	case 1:
		MSD_type(Array, count, max_radix);
		break;
	case 2:
		LSD_type(Array, count, max_radix);
		break;
	}
}

void demonstration()
{
	system("cls");
	int count = 0;
	int* Array;
	char ch;
	switch (EnterType())
	{
	case 1:
		count = 0;
		system("cls");
		cout << "Введите количество элементов, которые будут отсортированы [2; 10]: ";
		cin >> count;
		while (count <= 1 || count > 10)
		{
			system("cls");
			cout << "Введите количество элементов, которые будут отсортированы [2; 10]: ";
			cin >> count;
		}
		system("cls");
		Array = new int[count];
		Generation(Array, count);
		system("cls");
		cout << "Сгенерированный массив (не отсортирован):" << endl;
		Display(Array, count);
		cout << "\n\nНажмите любую клавишу чтобы продолжить";
		ch = _getch();
		Sort(Array, count);
		break;
		case 2:
		count = 0;
		system("cls");
		cout << "Введите количество элементов, которые будут отсортированы [2; 10]: ";
		cin >> count;
		while (count <= 1 || count > 10)
		{
			system("cls");
			cout << "Введите количество элементов, которые будут отсортированы [2; 10]: ";
			cin >> count;
		}
		system("cls");
		Array = new int[count];
		ManualInput(Array, count);
		system("cls");
		cout << "Сгенерированный массив (не отсортирован):" << endl;
		Display(Array, count);
		cout << "\n\nНажмите любую клавишу чтобы продолжить";
		ch = _getch();
		Sort(Array, count);
		break;

	
	}

}

bool Check_file()
{
	string q;
	int i = 0;
	ifstream file;
	file.open("q&a.txt");
	while (!file.is_open())
	{
		cout << "Файл с базой вопросов поврежден или отсутствует!";
		return false;
	}
	return true;
}

void testirovanie()
{
	system("cls");
	cout << "\t\t***РЕЖИМ ТЕСТИРОВАНИЯ***\n\n" << endl;
	cout << "На экран поочерёдно будут выведены 5 вопрос, для каждого из них есть 4 варианта ответа\n";
	cout << "правильный вариант ответа ОДИН. Внимательно читайте текст вопроса и выбирайте верный по вашему мнению номер ответа.\n";
	cout << "В конце тестирования вы сможете узнать свою оценку. Подробный список вопросов и правильности ответов будет выведен\n";
	cout << "в файл \"test_rslt.txt\", который можно найти в директории, откуда была запущена программа." << endl;
	cout << "\n\n\nГотовы начать тестирование?\n1) Начать\n0) Вернуться в меню" << endl;

	char ch;
	int work;
	cin >> work;
	while (work != 0 && work != 1)
	{
		system("cls");
		cout << "\t\t***РЕЖИМ ТЕСТИРОВАНИЯ***\n\n" << endl;
		cout << "На экран поочерёдно будут выведены 5 вопрос, для каждого из них есть 4 варианта ответа\n";
		cout << "правильный вариант ответа ОДИН. Внимательно читайте текст вопроса и выбирайте верный по вашему мнению номер ответа.\n";
		cout << "В конце тестирования вы сможете узнать свою оценку. Подробный список вопросов и правильности ответов будет выведен\n";
		cout << "в файл \"test_rslt.txt\", который можно найти в директории, откуда была запущена программа." << endl;
		cout << "\n\n\nГотовы начать тестирование?\n1) Начать\n0) Вернуться в меню" << endl;
		cin >> work;
	}
	if (work == 1)
	{
		int number = 0, correct_answer = 0, answer = 0;
		int questions = 1, count = 0, b = 0, correct = 0;
		ifstream file;
		ofstream rslt;
		if (Check_file() == true)
		{
			char sim;
			string q;
			rslt.open("test_rslt.txt");
			file.open("q&a.txt");
			while (!file.eof())
			{
				while (file.get(sim))
				{
					if (sim == ('@'))
					{
						b++;
					}
				}
			}
			file.close();
			vector <int> Q;
			for (int i = 0; i < b; i++)
			{
				Q.push_back(i);
			}
			count = b;

			while (work != 0 && questions <= 5)
			{
				system("cls");
				cout << "\t\t***РЕЖИМ ТЕСТИРОВАНИЯ***\n\n" << endl;
				mt19937 gen(time(0));
				uniform_int_distribution<> uid(0, Q.size()-1);
				number = uid(gen);
				//number = Q[number] - 1;
				file.open("q&a.txt");
				string stream;
				
				q = "@";

				q.push_back((char)(Q[number] + '0'));
				while (getline(file, stream))
				{
					if (!stream.find(q))
					break;
				}
				while(getline(file, stream))
				{
					if (stream.find("="))
					{
						cout << stream << endl;
					}
					else {
						stream.erase(stream.size() - 2, stream.size() - 1);
						correct_answer = stoi(stream);
						break;
						
					}
				}

				cout << "\n\nВведите ответ на вопрос: ";
				cin >> answer;
				cout << "TEST: " << answer <<  "  " << number << "  " << correct_answer << endl;
				rslt << number+1 << " - ";
				if (answer == correct_answer)
				{
					correct++;
					rslt << answer << " - Ответ верный!" << endl;
					cout << answer << " - Ответ верный!" << endl;
					cout << "\nНажмите любую клавишу, чтобы продолжить";
					char ch = _getch();
				}
				if (answer != correct_answer)
				{
					rslt << answer << " - Ответ неверный!" << endl;
					cout << answer << " - Ответ неверный!" << endl;
					cout << "\nНажмите любую клавишу, чтобы продолжить";
					char ch = _getch();
				}

				Q.erase(Q.begin() + number);
				questions++;
				file.close();
				system("cls");
				cout << "\t\t***РЕЖИМ ТЕСТИРОВАНИЯ***\n\n" << endl;
				cout << "Желаете продолжить?\n1) Продолжить\n0) Прервать тестирование";
				cin >> work;
				while (work !=0 && work != 1)
				{
					system("cls");
					cout << "\t\t***РЕЖИМ ТЕСТИРОВАНИЯ***\n\n" << endl;
					cout << "Желаете продолжить?\n1) Продолжить\n0) Прервать тестирование";
					cin >> work;
				}
			}
		}
		file.open("test_rslt.txt");
		system("cls");
		cout << "\t\t***РЕЖИМ ТЕСТИРОВАНИЯ***\n\n" << endl;
		if (questions >= 5)
		{
			if (correct == 5) 
			{
				rslt << "\nОценка: отлично!" << endl;
				cout << "\nОценка: отлично!" << endl;
			}
			if (correct == 4)
			{
				rslt << "\nОценка: хорошо!" << endl;
				cout << "\nОценка: хорошо!" << endl;
			}
			if (correct == 3)
			{
				rslt << "\nОценка: удовлетворительно!" << endl;
				cout << "\nОценка: удовлетворительно!" << endl;
			}
			if (correct < 3)
			{
				rslt << "\nОценка: неудовлетворительно!" << endl;
				cout << "\nОценка: неудовлетворительно!" << endl;
			}
		}
		if (questions < 5)
		{
			rslt << "\nТЕСТИРОВАНИЕ ПРЕРВАНО ПО ЖЕЛАНИЮ ПОЛЬЗОВАТЕЛЯ!";
			cout << "\nТЕСТИРОВАНИЕ ПРЕРВАНО ПО ЖЕЛАНИЮ ПОЛЬЗОВАТЕЛЯ!";
		}
		file.close();
		rslt.close();
		cout << "\nНажмите любую клавишу, чтобы продолжить";
		char ch = _getch();
	}
	if (work == 0)
	{

	}
}

bool Check_password()
{
	system("cls");
	cout << "Данный раздел предоставлени для редактирования базы файлов для тестирования по теоретической части.";
	cout << "\nДля доступа к редактированию файла с теорией и базы вопросов, а также просмотра результатов необходимо ввести пароль\nВведите пароль: ";
	int pass = 22324;
	int your = 0;
	cin >> your;
	if (your == pass) return true;
	else return false;
}

void administration()
{
	char ch;
	int work = 1;
	while (!Check_password() && work == 1)
	{
		cout << "\n\n\nПароль неверный!\n1) Повторить попытку\n0) Вернуться в меню";
		cin >> work;
	}
	if (work == 0);
	if (work == 1)
	{
		int choise = 1;
		while (choise != 0)
		{
			system("cls");
			cout << "В данном режиме у Вас есть возможность:\n";
			cout << "1) Редактировать базу вопросов\n";
			cout << "2) Редактировать теоретический материал\n";
			cout << "3) Просмотреть последний результат тестирования\n";
			cout << "0) Вернуться в меню\n\n\n";
			cout << "Введите пункт меню: ";
			cin >> choise;
			while (choise > 3 || choise < 0)
			{
				system("cls");
				cout << "В данном режиме у Вас есть возможность:\n";
				cout << "1) Редактировать базу вопросов\n";
				cout << "2) Редактировать теоретический материал\n";
				cout << "3) Просмотреть последний результат тестирования\n";
				cout << "0) Вернуться в меню\n\n\n";
				cout << "Введите пункт меню: ";
				cin >> choise;
			}
			switch (choise)
			{
			case 1:
				system("cls");
				cout << "Вы можете отредактировать базу вопросов и ответов.\n";
				cout << "Файл будет очищен, после чего вам предстоит ввести строки с вопросами, вариантами ответов и номером правильного ответа.\n";
				cout << "Номер вопроса задается в формате \"@1\", где собачка - обозначение вопроса и 1 - его номер.\n";
				cout << "Затем прописывается текст вопроса и 4 варианта ответа. После этого необходимо обозначить правильный ответ\n";
				cout << "Для этого необходимо ввести \"=1\", где = - обозначение ответа, 1 - номер верного ответа\n\n\n";
				cout << "1) Продолжить\n0) Вернуться" << endl;
				cin >> work;
				if (work == 0) break;
				if (work == 1)
				{
					ofstream test;
					test.open("q&a.txt");
					while (!test.is_open())
					{
						cout << "ФАЙЛ С БАЗОЙ ДАННЫХ ПОВРЕЖДЕН ИЛИ ОТСУТСТВУЕТ!";
						ch = _getch();
						break;
					}
					while (work == 1)
					{
						system("cls");
						cout << "Введите строку, которую необходимо записать:\n";
						/*ЧИНИТЬ ЗАПИСЬ В ФАЙЛ*/
					/*	char str;
						cin >> str;
						test << str << endl;*/
						cout << "\nСтрока записана! Продолжить?\n1) Продолжить\n0) Завершить запись";
						cin >> work;
					}
				}

				break;
			case 2:
				system("cls");
				cout << "Вы можете отредактировать теоретический материал.\n";
				cout << "Файл будет очищен, после чего вам предстоит ввести строки с переносом путём добавления двух пробелов в конце строки.\n";
				cout << "Теоретический материал должен быть разбит на страницы в формате: Сначала записывается текст страницы, а затем \n";
				cout << "\"@1\", где собачка - обозначение страницы и 1 - её номер. Затем прописывается текст следующей страницы и последующий переход далее\n";
				cout << "В файле допускается создание до четырёх страниц с теоретическим материалом\n\n\n";
				cout << "1) Продолжить\n0) Вернуться" << endl;
				cin >> work;
				if (work == 0) break;
				if (work == 1)
				{
					ofstream file;
					file.open("theory.txt");
					while (!file.is_open())
					{
						cout << "ФАЙЛ С БАЗОЙ ДАННЫХ ПОВРЕЖДЕН ИЛИ ОТСУТСТВУЕТ!";
						ch = _getch();
						break;
					}
					while (work == 1)
					{
						system("cls");
						cout << "Введите строку, которую необходимо записать:\n";
						/*ЧИНИТЬ ЗАПИСЬ В ФАЙЛ*/
					/*	char str;
						cin >> str;
						test << str << endl;*/
						cout << "\nСтрока записана! Продолжить?\n1) Продолжить\n0) Завершить запись";
						cin >> work;
					}
				}
				break;
			case 3:
				system("cls");
				ifstream rslt;
				char str;
				rslt.open("test_rslt.txt");
				while (!rslt.is_open())
				{
					cout << "ФАЙЛ С РЕЗУЛЬТАТАМИ ПОВРЕЖДЕН ИЛИ ОТСУТСТВУЕТ!";
					ch = _getch();
					break;
				}
				while (!rslt.eof())
				{
					while (rslt.get(str))
					{
						cout << str;
					}
				}
				cout << "\n\n\nНажмите любую клавишу, чтобы продолжить...";
				ch = _getch();
				break;
			}
		}
	
	}
	/*Режим администрации: вопросы, ответы и все такое*/
	system("cls");
	cout << "Нажмите любую клавишу для продолжения";
	ch = _getch();
}


void main_menu()
{
	int menu = 100;
	
	while (menu != 0)
	{
		system("cls");
		/*Здесь будет реализован основной выбор меню*/
		cout << "\nПожалуйста, выберите желаемый пункт меню:" << endl;
		cout << "1) Теоретический материал по теме." << endl;
		cout << "2) Демонстрация принципа поразрядной сортировки." << endl;
		cout << "3) Тестирование  по теме \"Поразрядная сортировка\"" << endl;
		cout << "4) Режим администрирования (требуется пароль)" << endl;
		cout << "0) Выход из программы" << endl;
		cin >> menu;
		while (menu < 0 || menu > 4)
		{
			system("cls");
			cout << "\nНекорректно введен номер пункта! Пожалуйста, повторите попытку!" << endl;
			cout << "\nПожалуйста, выберите желаемый пункт меню:" << endl;
			cout << "1) Теоретический материал по теме." << endl;
			cout << "2) Демонстрация принципа поразрядной сортировки." << endl;
			cout << "3) Тестирование  по теме \"Поразрядная сортировка\"" << endl;
			cout << "4) Режим администрирования (требуется пароль)" << endl;
			cout << "0) Выход из программы" << endl;
			cin >> menu;
		}

		switch (menu)
		{
		case 1:
		{
			teoreticheskiy();

			break;
		}
		case 2:
		{
			demonstration();
			break;
		}
		case 3:
		{
			testirovanie();

			break;
		}
		case 4:
		{
			administration();

		}
		break;
		}
	}
}


int main()
{
	srand((unsigned)time(NULL));
	system("chcp 1251 > nul");
	cout << "\tКурсовой проект по теме: поразрядная сортировка. \n\tРаботу выполнил студент группы: ДИНРБ-11. Камоликов Владислав.\n\n-------------------------------------------------------------------------------" << endl;
	cout << "\n\n\nНажмите любую клавишу для начала работы!";
	char bruh = _getch();
	system("cls");
	main_menu();
	system("cls");
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t------------------Программа завершает работу!-------------------------" << endl;
	system("pause");
	return 0;
}