#include <stdio>

#include "Utils.H"

using namespace std;

int main(int argc, char * argv[]){
	map<char, double> frequencyMap;

	if (argc < 2){
		cout << "Usage: ./am" << endl;
	}

	try{
		frequencyMap = generateSymbolFrequency();	
	}
	catch(string & e){
		cout << e << endl;
	}

	return 0;
}
