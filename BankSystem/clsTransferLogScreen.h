#pragma once
#include <iostream>
#include "clsScreen.h"
#include "clsBankClient.h"
#include <iomanip>
#include "clsUser.h"
#include "Global.h"

class clsTransferLogScreen : protected clsScreen
{
private:

    static void PrintTransferLogRegisterRecordLine(clsBankClient::stTransferLogRecord TransferLog)
    {
        cout << setw(8) << left << "" << "|" << setw(12) << left << TransferLog.DateTime;
        cout << "|  " << setw(8) << left << TransferLog.SoucreAccountNumber;
        cout << "|  " << setw(8) << left << TransferLog.DestintationAccountNumber;
        cout << "|  " << setw(8) << left << TransferLog.TransferAmount;
        cout << "|  " << setw(10) << left << TransferLog.SourceAccountBalance;
        cout << "|  " << setw(10) << left << TransferLog.DestintationAccountBalance;
        cout << "|  " << setw(8) << left << TransferLog.UserName;
    }

public:

    static void ShowTransferLogRegisterScreen()
    {
        vector <clsBankClient::stTransferLogRecord> vTransferLogRecord = clsBankClient::GetTransferLogRegisterList();

        string Title = "\tTransfer Log Register Screen";
        string SubTitle = "\t\t(" + to_string(vTransferLogRecord.size()) + ") Record(s).";

        _DrawScreenHeader(Title, SubTitle);

        cout << setw(8) << left << "" << "\n\t_______________________________________________________";
        cout << "_________________________________________\n" << endl;

        cout << setw(8) << left << "" << "| " << left << setw(23) << "Date/Time";
        cout << "| " << left << setw(8) << "s.Acct";
        cout << "| " << left << setw(8) << "d.Acct";
        cout << "| " << left << setw(8) << "Amount";
        cout << "| " << left << setw(10) << "s.Balance";
        cout << "| " << left << setw(10) << "d.Balance";
        cout << "| " << left << setw(8) << "User";

        cout << setw(8) << left << "" << "\n\t_______________________________________________________";
        cout << "_________________________________________\n" << endl;

        if(vTransferLogRecord.size() == 0)
            cout << "\t\t\t\tNo TTransfers  Available In the System!";

        else
            for (clsBankClient::stTransferLogRecord Record : vTransferLogRecord)
            {
                PrintTransferLogRegisterRecordLine(Record);
                cout << endl;
            }

        cout << setw(8) << left << "" << "\n\t_______________________________________________________";
        cout << "_________________________________________\n" << endl;
    }

};

