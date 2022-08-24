#include <iostream>
#include <math.h>

using namespace std;

// Function to shift character location (ASCII code) over a x amount.
// Paramaters: int key to be used in mathematical formula
// Returns: int amount characters to be moved over.
int shiftEncryptCharacter( int key){
    // Amount of characters to shift over.
    double shiftAmount = 0.0;
    
    // Forumla to encrypt or decrypt a message.
    double sqrtAmount = sqrt(key);
    shiftAmount = log(sqrtAmount/double(key^2));
    shiftAmount *= 10;
    shiftAmount = round(shiftAmount);

    // Return shiftAmount over.
    return shiftAmount;
}

// Function to move all letters over by 2.
// Parameters: a string message from user.
// Returns: string encrypted message
string encryptMessage(string message, int key){
    // Move all letters in string over 2 letters
    for(int i = 0; i < message.length(); i++){        
        message[i] = message[i] + shiftEncryptCharacter(key);
    }

    return message;
}

// Function to move all letters backwards over by 2.
// Parameters: a string message from user.
// Returns: string decrypted message
string decryptMessage(string message, int key){
    // Move all letters in string back 2 letters
    for(int i = 0; i < message.length(); i++){
        message[i] = message[i] - shiftEncryptCharacter(key);
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