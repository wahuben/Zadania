#include <string>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool isPalindrome(string s)
{
		
	
        int back = s.length()-1; //ostatnia litera s
        
        
        bool palindrome = true; //zakładamy że jest
        
        for (int i=0; i<s.length()/2 && palindrome; i++) //tylko do połowy stringu
        
                if (s[i] != s[back--]) //back po podstawieniu zmniejszy się o 1 z ostatniej na przedostatnią itd.
               
                        palindrome = false;
                        
                         if(palindrome) cout<< "Tak" <<endl;
                         
                         else{
                         	cout<< "Nie" <<endl;
						 }
                       
                               
                       
                        return palindrome;
                        
                        
                        
}

int main()
{


string tekst;
tekst = "nie";	
	
	
isPalindrome("Kobyla ma maly bok");
isPalindrome("abc");
isPalindrome("Aaa");
isPalindrome("Abba");
isPalindrome("121");
isPalindrome("1 221");
isPalindrome("aa aab");


if (isPalindrome(tekst) == 1) {
tekst = "Tak";	


}


       		 ofstream plik;

				  plik.open ("C:\\Users\\WAHuben\\Desktop\\Zadanie\\zapiss.txt");
				  plik << ;
				  plik.close();


        return 0;
}
