#include<iostream>
#include<map>
using namespace std;

map<char, map<char, char>> vig;

int main(){
	char row = 'A';
	for(int i = 1; i < 27; i++){
		char col = 'A';
		char val = row;
		for(int j = 1; j < 27; j++){
			if(val > 90){
				val = 'A';
			}
		    vig[row][col++] = val++;
		}
		row++;
	}
	string input;
	cout << "Enter the vigener ciphertext you want to decode(in capital*): ";
	cin >> input;
	string key;
	cout << "\nEnter the key: ";
	cin >> key;
	string output = "";
	int i = 0; int j = 0;
	while(i < input.size()){
		if(j >= key.size())
			j = 0;
		for(auto t: vig[key[j]]){
			if(t.second == input[i]){
			    output = output + t.first;
			    break;
			}
		}
		i++;
		j++;
	}
	cout << "\nPlain Text: " << output;
	return 0;
}
