// store.cpp
#include "store.h" // header in local directory
#include <sstream>
#include <fstream>
#include <string>

using namespace std;

void readData(string filename){   
    fstream csv_file;
    string csv_data;

    csv_file.open(filename, ios::in);
    while(getline(csv_file, csv_data)){
        cout << csv_data << endl ;
    }
}

void writeData(string filename, string data){
    
    ofstream File(filename, ios::app);

    File << data << "\n";

    File.close();
}