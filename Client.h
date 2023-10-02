/*
In this file you must create your class and prototype your public functions.
*/

#include <string>

using namespace std;


    // define your private members here

    struct ClientInfo
    {
        string client_name;
        string ssn;
        double bank_account;
        double balance;
    };

    class Bank
    {
    private:
        int num_client;
        Client *client_info;
        double balance;

    public:
        // define your public members here
        void set_client_info(string fileName);
        void get_client_info();
        double deposit(string account_num, double amount);
        double withdraw(string account_num, double withdraw);
        void saving_info(string file_name);
        void find_client(string account_num);
        Bank(Bank& otherBank){};
        Bank(string file_name, int num_std);
        ~Bank();
    };