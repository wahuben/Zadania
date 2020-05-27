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
		
		void wprowadz();
};

gra::gra(){
    plik1.open("c:\\dogry.txt");
    plik2.open("c:\\wynikJSON.txt");
};

void gra::wprowadz(){
	
	 int i=0;
	
	 if(plik1.good())  
         while(!plik1.eof()&&i<3){
            getline(plik1, napis);
			gameInfo.push_back(napis);i++;				
        }

};

class grafps:public gra
{
	string tryb;					
	    public:
		void wprowadzfps();
		void wypiszfps();
};

void grafpa::wprowadzfps(){
	wprowadz();
	    plik1>>tryb;
};

void grafps::wypiszfps(){
	plik2<<"{\"nazwa"<<"\":\""<<gameInfo[0]<<"\",\"rok\":\""<<gameInfo[1]<<"\,\"producent\":\""
	<<gameInfo[2]<<"\",\"tryb"<<"\":\""<<tryb<<"\"}";
};

gra::~gra(){
    plik1.close();
    plik2.close();
}

int main() {
	grafps s1;
	s1.wprowadzfps();
	s1.wypiszfps();
	return 0;
}
