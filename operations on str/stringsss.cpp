#include <iostream>
#include <cstring>
using namespace std;



//The length of the sentence (the number of characters).


int main() {
    string str = "GoMyCode Algeria is awesome.";
    
    cout <<endl<< "Affichage de la phrase:"<<endl ;
    for(int i = 0; i < str.length(); i++){
        cout << str[i];
    }

    // you can also use str.length()
    cout << endl<<"String Length = " << str.size()<< endl;
    
    
    int words =0;
    int len = str.size(); //length of sentence
    
    
    //The number of words in the sentence (assuming that the words are separated by a single space).
	for(int i = 0; i < len; i++)
	  {
	    // check if current character is a space
	    if(str[i] == ' ')
	    {
	      // if it is a space, increment word count
	      words++;
	    }
	
	  }
	  
	   words = words + 1;

  		cout << "No. of words = " << words << endl;
	
	
	
	//The number of vowels in the sentence.
	
	
	int vowelcount=0;
	
	for(int i=0; i<len; i++){
	
			if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
				
				vowelcount++;
				
			}
		
		
	}
	cout << "No. of voewls = " << vowelcount << endl;


return 0;
}

    

