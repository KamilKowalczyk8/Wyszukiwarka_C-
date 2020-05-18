#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <math.h>
#include <regex>

using namespace std;

int main(int argc, char** argv) {

string szukaj;
string input;
cout<<"Podaj wyszukiwanie ";
cin>>szukaj;
 regex regularne(szukaj); 
	ofstream plik1;
   ifstream plik;  
   
   plik.open("1.txt");  
   
   if(plik.good())  
            while(!plik.eof())  
       
        {
        	
              plik>>input;
     
              cout<<endl;
             if(!cin) break;
                if(input=="koniec") //koniec petli
                        break;
                if(regex_match(input,regularne))
				{
                        cout<<input;
                               
                }
                else
                {
                	cout<<"Brak w pliku";
				}
                       
     
			}
			  
                   plik.close(); 
				  
cout<<endl;   
 return 0;
}
