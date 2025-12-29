#pragma once
#include <iostream>
#include "clsScreen.h"
#include "clsUser.h"
#include <iomanip>
#include <fstream>
#include "clsMainScreen.h"
#include "Global.h"


class clsLoginScreen : protected clsScreen
{
private:

	static bool _Login()
	{
		bool LoginFaild = false;
		
		short FaildLoginCount = 0;
		string Username, Password;

		do
		{

			if (LoginFaild)
			{
				FaildLoginCount++;

				cout << "\nInvalid Username/Password!\n";
				cout << "\nYou have " << (3 - FaildLoginCount)
					<< " Trial(s) to Login.\n\n";
			}

			if (FaildLoginCount == 3)
			{
				cout << "\nYou are Locked after 3 faild trails \n\n";
				return false;
			}

			cout << "Enter Username? ";
			cin >> Username;

			cout << "Enter Password? ";
			cin >> Password;

			CurrentUser = clsUser::Find(Username, Password);

			LoginFaild = CurrentUser.IsEmpty();

		} while (LoginFaild);

		CurrentUser.RegisterLogIn();
		clsMainScreen::ShowMainMenue();
		return true;
	}

public:

	static bool ShowLoginScreen()
	{
		system("cls");
		_DrawScreenHeader("\t  Login Screen");
		return _Login();
	}
};

//static void _Login()
//{
//	bool LoginFaild = false;
//	string Username, Password;
//
//	short Counter = 3;
//
//	do
//	{
//
//		if (LoginFaild)
//		{
//			Counter--;
//
//			if (Counter == 0)
//			{
//				cout << "\n\nYou are Locked after 3 Faild Trails!\n\n";
//				exit(0);
//			}
//
//			else
//			{
//				cout << "\nInvalid Username/Password!\n";
//				cout << "you Have " << Counter << " Trails to Login.\n\n";
//			}
//		}
//
//		cout << "Enter Username? ";
//		cin >> Username;
//
//		cout << "Enter Password? ";
//		cin >> Password;
//
//		CurrentUser = clsUser::Find(Username, Password);
//
//		LoginFaild = CurrentUser.IsEmpty();
//
//	} while (LoginFaild);
//
//	clsMainScreen::ShowMainMenue();
//}