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

       		ofstream plik;

				  plik.open ("C:\\Users\\WAHuben\\Desktop\\Zadanie\\zapiss.txt");
				  
				  
				  
				  plik << isPalindrome("Kobyla ma maly bok");
				  plik << isPalindrome("abc");
				  plik << isPalindrome("Aaa");
				  plik << isPalindrome("Abba");
				  plik << isPalindrome("121");
				  plik << isPalindrome("1 221");
				  plik << isPalindrome("aa aab");
				
				  plik.close();


        return 0;

}
