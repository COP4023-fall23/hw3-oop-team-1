#include <iostream>
#include <string>
#include <fstream>
#include "Client.h"
//inlcude all needed libraries


using namespace std;


int main()
{
  
  string file_name = "client_info.txt";
  int num_std = 10;
  double deposit_amount = 100.0; 
  
  double withdrawal_amount = 50.0;
  string account_num = "789-01-2345"; 

    //Define an instance of the class.
      Bank bank(file_name, num_std);
    //Use the defined constructor to initialize you private members.
      
      
    // Use the deposit function.
      
      double updated_balance = bank.deposit(account_num, deposit_amount);
      cout << "Updated balance after deposit: $" << updated_balance << endl;

    // Use the withdraw function.
      string withdrawal_account_num = "789-01-2345"; // 
      
      updated_balance = bank.withdraw(withdrawal_account_num, withdrawal_amount);
      cout << "Updated balance after withdrawal: $" << updated_balance << endl;

    // Use the saving_info function.
      string output_file_name = "updated_client_info.txt"; 
      bank.saving_info(output_file_name);
      cout << "Client information saved to " << output_file_name << endl;

    // use find_client
      string search_account_num = "DavidBrown"; 
      bank.find_client(search_account_num);
       
    // Create a second object and use the deep copy constructor to make a copy of you first object.
      // bank copyClient = client;
     // Bank Bank(Bank otherBank)

      return 0;
}   
