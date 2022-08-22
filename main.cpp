#include <iostream>
#include <string>

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

int main(){
    // Print Options
    cout << "Enter a Option" << endl;
    cout << "1. Encrypt Message" << endl;
    cout << "2. Decrypt Message" << endl;
    cout << "3. Reverse String" << endl;

    int option;
    cout << "Enter Option Here: " ;
    cin >> option;
    
    string message;

    // Go through options available to user.
    if(option == 1){
        cout << "Enter a message to encrypt: ";
        
        // Get user input for the whole line.
        cin.get();
        getline (cin, message);

        cout << "Encrypted Message: " << encryptMessage(message) << endl;
    }
    else if(option == 2){
        cout << "Enter a message to decrypt: ";

        // Get user input for the whole line.
        cin.get();
        getline (cin, message);

        cout << "Decrypted Message: " << decryptMessage(message) << endl;
    }
    else if(option == 3){
        cout << "Enter a message to reverse: ";
        
        // Get user input for the whole line.
        cin.get();
        getline(cin, message);

        cout << reverseMessage(message);
    }
    else{
        cout << "Invalid Option" << endl;
    }
    return 0;
}
