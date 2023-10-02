/*
Here you will provide the definiton of each member function. Remeber include your class.
*/

#include "Client.h"
#include <fstream>
#include <iostream>

using namespace std;

Bank::Bank(string file_name, int num_std)
{

    num_clients = num_std;

    client_inf = new ClientInfo[num_clients];
    set_client_info(file_name);
}

Bank::~Bank()
{
    delete[] client_inf;
    client_inf = nullptr;

}

int Bank::find_client(string name)
{
       for (int i = 0; i < num_client; i++) {
        if (client_info[i].client_name == account_num) {
            cout << "Client Name: " << client_info[i].client_name << endl;
            cout << "SSN: " << client_info[i].ssn << endl;
            cout << "Bank Account: " << client_info[i].bank_account << endl;
            cout << "Balance: " << client_info[i].balance << endl;
            return;
        }
    }
    cout << "Client not found." << endl;
}

void Bank::set_client_info(string fileName)
{
    ifstream InputFile(fileName);
    if (!InputFile.is.open())
    {
        cout << "Error: Unable to open file!" << endl;
        return;
    }

    for (int i = 0; i < num_client; i++)
    {
        InputFile >> client_info[i].client_name >> client_info[i].ssn >> client_info[i].bank_account >> client_info[i].balance;
    }

    InputFile.close();
}

 Bank::get_client_info()
{
     return client_info;
}

void Bank::saving_info()
{
     ofstream OutputFile(file_name);
     if (!OutputFile.is_open())
     {
        cout << "Error: Unable to open file for saving client info!" << endl;
        return;
     }

     for (int i = 0; i < num_client; i++)
     {
        OutputFile << client_info[i].client_name << " " << client_info[i].ssn << " " << client_info[i].bank_account << " " << client_info[i].balance << endl;
     }

     OutputFile.close();
}

double Bank::deposit(string account_num,double amount)
{
        for (int i = 0; i < num_client; i++) {
        if (client_info[i].client_name == account_num) {
            client_info[i].balance += amount;
            return client_info[i].balance;
        }
    }
    return -1.0; // Client not found
    
}

double Bank::withdraw(string account_num, double withdraw)
{
    for (int i = 0; i < num_client; i++)
    {
        if (client_info[i].client_name == account_num)
        {
            if (client_info[i].balance >= withdrawal)
            {
                client_info[i].balance -= withdrawal;
                return client_info[i].balance;
            }
            else
            {
                cout << "Insufficient balance for withdrawal." << endl;
                return client_info[i].balance;
            }
        }
    }
    return -1.0; 
}

Bank::Bank(const Client &other)
{
    num_client = other.num_client;
    client_info = new ClientInfo[num_client]; 

    for (int i = 0; i < num_client; i++)
    {
        client_info[i] = other.client_info[i];
    }
}
