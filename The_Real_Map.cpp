#include <iostream>
#include <map>

using namespace std;
int main(int argc, char *argv[]) {
	
	// syntax: std::map < datatype1, datatype2> name_of_dicionary. 

	// Declare the dictionary using map and the key and value data types. 
	map<string,string > codon;
	
	// insert the key value pair ito a map.
	codon["ATT"]="I"; codon["ATC"]="I"; codon["ATA"]= "I"; 
	codon["CTT"]="L"; codon["CTC"]="L"; codon["CTA"]= "L"; codon["CTG"]= "L"; codon["TTA"]= "L"; codon["TTG"]="L"; 
	codon["GTT"]="V"; codon["GTC"]="V"; codon["GTA"]= "V"; codon["GTG"]= "V"; 
	codon["TTT"]="F"; codon["TTC"]="F"; 
	codon["ATG"]="M";
	codon["TGT"]="C"; codon["TGC"]="C"; 
	codon["GCT"]="A"; codon["GCC"]="A"; codon["GCA"]="A"; codon["GCG"]="A"; 
	codon["GGT"]="G"; codon["GGC"]="G"; codon["GGA"]="G"; codon["GGG"]="G"; 
	codon["CCT"]="P"; codon["CCC"]="P"; codon["CCA"]="P"; codon["CCG"]="P"; 
	codon["ACT"]="T"; codon["ACC"]="T"; codon["ACA"]="T"; codon["ACG"]="T"; 
	codon["TCT"]="S"; codon["TCC"]="S"; codon["TCA"]="S"; codon["TCG"]="S"; codon["AGT"]="S"; codon["AGC"]="S";
	codon["TAT"]="Y"; codon["TAC"]="Y";
	codon["TGG"]="W"; 
	codon["CAA"]="Q"; codon["CAG"]="Q"; 
	codon["AAT"]="N"; codon["AAC"]="N";
	codon["CAT"]="H"; codon["CAC"]="H"; 
	codon["GAA"]="E"; codon["GAG"]="E"; 
	codon["GAT"]="D"; codon["GAC"]="D";
	codon["AAA"]="K"; codon["AAG"]="K"; 
	codon["CGT"]="R"; codon["CGC"]="R"; codon["CGA"]="R"; codon["CGG"]="R"; codon["AGA"]="R"; codon["AGG"]="R";
	codon["TAA"]="Stop"; codon["TAG"]="Stop";

	// # --------------------------------------------------------------------")
    /*
	// Iterate over the map
	//create an iterator for the vector in order to print it out. 
	std::map<string, string>::iterator i ;
	
	// print the dictionary key-value pair.
	for (i = codon.begin(); i != codon.end(); i++){
		string triplet = (*i).first;
		string amino_acid = (*i).second;
		std::cout << triplet <<" "<< amino_acid << "\n";
	}
	*/
	
	//#--------------------------------------------------------------------
	// insert the key value pair ito a map.
	codon.insert(std::make_pair("TGA","Stop"));
	
	// iterate using auto and a reference to print the dictionary. # note: Use this way. 
	for (auto&  i : codon) {
		
		std::cout << i.first << "\t" << i.second << std::endl;		
	}
	
	//#--------------------------------------------------------------------
	// size : Determine the number of key value pairs in a map
	std:: cout << codon.size() << " ordered pairs \n" ;	
	
	
	//#--------------------------------------------------------------------
	// Determine the value associated with the key. 
	std::cout << "The value associated with the key is :"<< codon["ATT"] << '\n';
	
	//#--------------------------------------------------------------------
	// count: Return the number of keys
	std::cout << codon.count("ATG") << '\n';
	
	//#--------------------------------------------------------------------
	// reset a a maap to it empty state
	// codon.clear()
	
	//#--------------------------------------------------------------------
	// check if a map is empty 
	 std::cout << "Is the dictionary empty? " << codon.empty() << std::endl;
	
	// # --------------------------------------------------------------------")





	map<long, double> dictionary;
	
	// Set the key values
	dictionary[1] = 1.5;
	dictionary[2] = 5.3;
	dictionary[3] = 7.9;
	
	// # --------------------------------------------------------------------")
	
	// print only values in the dictionary. 
	/*for (long i = 0 ; i < 5 ;i ++){
		std::cout << "The value of dictionary["<< i <<"] is : ";
		
		if (dictionary.count(i) > 0) {
			std::cout << dictionary[i] << endl;
		}
		else{
			std::cout << "undefined" << endl;
		}
	}
	
	// # --------------------------------------------------------------------")

	// METHOD A
	map<long, double>::iterator i ;
	
	for (i = dictionary.begin(); i != dictionary.end(); i++){
		
		long key = i ->first; 
	    double val = i ->second;
		
		std::cout << "The key is "<< key  << " and the value is "<< val << '\n';
	}
	// # --------------------------------------------------------------------")

	// METHOD B
	map<long, double>::iterator i ;
	
	for (i = dictionary.begin(); i != dictionary.end(); i++){
		
		long key = (*i).first; 
	    double val = (*i).second;
		
		std::cout << "The key is "<< key << " and the value is "<< val << '\n';
	}*/	
	
	// SPECIAL NOTE
	// (*i).first is also written as i -> first 
	// # --------------------------------------------------------------------")

}