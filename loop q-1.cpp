#include<stdio.h>
using namespace std;

int main(){
	char ch = 'a';
	do{
	cout << ch <<"";
	ch += 4;
	}while(ch <= 'z');
	cout<<endl;
	return 0;
	
}