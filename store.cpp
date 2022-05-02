// store.cpp
#include "store.h" // header in local directory
#include <sstream>
#include <fstream>

using namespace std;

void readData(string filename){   
    ifstream csv_file;
    string csv_data;

    csv_file.open(filename);
    while(!csv_file.eof()){
        csv_file >> csv_data;
        cout << csv_data << " " ;
    }
}

void writeData(string filename, string data){
    
    ofstream File(filename, ios::app);

    File << data << "\n";

    File.close();
}