#include <iostream>
#include <fstream>
#include <regex>
#include <string>
using namespace std;

class sprawdz {
       ifstream plik1;
       ofstream plik2;
public:
        sprawdz();
        ~sprawdz();
    void match();
};
sprawdz::sprawdz() {
    plik1.open("C:\plik1.txt");
    plik2.open("C:\plik2.txt");
}
void sprawdz::match() {
    string input;
        regex regularne("[0-9]{2}-[0-9]{3}");
        while(!plik1.eof()) {
            plik1>>input;
            if(regex_match(input,regularne)) {
                plik2<<input<<endl;
            }
        }
}
sprawdz::~sprawdz() {
    plik1.close();
    plik.close();
}

int main() {
    sprawdz s1;
    s1.match();
    return 0;
}
