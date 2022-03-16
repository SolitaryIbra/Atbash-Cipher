#include <iostream>
#include  <bits/stdc++.h>


using namespace std;
// Global Alphabet
string alphabet =  "abcdefghijklmnopqrstuvwxyz";
string anti_alphabet = "zyxwvutsrqponmlkjihgfedcba";
string ALPHABET = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
string anti_ALPHABET = "ZYXWVUTSRQPONMLKJIHGFEDCBA";
int MAX = alphabet.length();


char encryption(string name) {
    string cipher_name = "";
    for (int i = 0; i < name.length(); i++)
        for (int j = 0; j < MAX; j++) {
            if (name[i] == alphabet[j])
                cipher_name = cipher_name + anti_alphabet[j];
            else if (name[i] == ALPHABET[j])
                cipher_name = cipher_name + anti_ALPHABET[j];
            else if (isdigit(name[i]))
            {
                cipher_name = cipher_name + name[i];
                i++;
            }
            else if (isblank((name[i]))) {
                cipher_name = cipher_name + ' ';
                i++;
            }
        }
    cout << "the encryption of " << name << " is: " << cipher_name << endl;
}

int main()
{
    string name, encrypted_name ;
    while (true)
    {
        cout << "To Exit, Enter 0"<<endl;
        cout << "Enter The Name You Want TO Cipher or DeCipher: ";
        getline (cin, name );
        if (name == "0") break;
        else encrypted_name = encryption(name);
    }
}