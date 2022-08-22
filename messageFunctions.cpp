#include <iostream>

using namespace std;

// Function to move all letters over by 2.
// Parameters: a string message from user.
// Returns: string encrypted message
string encryptMessage(string message){
    // Move all letters in string over 2 letters
    for(int i = 0; i < message.length(); i++){
        message[i] = message[i] + 2;
    }

    return message;
}

// Function to move all letters backwards over by 2.
// Parameters: a string message from user.
// Returns: string decrypted message
string decryptMessage(string message){
    // Move all letters in string back 2 letters
    for(int i = 0; i < message.length(); i++){
        message[i] = message[i] - 2;
    }

    return message;
}

// Function to reverse a message
// Parameters: string message
// Returns: string reversed message
string reverseMessage(string message){
    string reverseMessage;
    for(int i=message.length()-1; i >= 0; i--){
        reverseMessage += message[i];
    }

    return reverseMessage;

}