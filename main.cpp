#include <iostream>
#include <string>
#include <fstream>
#include <Client.h>
//inlcude all needed libraries


using namespace std;


int main()
{
      int num_std = 10;
      string file_name = "client_info.txt";
    //Define an instance of the class.
      Client client;
    //Use the defined constructor to initialize you private members.
      Client client(file_name, num_std);

    // Use the deposit function.

    // Use the withdraw function.

    // Use the saving_info function.

    // use find_client
       
    // Create a second object and use the deep copy constructor to make a copy of you first object.
}
