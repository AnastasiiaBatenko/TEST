#pragma once
#include<string>
using namespace std;

class Users {
private: 
	User **users;
	User* currentUser = 0;
	int nextID;

public:

	Users()
	{
		this->users = new User*[100];//massive
		for (int i = 0; i < 100; i++)
		{
			this->users[i] = 0;
		}
		ifstream userfile("user.txt");
		string stroka;
		int ID;
		string login;
		string password;
		string fullname;
		string address;
		string phone;
		int maxID = 0;
		int i = 0;


		if (userfile.is_open())
		{
			while (!userfile.eof())
			{
					if (getline(userfile, stroka))
					{
						ID = atoi(stroka.c_str()); 
						if (ID > maxID)
						{
							maxID = ID;
						}
						cout << ID;
					}

					else
					{
						throw (invalid_argument("invalid argument ID in 'user.txt'"));//помилка в файл
					}

					if (getline(userfile, stroka))
					{
						login = stroka;
					}

					else
					{
						throw (invalid_argument("invalid argument LOGIN in 'user.txt'"));//помилка в файл
					}
					if (getline(userfile, stroka))
					{
						password = stroka;
					}
					else
					{
						throw (invalid_argument("invalid argument PASSWORD in 'user.txt'"));//помилка в файл
					}
					if (getline(userfile, stroka))
					{
						fullname = stroka;
					}
					else
					{
						throw (invalid_argument("invalid argument FULLNAME in 'user.txt'"));//помилка в файл
					}
					if (getline(userfile, stroka))
					{
						address = stroka;
					}
					else
					{
						throw (invalid_argument("invalid argument ADDRESS in 'user.txt'"));//помилка в файл
					}
					if (getline(userfile, stroka))
					{
						phone = stroka;
					}
					else
					{
						throw (invalid_argument("invalid argument PHONE in 'user.txt'"));//помилка в файл
					}
					this->users[i] = new User(ID, login, password, fullname, address, phone, i == 0);
					i++;
			}
			userfile.close();
			this->nextID = maxID+1;
		}
		else
		{
			throw (invalid_argument("sorry, we can't find this file "));
		}
	}


	friend ostream& operator<<(ostream& os, const Users& u)
	{
		os << "Users\n\t users: [\n";
		for (int i = 0; i < 100; i++)
		{
			if (u.users[i] != 0)
			{
				os << "\t\t" << u.users[i];
			}
		}
		os << "]\n\tnextID: " << u.nextID ;
	}


	void save()
	{
		ofstream userfile("user.txt", ios::app);
		
		userfile.close();
	}


	void isCurrentUserAdmin()
	{

	}


	void removeUser(int ID)
	{
		
		for (int i = 0; i < 100; i++)
		{
			if (users[i].GetID() == ID)
			{
				delete[i] users ;
			}
		}
	}
};
