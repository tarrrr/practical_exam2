#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

template <typename T>
void sort(T x[],T N){
	for(int i = 1; i < N; i++){
		for(int j = i; j > 0; j--){
			if(x[j] < x[j-1]){
				T temp = x[j];
				x[j] = x[j-1];
				x[j-1] = temp;
			}else{
				break;
			} 
		}
	}
}

int main(){
	ifstream R;
	R.open("score1.txt");
	string m;
	while(getline(R,m)){
		atof(m.c_str());
	}
	R.close();
	ofstream W;
	W.open("rank.txt");
	for(int i=0;i<20;i++){
		// if(m[i]<){}
	}
	return 0;
}

