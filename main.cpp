#include <iostream>
using namespace std;
int main(int argc,char* args[]){
	if(argc<=0){
		return 0;
	}
	cout<<args[1];
	char input[10];
	cin>>input;
	cout<<input;
	return 0;
}
