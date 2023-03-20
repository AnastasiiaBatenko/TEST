#pragma once
#include<string>
using namespace std;

class User
{
private:
	int ID;
	string login;
	string password;
	string fullname;
	string address;
	string phone;
	bool isAdmin;


public:
	User(int ID, string login, string password, string fullname, string address, string phone, bool isAdmin)
	{
		this->ID = ID;
		this->login = login;
		this->password = password;
		this->fullname = fullname;
		this->address = address;
		this->phone = phone;
		this->isAdmin = isAdmin;
	}

	int GetID()
	{
		return ID;
	}
	void SetID(int valueID)
	{
		ID = valueID;
	}

	string Getphone()
	{
		return phone;
	}
	void Setphone(string valuephone)
	{
		phone = valuephone;
	}

	string Getlogin()
	{
		return login;
	}
	void Setlogin(string valuelogin)
	{
		login = valuelogin;
	}

	string Getpassword()
	{
		return password;
	}
	void Setpassword(string valuepassword)
	{
		password = valuepassword;
	}

	string Getfullname()
	{
		return fullname;
	}
	void Setfullname(string valuefullname)
	{
		fullname = valuefullname;
	}

	string Getaddress()
	{
		return address;
	}
	void Setaddress(string valueaddress)
	{
		address = valueaddress;
	}


	friend ostream& operator<<(ostream& os, const User& u)
	{
		os << "USER ( ID:" << u.ID << " login:" << u.login << " password:" << u.password << "\n" << u.fullname << "\n" << u.address << "\n";// !!!!!!!!!!!!!!!!
	}
};