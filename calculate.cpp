#include "calculate.h"
#include <iostream>
#include <string.h>
#include <sstream>

using namespace std;

int count (string s, char comma){
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == comma) count++;
    }
    return count;
}

string splitString(string s){
    int j = 0;
    stringstream ss(s);
    string word[5];
    while (ss.good() && j < 5)
        {
            ss >> word[j];
            j++;
        }
    return word[0];
}