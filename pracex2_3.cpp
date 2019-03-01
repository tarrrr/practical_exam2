#include<iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
char alphabet[8][8];
char all[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

void showAlphabet();
void randomAlphabet();

int main(){
	srand(time(0));	
	randomAlphabet();
	showAlphabet();
}

void showAlphabet(){
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			cout << alphabet[i][j] << " ";
		}
		cout << "\n";
	}
}

//Write definition of function randomAlphabet() here.
void randomAlphabet(){
	int r;
	for(int i = 0; i < 8; i++){
		r=rand()%26+1;
		for(int j = 0; j < 8; j++){
	    alphabet[i][j] = all[r];
	}
}
}

