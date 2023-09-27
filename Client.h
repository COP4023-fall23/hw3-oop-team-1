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
};