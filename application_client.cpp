/*
Here you will provide the definiton of each member function. Remeber include your class.
*/

#include "Client.h"
#include <fstream>
#include <iostream>

using namespace std;

Client::Client(string file_name, int num_std)
{
    ifstream InputFile;
    InputFile.open(file_name);

    if(!InputFile)
    {
        cout<<"Error: The path or file does not exist";
        exit(1);
    }

    num_clients = num_std;

    client_inf = new string*[num_clients];
    for(int i=0; i<num_clients; i++)
    {
        client_inf[i] = new string[2];
    }

    test_grade = new double*[num_clients];
    for(int i=0; i<num_clients; i++)
    {
        test_grade[i] = new double[3];
    }

    int index=0;
    while(!InputFile.eof())
    {
        InputFile >> client_inf[index][0] >> client_inf[index][1];
        InputFile >> test_grade[index][0] >> test_grade[index][1] >> test_grade[index][2];

        index++;
    }

    InputFile.close();

}

Client::~Client()
{
    for(int i=0; i < num_clients; i++)
    {
        delete[] client_inf[i];
        delete[] test_grade[i];
    }

    delete[] client_inf;
    delete[] test_grade;

    client_inf = nullptr;
    test_grade = nullptr;

}

int Client::find_client(string name)
{
    int index = -1;
    for(int i=0; i < num_clients; i++)
    {
        if(name == client_inf[i][0])
        {
            index = i;
            cout<<"Student was found."<<endl;
            break;
        }
    }

    if(index==-1)
    {
        cout<<"Student was not found."<<endl;
    }

    return index;
}

void Client::compute_final_grade(string outputfile_name)
{
    ofstream OutputFile;
    OutputFile.open(outputfile_name);
    double final_grade;

    for(int i=0; i< num_clients; i++)
    {

           final_grade = (test_grade[i][0]+test_grade[i][1])/2;
           OutputFile << client_inf[i][0] <<"Final Grade: "<<final_grade<<endl; 
        
    }
}