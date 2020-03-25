#include <iostream>
#include <fstream>

using namespace std;
 
bool anagram(string slowo1, string slowo2){
    if (slowo1.length()!=slowo2.length())
    return false;
 
    
    for (int i = 0; i<slowo1.length()-1; i++)
    {
	    for (int j = 0; j<slowo2.length()-1; j++)
	    {
            if (slowo1[j]>slowo1[j+1])
                swap(slowo1[j], slowo1[j+1]);

            		if (slowo2[j]>slowo2[j+1])
                		swap(slowo2[j], slowo2[j+1]);
   			 }	
}
     return slowo1==slowo2;
}
 
int main() {
   	
   	cout<<"Podaj slowo: ";
    string napis = "";
    cin >> napis;
   	cout<<"Podaj ile slow: ";
    int n = 0;
    cin >> n;
   	cout<<"Podaj te slowa: ";
    string * wyrazy = new string[n];
   
    for(int i=0;i<n;i++) {
        cin>>wyrazy[i];
    }
   
   
   cout<<"Znalezione anagramy: ";
    for(int i=0;i<n;i++) {
        if(anagram(napis,wyrazy[i])) {
            cout<<wyrazy[i]<<endl;
            
            ofstream zapis("C:\\Users\\WAHuben\\Desktop\\zapis.txt");
	
			zapis<<"[{"<<"slowo1: "<<napis<<", "<<"slowo2: "<<wyrazy[i]<<", "<<"anagram?: "<<"TAK"<<"]}";
	
			zapis.close();
	
        }
		else{
   			cout<<"Brak";
   			
   			ofstream zapis("C:\\Users\\WAHuben\\Desktop\\zapis.txt");
	
			zapis<<endl<<"[{"<<"slowo1: "<<napis<<", "<<"slowo2: "<<", "<<wyrazy[i]<<", "<<"anagram?: "<<"NIE"<<"]}";
	
			zapis.close();
   			
		}
    }
   
   
   
    return 0;
}
