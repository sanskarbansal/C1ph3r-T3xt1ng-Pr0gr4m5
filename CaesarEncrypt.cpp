#include<iostream>
#include<map>
#include<conio.h>
using namespace std;
map<char, int> val;
string arr[] ={"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};
string arr2[] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"};

int main(){
    char temp = 'a';
    for(int i = 0; i < 26; i++){
        val[temp++] = i;
    }
    temp = 'A';
    for(int i = 0; i < 26; i++){
        val[temp++] = i;
    }
	string input;
	int key;
	cout << "Enter the string you want to encrypt: ";
	getline(cin, input);
	cout << "\nEnter the key for the Encryption(Must Remember to Decrypt): ";
	cin >> key;
	string output = "";
	for(int i = 0; i < input.size(); i++){
            if(input[i] == ' '){
                output = output + " ";
            }else{
                output = output + ((input[i] >= 97)?(arr[(val[input[i]]+key)%26]):(arr2[(val[input[i]]+key)%26]));
            }
	}
	cout << output;
	getch();
	return 0;
}
