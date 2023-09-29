/*
In this file you must create your class and prototype your public functions.
*/

#include <string>

using namespace std;


class Client
{ 
    private:
        //define your private members here
        
        string** client_inf;
        double** test_grade;
        int num_clients;


    public:
        //define your public members here

        Client(){};
        Client(string file_name, int num_std);
        ~Client();
        void compute_final_grade(string outputfile_name);
        int find_client(string name);

        void set_client_info(string fileName);
        void get_client_info();
        void saving_info();
        double deposit(string account_num,double amount);
        double withdraw(string account_num, double withdraw);



};

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
        Client* client_info;  

};