#include<iostream>
#include<fstream>
#include<Windows.h>
#include"User.h"
#include"Users.h"
#include"Menu.h"
using namespace std;

int main()
{
	Users u;


	SetConsoleOutputCP(1251);
	int a = Menu::select_vertical({ "����", "����������" }, Center);

	string path1 = "Topic.txt";
	ofstream topicfile(path1, ios::app);

	string path2 = "tests.txt";
	ofstream testfile(path2, ios::app);

	string path3 = "question.txt";
	ofstream questionfile(path3, ios::app);

	string path4 = "user.txt";
	ofstream userfile(path4, ios::app);

	string path5 = "lastID.txt";
	ofstream IDfile(path5, ios::app);

	///MENU///
	if (a == 0)
	{
		system("cls");
		int b = Menu::select_vertical({ "��������� �������������", "�������� ����������", "��������� �����������"}, Center);
		if (b == 0)
		{
			system("cls");
			int d = Menu::select_vertical({ "�������� �����������", " �������� ����������� ", "���������� "}, Center);
			if (d == 0)
			{
				system("cls");
			}
			else
				if (d == 1)
				{
					int ID;
					system("cls");
					
					cout << "������ ID ����������� , ����� ������ ��������  ";
					cin >> ID;
					u.removeUser(ID);
				}
				else
					if (d == 2)
					{
						system("cls");
					}
		}

	}
	else
	if (a == 1)
	{
		system("cls");
		int c = Menu::select_vertical({ "���������", " ���������� "}, Center);
		if (c == 0)
		{
			system("cls");

			cout << "������������� !";

			string in_login;
			cout << "������ ���� ";
			cin >> in_login;

			string in_pass;
			cout << "������ ������ ";
			cin >> in_pass;

			string in_fullname;
			cin.ignore(INT_MAX, '\n');
			cout << "������ ����� ��'� ";
			getline(cin, in_fullname);

			int input_int;
			cout << "������ ����� �������� ";
			cin >> input_int;
			cin.ignore();

			string in_address;
			cout << "������ ������ ";
			cin >> in_address;

			u.save();

		}
		else
			if (c == 1)
			{

			}
	}

	///USER///
	///registration///
}

//int main()
//{
//	try
//	{
//		Users* u = new Users();
//		cout << u;
//	}
//	catch(const exception& e)
//	{
//		cout << e.what();
//	}
//}
// 
// 
// 
// 
//
//int main() 
//{
//	string line;
//	ifstream userfile("user.txt");
//	if (userfile.is_open())
//	{
//		while (getline(userfile, line))
//		{
//			cout << line << '\n';
//		}
//		userfile.close();
//	}
//
//	else cout << "Unable to open file";
//
//	return 0;
//}