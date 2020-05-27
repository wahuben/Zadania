#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <vector>

using namespace std;


class gra
{
	
	public:
		
		vector<string> gameInfo;
		string napis;
		
		ifstream plik1;
    	ofstream plik2;
		
		gra();
        ~gra();
		
		void wprowadzPlik();
};

gra::gra(){
    plik1.open("c:\\palindromy.txt");
    plik2.open("c:\\wynikJSON.txt");
};

void gra::wprowadzPlik(){
	
	 int i=0;
	
	 if(plik1.good())  
        while(!plik1.eof()&&i<3){
            getline(plik1, napis);
			gameInfo.push_back(napis);i++;				
        }

};

class graFPS:public gra
{
	string tryb;				
	
	public:
		void wprowadz_FPSA();
		void wypisz_FPSA();
};

void graFPS::wprowadz_FPSA(){
	wprowadzPlik();
	plik1>>tryb;
};

void graFPS::wypisz_FPSA(){
	plik2<<"{\"nazwa"<<"\":\""<<gameInfo[0]<<"\",\"rok\":\""<<gameInfo[1]<<"\,\"producent\":\""
	<<gameInfo[2]<<"\",\"tryb"<<"\":\""<<tryb<<"\"}";
};

gra::~gra(){
    plik1.close();
    plik2.close();
}

int main(int argc, char** argv) {
	graFPS g1;
	g1.wprowadz_FPSA();
	g1.wypisz_FPSA();
	return 0;
}
