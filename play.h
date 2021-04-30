#include "Caesar_Cipher_Encrypt.h"
#include "Caesar_Cipher_Decrypt.h"
#include <iostream>
#include <string>

using namespace std;

bool exit(bool f){
	system("clear");
	cout << "Exiting ...\n";
	system("sleep 2");
	f = false;
	return f;
}

bool try_again(bool f){
	system("clear");
	f = true;
	return f;
}

void play(){
	string str;
	int s;
	char choice;
	bool flag = true;
	while(flag){
      cout <<" -------------------------------------------------\n|____Caesar Cypher Encrypt & Decrypt Algorithm____|\n -------------------------------------------------\n";
      cout << "Encrypt [E] / Decrypt [D] / Quit [Q] / Clear [C] =>";
      cin >> choice;
	  if (choice == 'E'){
	      cout << "Enter a String To Encode =>";
	      cin.ignore();
	      getline(cin, str);
	      cout << "Enter shift count =>";
	      cin >> s;
	      string encrypted = encrypt(str, s);
	      cout << "Encrypted String => \t" << encrypted << endl;
	  }else if(choice == 'D'){
	      cout << "Enter a String To Decrypt =>";
	      cin.ignore();
	      getline(cin, str);
	      cout << "Enter shift count =>";
	      cin >> s;
	      string decrypted = decrypt(str, s);
	      cout << "Decrypted String => \t" << decrypted << endl;
	  }else if(choice == 'C'){
	      system("clear");
	  }else if(choice == 'Q'){
	      flag = exit(flag);
	  }else{
	      char q;
	      system("clear");
	      cout << "Ooops, Wrong Choice .\nTry using only [E, D, Q, C] Capitalized\n"<<endl;
	      cout << "Try again..[y/n]:";
	      cin >>q;
	      if(q == 'y'){
	          flag = try_again(flag);
	      }else{
	          flag = exit(flag);
	      }
	  }
  }
}
