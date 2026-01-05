#pragma once
#include <iostream>
#include <iomanip>
#include "clsInputValidate.h"
#include "clsScreen.h"
#include "clsCurrency.h"

class clsCurrencyExchangeScreen : protected clsScreen
{
private:
	
	enum enCurrencyExchangeMenueOptions {
		eListCurrencies = 1, eFindCurrency = 2,
		eUpdateRate = 3, eCurrencyCalculator = 4,
		eShowMainMenue = 5
	};

	static short ReadCurrencyExchangeMenueOption()
	{
		cout << setw(37) << left << "" << "Choose what do you want to do? [1 to 5]? ";
		short Choice = clsInputValidate::ReadShortNumberBetween(1, 5, "Enter Number Between 1 to 5? ");
		return Choice;
	}

	static void _ShowListCurrenciesScreen()
	{
		cout << "\nList Currencies Screen will be here soon...\n";
	}

	static void _ShowFindCurrencyScreen()
	{
		cout << "\nFind Currince Screen Will be here soon...\n";
	}

	static void _ShowUpdateRateScreen()
	{
		cout << "\nUpdate Rate Screen Will be here soon...\n";
	}

	static void _ShowCurrencyCalculatorScreen()
	{
		cout << "\nCurrency Calculator Screen will be here soon...\n";
	}

	static void _GoBackToCurrencyMenue()
	{
		cout << "\n\nPress any key to back to Currency Menue...";
		system("pause>0");
		ShowCurrencyMainMenue();
	}

	static void _PerformCurrencyExchangeMenueOption(enCurrencyExchangeMenueOptions CurrencyExchangeMenueOptions)
	{
		switch (CurrencyExchangeMenueOptions)
		{
			case enCurrencyExchangeMenueOptions::eListCurrencies:
			{
				system("cls");
				_ShowListCurrenciesScreen();
				_GoBackToCurrencyMenue();
				break;
			}

			case enCurrencyExchangeMenueOptions::eFindCurrency:
			{
				system("cls");
				_ShowFindCurrencyScreen();
				_GoBackToCurrencyMenue();
				break;
			}

			case enCurrencyExchangeMenueOptions::eUpdateRate:
			{
				system("cls");
				_ShowUpdateRateScreen();
				_GoBackToCurrencyMenue();
				break;
			}

			case enCurrencyExchangeMenueOptions::eCurrencyCalculator:
			{
				system("cls");
				_ShowCurrencyCalculatorScreen();
				_GoBackToCurrencyMenue();
				break;
			}

			case enCurrencyExchangeMenueOptions::eShowMainMenue:
			{
				// do nothing here the main screen will handle it :)
			}
		}
	}

public:

	static void ShowCurrencyMainMenue()
	{
		system("cls");
		_DrawScreenHeader("\t  Currnecy Exchange Main Screen");

		cout << setw(37) << left << "" << "===========================================\n";
		cout << setw(37) << left << "" << "\t\t  Currnecy Exchange Menue\n";
		cout << setw(37) << left << "" << "===========================================\n";
		cout << setw(37) << left << "" << "\t[1] List Currencies.\n";
		cout << setw(37) << left << "" << "\t[2] Find Currency.\n";
		cout << setw(37) << left << "" << "\t[3] Update Rate.\n";
		cout << setw(37) << left << "" << "\t[4] Currency Calculator.\n";
		cout << setw(37) << left << "" << "\t[5] Main Menue.\n";
		cout << setw(37) << left << "" << "===========================================\n";

		_PerformCurrencyExchangeMenueOption((enCurrencyExchangeMenueOptions)ReadCurrencyExchangeMenueOption());
	}

};

