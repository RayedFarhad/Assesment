#include <iostream>
#include <string.h>
#include <sstream>
#include <fstream>
#include "store.h"
#include "calculate.h"

using namespace std;

struct input_optr{
    string op1;
    string op2;
    string op3;
    string op4;
    string op5;
    string op6;
    string op7;
    string input_str;
    string str;
};

int compareString(string data, int sep){
    input_optr str = {"add", "addi", "sub", "subi", "la", "li", "ecall"};

    if (data == str.op1 && sep == 2){
        return 0;
    }
    else if (data == str.op2 && sep == 2){
        return 0;
    }
    else if (data == str.op3 && sep == 2){
        return 0;
    }
    else if (data == str.op4 && sep == 2){
        return 0;
    }
    else if (data == str.op5 && sep == 1){
        return 0;
    }
    else if (data == str.op6 && sep == 1){
        return 0;
    }
    else if (data == str.op7 && sep == 0){
        return 0;
    }
    else{
        return 1;
    }
}

int main(){

    /* version check */
    if (__cplusplus == 201703L) std::cout << "C++17\n";
    else if (__cplusplus == 201402L) std::cout << "C++14\n";
    else if (__cplusplus == 201103L) std::cout << "C++11\n";
    else if (__cplusplus == 199711L) std::cout << "C++98\n";
    else std::cout << "pre-standard C++\n";

    /* main application */
    
    input_optr optr;
    
    int comma_num = 0;
    char comma = ',';
    while (true)
    {
        cout << "Input the instruction set:";
        getline(cin, optr.input_str);
        cout << "Instruction set: " << optr.input_str << endl;

        optr.str = splitString(optr.input_str);

        comma_num = count(optr.input_str, comma);

        if (compareString(optr.str, comma_num) == 0)
        {   
            writeData("Saved_data.csv", optr.input_str);
            readData("Saved_data.csv");
        }

        else
        {
            cout << "invalid instruction" << endl;
        }
    }
    return 0;
}
