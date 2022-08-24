#ifndef MESSAGE_FUNCTIONS_H
#define MESSAGE_FUNCTIONS_H

#include <iostream>

using namespace std;

string encryptMessage(string message, int key);
string decryptMessage(string message, int key);
string reverseMessage(string message);

#endif