#include <iostream>
#include <map>

int main(int argc, char *argv[]) {
    
    //#--------------------------------------------------------------------
        
    // declare the map 
    std::multimap<char, int> multi_mp;
    
    // Set the key values in the map 
    multi_mp.insert(std::pair <char, int> ('a', 3));
    multi_mp.insert(std::pair <char, int> ('b', 2));
    multi_mp.insert(std::pair <char, int> ('b', 1));
    multi_mp.insert(std::pair <char, int> ('a', 1));
    multi_mp.insert(std::pair <char, int> ('a', 4));
    multi_mp.insert(std::pair <char, int> ('b', 2));
    
    //#--------------------------------------------------------------------
    
    // How many values are there for a?
    std::cout << multi_mp.count('a') << '\n';
    
    //How many values are there for b?
    std::cout << multi_mp.count('b') << '\n';
    
    
    std::cout << "The map is : \n";
    std::cout << "KEY\tELEMENT\n";
    
    // Print the whole multimap 
    for (auto&  i : multi_mp) {
        
        std::cout << i.first << "\t" << i.second << std::endl;
        std::cout << i.second <<std::endl;
        
    }
    std::cout << std::endl;
    
    //#--------------------------------------------------------------------
    //Print the whole multimap with an iterator. 
    std::cout << "The map of f is : \n";
    std::cout << "KEY\tELEMENT\n";
    
    // Create an iterator
    std::multimap<char,int>::iterator it;
    
    for (it = multi_mp.begin(); it != multi_mp.end(); it++){
        
        char k = (*it).first; // print the key 
        int v = (*it).second; // print the value 
        
        std::cout << '\t' << k <<'\t' << v;
    }
    std::cout << std::endl;
    
    //#--------------------------------------------------------------------

    std::cout << "A ONLY : \n";
    
    // YouTube : Get a specific key's values from the multimap A
    auto i = multi_mp.equal_range('a');
    
    for (auto it = i.first ; it!= i.second ; it++ ){
        std::cout << (*it).first <<'\t' << (*it).second << "\n";
    }
    std::cout << std::endl;
    
    //#--------------------------------------------------------------------
    std::cout << "B ONLY : \n";
    
    // YouTube : Get a specific key's values from the multimap B
    auto range_b = multi_mp.equal_range('b');
    
    for (auto it = range_b.first ; it!= range_b.second ; it++ ){
        std::cout << (*it).first <<'\t' << (*it).second <<'\n';
        }
    std::cout << std::endl;
    
    
    //#--------------------------------------------------------------------
    
    // Multimap: multiple elements can have same keys.
    
    // Declare a multimap object	
    std::multimap <int, int> r ;
    
    // insert the key value pair ito a map.
    r.insert(std::pair <int, int> (1, 40));
    r.insert(std::pair <int, int> (2, 30));
    r.insert(std::pair <int, int> (3, 60));
    r.insert(std::pair <int, int> (6, 50));
    r.insert(std::pair <int, int> (6, 10));
    
    // create an iterator
    std::multimap <int, int> :: iterator itr;
    
    std::cout << "\nThe multimap r is : \n";
    std::cout << "\tKEY\tELEMENT\n";
    for (itr = r.begin(); itr != r.end(); ++itr){
        std::cout << '\t' << itr->first << '\t' << itr -> second << '\n';
        }
    
    std::cout << std::endl;
    //#--------------------------------------------------------------------
    
    // Multimap: same keys for different values. 
    
    // Declare a multimap object
    std::multimap <std::string, int> q;
    
    // insert the key value pair ito a map.
    q.insert(std::pair <std::string, int> ("a", 40));
    q.insert(std::pair <std::string, int> ("a", 30));
    q.insert(std::pair <std::string, int> ("a", 60));
    q.insert(std::pair <std::string, int> ("b", 50));
    q.insert(std::pair <std::string, int> ("b", 10));
    
    // create an iterator
    std::multimap <std::string, int> :: iterator tr;
    
    std::cout << "\nThe multimap q is : \n";
    std::cout << "\tKEY\tELEMENT\n";
    
    for (tr = q.begin(); tr != q.end(); ++tr){
        std::cout << '\t' << tr->first << '\t' << tr -> second << '\n';
    }
    
    std::cout << std::endl;
}