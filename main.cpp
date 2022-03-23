// Name: Ibrahim Mohamed
// Student ID: 20211002
// Course Name/ID: Structured Programming / CS-112
// Program: A simple program to cipher and decipher using 'Atbash' method
// Assignment due: 27/3/2022
#include <iostream>


using namespace std;
// Global Alphabet and reversed Alphabet.
string alphabet =  "abcdefghijklmnopqrstuvwxyz";
string anti_alphabet = "zyxwvutsrqponmlkjihgfedcba";
string ALPHABET = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
string anti_ALPHABET = "ZYXWVUTSRQPONMLKJIHGFEDCBA";

//Function To print the encrypted words, parameter name is the plane text to cipher
char encryption(string name){
//    define the ciphered name
    string cipher_name = " ";
//    Two loops to pass by alphabets and name letter by letter.
    for (int i = 0; i < name.length(); i++)
        for (int j = 0; j < alphabet.length(); j++) {
//            Check if letter is in alphabet lowercase
            if (name[i] == alphabet[j])
                cipher_name  += anti_alphabet[j];
//            Check if letter is in alphabet Uppercase
            else if (name[i] == ALPHABET[j])
                cipher_name +=   anti_ALPHABET[j];
//            Check if letter is a number
            else if (isdigit(name[i])){
                cipher_name +=  name[i];
                i++;
            }
//            Check if letter is blank or space
            else if (isblank((name[i]))){
                cipher_name +=  ' ';
                i++;
            }
        }
//    Print out The encrypted Word.
    cout << "the encryption of " << name << " is: " << cipher_name << endl;
    return 0;
}

int main()
{
//    Define plane text needed to be ciphered.
    string plane_text;
//    Loop to continue to cipher unless input '0'
    while (true){
//        Input Message to Cipher or '0' to exit
        cout << "To Exit, Enter 0"<<endl;
        cout << "Enter The Name You Want TO Cipher or DeCipher Using 'Atbash' Cipher: ";
        getline (cin, plane_text );
//        Check if The User Wants to continue or not.
        if (plane_text == "0") break;
        else  encryption(plane_text);
    }
}