#include <iostream>
#include <string>
#include "messageFunctions.h"

using namespace std;



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
    int key = 0;

    if(option == 1 || option == 2){
        cout << "Please Enter a integer key for encryption/decryption: ";
        cin >> key;
    }


    // Go through options available to user.
    if(option == 1){
        cout << "Enter a message to encrypt: ";
        
        // Get user input for the whole line.
        // cin.get() will prevent previous carriage
        // return from stopping the file.
        cin.get();
        getline (cin, message);

        cout << "Encrypted Message: " << encryptMessage(message, key) << endl;
    }
    else if(option == 2){
        cout << "Enter a message to decrypt: ";

        // Get user input for the whole line.
        cin.get();
        getline (cin, message);

        cout << "Decrypted Message: " << decryptMessage(message, key) << endl;
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
