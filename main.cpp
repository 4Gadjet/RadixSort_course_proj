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
//#include "������1.h"
//#include "������2.cpp"
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
				cout << "���� � ������������� ���������� ��������� ��� �����������!";
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
			cout << "\n\n\n����� ������� �� ��������� ��������, ������� 2\n��� �������� � ����, ������� 0" << endl;
			int choise = 0;
			cin >> choise;
			if (choise == 2) page++;
			if (choise == 0) page += 300;
			while (choise != 2 && choise != 0)
			{
				cout << "������������ ����!";
				cout << "\n����� ������� �� ��������� ��������, ������� 2\n��� �������� � ����, ������� 0" << endl;
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
				cout << "���� � ������������� ���������� ��������� ��� �����������!";
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
			cout << "\n\n\n��� ��������� ��������\n��� ����������� �� ���������� ������� 1\n��� �������� � ����, ������� 0" << endl;
			int choise = 0;
			cin >> choise;
			if (choise == 1) page--;
			if (choise == 0) page = 300;
			while (choise < 0 || choise > 1)
			{
				cout << "������������ ����!";
				cout << "\n��� ��������� ��������\n��� ����������� �� ���������� ������� 1\n��� �������� � ����, ������� 0" << endl;
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
				cout << "���� � ������������� ���������� ��������� ��� �����������!";
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
			cout << "\n\n\n����� ������� �� ��������� ��������, ������� 2\n��� ����������� �� ���������� ������� 1\n��� �������� � ����, ������� 0" << endl;
			int choise = 0;
			cin >> choise;
			if (choise == 2) page++;
			if (choise == 1) page--;
			if (choise == 0) page = 300;
			while (choise < 0 || choise > 2)
			{
				cout << "������������ ����!";
				cout << "\n����� ������� �� ��������� ��������, ������� 2\n��� ����������� �� ���������� ������� 1\n��� �������� � ����, ������� 0" << endl;
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
						cout << "���� � ������������� ���������� ��������� ��� �����������!";
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
					cout << "\n\n\n����� ������� �� ��������� ��������, ������� 2\n��� ����������� �� ���������� ������� 1\n��� �������� � ����, ������� 0" << endl;
					int choise = 0;
					cin >> choise;
					if (choise == 2) page++;
					if (choise == 1) page--;
					if (choise == 0) page = 300;
					while (choise < 0 || choise > 2)
					{
						cout << "������������ ����!";
						cout << "\n����� ������� �� ��������� ��������, ������� 2\n��� ����������� �� ���������� ������� 1\n��� �������� � ����, ������� 0" << endl;
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
	cout << "\t\t***����� ������������***\n\n" << endl;
	int choise;
	cout << "\n�������� ����� ���������� �������:\n1) ��������� ��������� �����\n2) ������ ���� ������� ��������\n0) ������� � ����" << endl;
	cin >> choise;
	while (choise < 0 || choise >= 3) 
	{
		cout << "������������ ����! ��������� �������!\n" << endl;
		cout << "\n�������� ����� ���������� �������:\n1) ��������� ��������� �����\n2) ������ ���� ������� ��������\n0) ������� � ����" << endl;
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
	cout << "������� ������� ��������� a < b (a >= 0!)\n������� ������� �: ";
	cin >> a;
	while (a < 0) 
	{
		cout << "����������� ������� ��������!\na < b (a > 0!)\n������� ������� �: ";
		cin >> a;
	}
	cout << "a < b (a > 0 � b < 1000)\n������� ������� b:";
	cin >> b;
	while (b <= a || b >= 1000)
	{
		cout << "����������� ������� ��������!\n������� ������� b\na < b (a > 0 � b < 1000): ";
		cin >> b;
	}
	mt19937 gen(time(0));
	for (int i = 0; i <= count; i++)
	{
		uniform_int_distribution<> uid(a, b);
		Array[i] = uid(gen);
	}
	system("cls");
	cout << "������� ������� ���������: a = " << a << "; b = " << b << endl;
}

void ManualInput(int*& Array, int count)
{
	cout << "������� ����� ����� ������ ������ 0, �� ������ 1000!" << endl;
	for (int i = 0; i < count; i++)
	{
		cout << "������� �������� �������� �" << i + 1 << " = ";
		cin >> Array[i];
		while (Array[i] <= 0 || Array[i] >= 1000)
		{
			cout << "������������ ����! ������� ����� ����� ������ 0: ";
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
			cout << "\t\t***����� ������������***\n\n" << endl;
			cout << "������ ����� ����������� ���������� �� " << buf_rad + 1 << " �������" << endl;
			for (int i = 0; i <= t; i++) cout << " ";
			cout << "|" << endl;
			for (int i = 0; i <= t; i++) cout << " ";
			cout << "V" << endl;
			Display(Array, count);

			cout << "\n\n������� ����� ������� ����� ����������";
			ch = _getch();
			for (int i = 0; i < count; i++)
			{
				One.push_back(Array[i]);
			}
			system("cls");
			cout << "\t\t***����� ������������***\n\n" << endl;

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
			cout << "����������� ������ �� ����������� ������...\n������ ������������!\n\n" <<endl;
			Display_vec(One);
			cout << "\n\n������� ����� ������� ����� ������� � ���������� �������";
			ch = _getch();
			t--;

			system("cls");
			cout << "\t\t***����� ������������***\n\n" << endl;
			cout << "������ ����� ����������� ���������� �� " << buf_rad + 2 << " �������" << endl;
			for (int i = 0; i <= t; i++) cout << " ";
			cout << "|" << endl;
			for (int i = 0; i <= t; i++) cout << " ";
			cout << "V" << endl;
	
			Display_vec(One);
			cout << "\n\n������� ����� �������, ����� ����������!";
			ch = _getch();


			system("cls");
			cout << "\t\t***����� ������������***\n\n" << endl;
			cout << "����������� ������ �� ����������� ��������...\n������ ������������!\n\n"<< endl;
			
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
			cout << "\n\n������� ����� ������� ����� ������� � ���������� �������";
			ch = _getch();
			t--;

			system("cls");
			cout << "\t\t***����� ������������***\n\n" << endl;
			cout << "������ ����� ����������� ���������� �� " << buf_rad + 3 << " �������" << endl;
			for (int i = 0; i <= t; i++) cout << " ";
			cout << "|" << endl;
			for (int i = 0; i <= t; i++) cout << " ";
			cout << "V" << endl;
			Display_vec(One);
			cout << "\n\n������� ����� �������, ����� ����������!";
			ch = _getch();


			system("cls");
			cout << "\t\t***����� ������������***\n\n" << endl;
			cout << "����������� ������ �� ����������� �����...\n������ ������������!\n\n" << endl;

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
			cout << "\t\t***����� ������������***\n\n" << endl;
			cout << "������ ����� ����������� ���������� �� " << buf_rad + 1 << " �������" << endl;
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
			cout << "\n\n������� ����� ������� ����� ����������";
			ch = _getch();
			t--;
			system("cls");
			cout << "\t\t***����� ������������***\n\n" << endl;
			cout << "����������� ������ �� ����������� ������...\n������ ������������!\n\n" << endl;
			Display_vec(One);
			cout << "\n\n������� ����� ������� ����� ������� � ���������� �������";
			ch = _getch();

			system("cls");
			cout << "\t\t***����� ������������***\n\n" << endl;
			cout << "������ ����� ����������� ���������� �� " << buf_rad + 2 << " �������" << endl;
			for (int i = 0; i <= t; i++) cout << " ";
			cout << "|" << endl;
			for (int i = 0; i <= t; i++) cout << " ";
			cout << "V" << endl;

			Display_vec(One);
			cout << "\n\n������� ����� �������, ����� ����������!";
			ch = _getch();


			system("cls");
			cout << "\t\t***����� ������������***\n\n" << endl;
			cout << "����������� ������ �� ����������� ��������...\n������ ������������!\n\n" << endl;

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
			cout << "\t\t***����� ������������***\n\n" << endl;

			cout << "���������, ������������ ������ ��������� ����� �������, �� ������ ��������� �������� �� �����������\n\n" << endl;
			sort(One.begin(), One.end());
			Display_vec(One);
		}
	cout << "\n\n������� ����� ������� ����� ����������";
	ch = _getch();

	system("cls");
	cout << "\t\t***����� ������������***\n\n" << endl;

	cout << "������� ����������� ���������� ��������!\n��� ����������� ��� ���������� MSD\n����������� ������ ����� (�� ����������):\n " << endl;
	Display(Array, count);
	cout << "\n��������������� ������: " << endl;
	Display_vec(One);
	cout << "\n\n������� ����� ������� ����� ��������� � ����";
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
		cout << "\t\t***����� ������������***\n\n" << endl;
		cout << "������ ����� ����������� ���������� �� " << buf_rad + 3 << " �������" << endl;
		for (int i = 0; i <= t; i++) cout << " ";
		cout << "|" << endl;
		for (int i = 0; i <= t; i++) cout << " ";
		cout << "V" << endl;
		Display(Array, count);

		cout << "\n\n������� ����� ������� ����� ����������";
		ch = _getch();
		for (int i = 0; i < count; i++)
		{
			One.push_back(Array[i]);
		}
		system("cls");
		cout << "\t\t***����� ������������***\n\n" << endl;

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
		cout << "����������� ������ �� ����������� �����...\n������ ������������!\n\n" << endl;
		Display_vec(One);
		cout << "\n\n������� ����� ������� ����� ������� � ���������� �������";
		ch = _getch();
		t++;

		system("cls");
		cout << "\t\t***����� ������������***\n\n" << endl;
		cout << "������ ����� ����������� ���������� �� " << buf_rad + 2 << " �������" << endl;
		for (int i = 0; i <= t; i++) cout << " ";
		cout << "|" << endl;
		for (int i = 0; i <= t; i++) cout << " ";
		cout << "V" << endl;

		Display_vec(One);
		cout << "\n\n������� ����� �������, ����� ����������!";
		ch = _getch();


		system("cls");
		cout << "\t\t***����� ������������***\n\n" << endl;
		cout << "����������� ������ �� ����������� ��������...\n������ ������������!\n\n" << endl;

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
		cout << "\n\n������� ����� ������� ����� ������� � ���������� �������";
		ch = _getch();
		t++;

		system("cls");
		cout << "\t\t***����� ������������***\n\n" << endl;
		cout << "������ ����� ����������� ���������� �� " << buf_rad + 1 << " �������" << endl;
		for (int i = 0; i <= t; i++) cout << " ";
		cout << "|" << endl;
		for (int i = 0; i <= t; i++) cout << " ";
		cout << "V" << endl;
		Display_vec(One);
		cout << "\n\n������� ����� �������, ����� ����������!";
		ch = _getch();


		system("cls");
		cout << "\t\t***����� ������������***\n\n" << endl;
		cout << "����������� ������ �� ����������� ������...\n������ ������������!\n\n" << endl;

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
		cout << "\t\t***����� ������������***\n\n" << endl;
		cout << "������ ����� ����������� ���������� �� " << buf_rad + 2 << " �������" << endl;
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
		cout << "\n\n������� ����� ������� ����� ����������";
		ch = _getch();
		t++;
		system("cls");
		cout << "\t\t***����� ������������***\n\n" << endl;
		cout << "����������� ������ �� ����������� ��������...\n������ ������������!\n\n" << endl;
		Display_vec(One);
		cout << "\n\n������� ����� ������� ����� ������� � ���������� �������";
		ch = _getch();

		system("cls");
		cout << "\t\t***����� ������������***\n\n" << endl;
		cout << "������ ����� ����������� ���������� �� " << buf_rad + 1 << " �������" << endl;
		for (int i = 0; i <= t; i++) cout << " ";
		cout << "|" << endl;
		for (int i = 0; i <= t; i++) cout << " ";
		cout << "V" << endl;

		Display_vec(One);
		cout << "\n\n������� ����� �������, ����� ����������!";
		ch = _getch();


		system("cls");
		cout << "\t\t***����� ������������***\n\n" << endl;
		cout << "����������� ������ �� ����������� ������...\n������ ������������!\n\n" << endl;

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
		cout << "\t\t***����� ������������***\n\n" << endl;

		cout << "���������, ������������ ������ ��������� ����� �������, �� ������ ��������� �������� �� �����������\n\n" << endl;
		sort(One.begin(), One.end());
		Display_vec(One);
	}
	cout << "\n\n������� ����� ������� ����� ����������";
	ch = _getch();

	system("cls");
	cout << "\t\t***����� ������������***\n\n" << endl;

	cout << "������� ����������� ���������� ��������!\n��� ����������� ��� ���������� LSD\n����������� ������ ����� (�� ����������):\n " << endl;
	Display(Array, count);
	cout << "\n��������������� ������: " << endl;
	Display_vec(One);
	cout << "\n\n������� ����� ������� ����� ��������� � ����";
	ch = _getch();
}

void Sort(int*& Array, int& count)
{
	system("cls");
	cout << "\t\t***����� ������������***\n\n" << endl;
	cout << "������ ����� ��� ���������� ���������� ������������ ���������� ��������.\n��� ����� ������ ���������� ����� � �������� �������" << endl;
	Display(Array, count);
	int max_chislo = 0, max_radix = 0;
	for (int i = 0; i < count; i++)
	{
		if (max_chislo < Array[i]) max_chislo = Array[i];
	}
	cout << "\n������������ ����� �������: " << max_chislo;
	for (max_chislo; max_chislo > 0; max_radix++)
	{
		if (max_chislo > 9) max_chislo /= 10;
		else max_chislo = 0;
	}
	cout << "\n\n��� ���������� �������� = " << max_radix << endl;
	cout << "\n����� ����� ���������� ������� ������������?\n1) MSD (����������)\n2) LSD (����������)" << endl;
	int type = 0;
	cin >> type;
	while (type < 1 && type > 2)
	{
		cout << "\n������������ ����! \n����� ����� ���������� ������� ������������?\n1) MSD (����������)\n2) LSD (����������)" << endl;
		cin >> type;
	}
	cout << "\n\n������� ����� ������� ����� ����������";
	char ch = _getch();
	system("cls");
	cout << "\t\t***����� ������������***\n\n" << endl;
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
		cout << "������� ���������� ���������, ������� ����� ������������� [2; 10]: ";
		cin >> count;
		while (count <= 1 || count > 10)
		{
			system("cls");
			cout << "������� ���������� ���������, ������� ����� ������������� [2; 10]: ";
			cin >> count;
		}
		system("cls");
		Array = new int[count];
		Generation(Array, count);
		system("cls");
		cout << "��������������� ������ (�� ������������):" << endl;
		Display(Array, count);
		cout << "\n\n������� ����� ������� ����� ����������";
		ch = _getch();
		Sort(Array, count);
		break;
		case 2:
		count = 0;
		system("cls");
		cout << "������� ���������� ���������, ������� ����� ������������� [2; 10]: ";
		cin >> count;
		while (count <= 1 || count > 10)
		{
			system("cls");
			cout << "������� ���������� ���������, ������� ����� ������������� [2; 10]: ";
			cin >> count;
		}
		system("cls");
		Array = new int[count];
		ManualInput(Array, count);
		system("cls");
		cout << "��������������� ������ (�� ������������):" << endl;
		Display(Array, count);
		cout << "\n\n������� ����� ������� ����� ����������";
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
		cout << "���� � ����� �������� ��������� ��� �����������!";
		return false;
	}
	return true;
}

void testirovanie()
{
	system("cls");
	cout << "\t\t***����� ������������***\n\n" << endl;
	cout << "�� ����� ��������� ����� �������� 5 ������, ��� ������� �� ��� ���� 4 �������� ������\n";
	cout << "���������� ������� ������ ����. ����������� ������� ����� ������� � ��������� ������ �� ������ ������ ����� ������.\n";
	cout << "� ����� ������������ �� ������� ������ ���� ������. ��������� ������ �������� � ������������ ������� ����� �������\n";
	cout << "� ���� \"test_rslt.txt\", ������� ����� ����� � ����������, ������ ���� �������� ���������." << endl;
	cout << "\n\n\n������ ������ ������������?\n1) ������\n0) ��������� � ����" << endl;

	char ch;
	int work;
	cin >> work;
	while (work != 0 && work != 1)
	{
		system("cls");
		cout << "\t\t***����� ������������***\n\n" << endl;
		cout << "�� ����� ��������� ����� �������� 5 ������, ��� ������� �� ��� ���� 4 �������� ������\n";
		cout << "���������� ������� ������ ����. ����������� ������� ����� ������� � ��������� ������ �� ������ ������ ����� ������.\n";
		cout << "� ����� ������������ �� ������� ������ ���� ������. ��������� ������ �������� � ������������ ������� ����� �������\n";
		cout << "� ���� \"test_rslt.txt\", ������� ����� ����� � ����������, ������ ���� �������� ���������." << endl;
		cout << "\n\n\n������ ������ ������������?\n1) ������\n0) ��������� � ����" << endl;
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
				cout << "\t\t***����� ������������***\n\n" << endl;
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

				cout << "\n\n������� ����� �� ������: ";
				cin >> answer;
				cout << "TEST: " << answer <<  "  " << number << "  " << correct_answer << endl;
				rslt << number+1 << " - ";
				if (answer == correct_answer)
				{
					correct++;
					rslt << answer << " - ����� ������!" << endl;
					cout << answer << " - ����� ������!" << endl;
					cout << "\n������� ����� �������, ����� ����������";
					char ch = _getch();
				}
				if (answer != correct_answer)
				{
					rslt << answer << " - ����� ��������!" << endl;
					cout << answer << " - ����� ��������!" << endl;
					cout << "\n������� ����� �������, ����� ����������";
					char ch = _getch();
				}

				Q.erase(Q.begin() + number);
				questions++;
				file.close();
				system("cls");
				cout << "\t\t***����� ������������***\n\n" << endl;
				cout << "������� ����������?\n1) ����������\n0) �������� ������������";
				cin >> work;
				while (work !=0 && work != 1)
				{
					system("cls");
					cout << "\t\t***����� ������������***\n\n" << endl;
					cout << "������� ����������?\n1) ����������\n0) �������� ������������";
					cin >> work;
				}
			}
		}
		file.open("test_rslt.txt");
		system("cls");
		cout << "\t\t***����� ������������***\n\n" << endl;
		if (questions >= 5)
		{
			if (correct == 5) 
			{
				rslt << "\n������: �������!" << endl;
				cout << "\n������: �������!" << endl;
			}
			if (correct == 4)
			{
				rslt << "\n������: ������!" << endl;
				cout << "\n������: ������!" << endl;
			}
			if (correct == 3)
			{
				rslt << "\n������: �����������������!" << endl;
				cout << "\n������: �����������������!" << endl;
			}
			if (correct < 3)
			{
				rslt << "\n������: �������������������!" << endl;
				cout << "\n������: �������������������!" << endl;
			}
		}
		if (questions < 5)
		{
			rslt << "\n������������ �������� �� ������� ������������!";
			cout << "\n������������ �������� �� ������� ������������!";
		}
		file.close();
		rslt.close();
		cout << "\n������� ����� �������, ����� ����������";
		char ch = _getch();
	}
	if (work == 0)
	{

	}
}

bool Check_password()
{
	system("cls");
	cout << "������ ������ ������������� ��� �������������� ���� ������ ��� ������������ �� ������������� �����.";
	cout << "\n��� ������� � �������������� ����� � ������� � ���� ��������, � ����� ��������� ����������� ���������� ������ ������\n������� ������: ";
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
		cout << "\n\n\n������ ��������!\n1) ��������� �������\n0) ��������� � ����";
		cin >> work;
	}
	if (work == 0);
	if (work == 1)
	{
		int choise = 1;
		while (choise != 0)
		{
			system("cls");
			cout << "� ������ ������ � ��� ���� �����������:\n";
			cout << "1) ������������� ���� ��������\n";
			cout << "2) ������������� ������������� ��������\n";
			cout << "3) ����������� ��������� ��������� ������������\n";
			cout << "0) ��������� � ����\n\n\n";
			cout << "������� ����� ����: ";
			cin >> choise;
			while (choise > 3 || choise < 0)
			{
				system("cls");
				cout << "� ������ ������ � ��� ���� �����������:\n";
				cout << "1) ������������� ���� ��������\n";
				cout << "2) ������������� ������������� ��������\n";
				cout << "3) ����������� ��������� ��������� ������������\n";
				cout << "0) ��������� � ����\n\n\n";
				cout << "������� ����� ����: ";
				cin >> choise;
			}
			switch (choise)
			{
			case 1:
				system("cls");
				cout << "�� ������ ��������������� ���� �������� � �������.\n";
				cout << "���� ����� ������, ����� ���� ��� ��������� ������ ������ � ���������, ���������� ������� � ������� ����������� ������.\n";
				cout << "����� ������� �������� � ������� \"@1\", ��� ������� - ����������� ������� � 1 - ��� �����.\n";
				cout << "����� ������������� ����� ������� � 4 �������� ������. ����� ����� ���������� ���������� ���������� �����\n";
				cout << "��� ����� ���������� ������ \"=1\", ��� = - ����������� ������, 1 - ����� ������� ������\n\n\n";
				cout << "1) ����������\n0) ���������" << endl;
				cin >> work;
				if (work == 0) break;
				if (work == 1)
				{
					ofstream test;
					test.open("q&a.txt");
					while (!test.is_open())
					{
						cout << "���� � ����� ������ ��������� ��� �����������!";
						ch = _getch();
						break;
					}
					while (work == 1)
					{
						system("cls");
						cout << "������� ������, ������� ���������� ��������:\n";
						/*������ ������ � ����*/
					/*	char str;
						cin >> str;
						test << str << endl;*/
						cout << "\n������ ��������! ����������?\n1) ����������\n0) ��������� ������";
						cin >> work;
					}
				}

				break;
			case 2:
				system("cls");
				cout << "�� ������ ��������������� ������������� ��������.\n";
				cout << "���� ����� ������, ����� ���� ��� ��������� ������ ������ � ��������� ���� ���������� ���� �������� � ����� ������.\n";
				cout << "������������� �������� ������ ���� ������ �� �������� � �������: ������� ������������ ����� ��������, � ����� \n";
				cout << "\"@1\", ��� ������� - ����������� �������� � 1 - � �����. ����� ������������� ����� ��������� �������� � ����������� ������� �����\n";
				cout << "� ����� ����������� �������� �� ������ ������� � ������������� ����������\n\n\n";
				cout << "1) ����������\n0) ���������" << endl;
				cin >> work;
				if (work == 0) break;
				if (work == 1)
				{
					ofstream file;
					file.open("theory.txt");
					while (!file.is_open())
					{
						cout << "���� � ����� ������ ��������� ��� �����������!";
						ch = _getch();
						break;
					}
					while (work == 1)
					{
						system("cls");
						cout << "������� ������, ������� ���������� ��������:\n";
						/*������ ������ � ����*/
					/*	char str;
						cin >> str;
						test << str << endl;*/
						cout << "\n������ ��������! ����������?\n1) ����������\n0) ��������� ������";
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
					cout << "���� � ������������ ��������� ��� �����������!";
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
				cout << "\n\n\n������� ����� �������, ����� ����������...";
				ch = _getch();
				break;
			}
		}
	
	}
	/*����� �������������: �������, ������ � ��� �����*/
	system("cls");
	cout << "������� ����� ������� ��� �����������";
	ch = _getch();
}


void main_menu()
{
	int menu = 100;
	
	while (menu != 0)
	{
		system("cls");
		/*����� ����� ���������� �������� ����� ����*/
		cout << "\n����������, �������� �������� ����� ����:" << endl;
		cout << "1) ������������� �������� �� ����." << endl;
		cout << "2) ������������ �������� ����������� ����������." << endl;
		cout << "3) ������������  �� ���� \"����������� ����������\"" << endl;
		cout << "4) ����� ����������������� (��������� ������)" << endl;
		cout << "0) ����� �� ���������" << endl;
		cin >> menu;
		while (menu < 0 || menu > 4)
		{
			system("cls");
			cout << "\n����������� ������ ����� ������! ����������, ��������� �������!" << endl;
			cout << "\n����������, �������� �������� ����� ����:" << endl;
			cout << "1) ������������� �������� �� ����." << endl;
			cout << "2) ������������ �������� ����������� ����������." << endl;
			cout << "3) ������������  �� ���� \"����������� ����������\"" << endl;
			cout << "4) ����� ����������������� (��������� ������)" << endl;
			cout << "0) ����� �� ���������" << endl;
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
	cout << "\t�������� ������ �� ����: ����������� ����������. \n\t������ �������� ������� ������: �����-11. ��������� ���������.\n\n-------------------------------------------------------------------------------" << endl;
	cout << "\n\n\n������� ����� ������� ��� ������ ������!";
	char bruh = _getch();
	system("cls");
	main_menu();
	system("cls");
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t------------------��������� ��������� ������!-------------------------" << endl;
	system("pause");
	return 0;
}