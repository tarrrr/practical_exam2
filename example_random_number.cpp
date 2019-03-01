#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
	for(int i=0;i<10;i++){
	srand(time(0));	
	cout << rand()%5+1; //possible values are 1,2,3,4,5
}
}