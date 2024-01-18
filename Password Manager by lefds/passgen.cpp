#include<iostream>
#include<string>
#include<cstdlib>	// Chama a função rand() and srand()
#include<ctime>		// Chama a função time()
#include<fstream>
using namespace std;



void start(){
	cout<<"\033[1;33mLockBox - by lefds\033[0m\n";
	cout << "Options:\n1. Import vaults\t2. Manage vaults\t3. Generate a password\n ";
}


void genpass() {
	int length;	// Declara a variável length
	string possible_characters = "0123456789abcdefghijklmnopqrstuvwxyzç!@#$%¨&*()-=/.|<>:;?\"'";
	string USER;
	string path = "C:\\Users\\" + USER + "\\Documents\\password.txt";
	string password = "";
	char stor_pass; 
	srand(time(0));
	cout << "How many characters? ";
	cin >> length;
	for (int i = 0; i < length; i++) {
		int index = rand() % possible_characters.size();	// Gera os caractéres de forma randômica
		password += possible_characters[index];
	}
	cout << "Generated Password:\033[1;32m " << password << "\033[0m\n";
	cout << "Do you want to storage it into a file? (Y/N): ";
	ofstream file;
	cin >> stor_pass;
	switch (stor_pass) {
	case 'Y':
	case 'y':
		cout << "Username: ";
		cin >> USER;
		file.open(path);
		file << password;
		file.close();
		cout << "File 'password.txt' generated in your 'Documents' folder.\n";
		break;
	case 'N':
	case 'n':
		cout << "Password not generated.\n";
		break;
	}
}


int main(void) {
	int OPT;

	start();

	for (int i = 1; i > 0;) {
		cout << "\033[1;32m>>> \033[0m";
		cin >> OPT;
		switch (OPT) {
		case 1:
			cout << "\033[31mThat option is under development, and not available.\033[0m\n";
			break;
		case 2:
			cout << "\033[31mThat option is under development, and not available.\033[0m\n";
			break;
		case 3:
			genpass();
			i = 0;
			break;
		default:
			cout << "\033[1;31mInvalid option.\033[0m\n";
		}
	}
	return 0;
}

// In development.