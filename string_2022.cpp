#include <iostream>
#include <string>
#include <cctype>

// PROTOTYPE HERE. 
std::string reverse(std::string string_of_interest);
    
std::string change_to_uppercase(std::string string_of_interest);
    
bool is_this_a_palindrome(std::string string_of_interest);



using namespace std;

int main(int argc, char *argv[]) {
    
    // Create a string. 
    std::string string_one ("Beautiful");
    
    // Clear the string. 
    string_one.clear();
    std::cout  <<  string_one;
    
    //#----------------------------------------------------
    
    std::string name;
    //std::cout << "Enter your name:";
    // read a string that contains whitespace characters 
    //getline(cin, name);
    //std::cout << "Hello " << name; 
    
    //#----------------------------------------------------
    
    std::string meg;
    
    meg = "Meghan";
    std::cout << "The number of characters are:" << meg.length() ;
    
    //#----------------------------------------------------
    // return the character at index position k . 
    std::cout << '\n' << meg.at(2);
    
    std::cout << "\nindex 0:" << meg[0];
    
    // Cant assign new value to the string. 
    //meg[0] = "h";
    
    std::cout << meg; 
    //#----------------------------------------------------
    
    // return a substring from index 2 to 5
    std:: cout << '\n' << meg.substr(2, 5);
    
    //#----------------------------------------------------
    
    std::string egg ;
    egg = "Keghan";
    
    std::cout <<"\n" << meg.compare(egg);
    // return 0 if two strings are equal
    // If a single character is different add the difference on to the total comparison. k L M N O P
    // +2 +1 0 -1 -2 -3
    //#----------------------------------------------------
    
    // Search for a pattern and return the first index at which the pattern appears. 
    std::cout << "\n" << meg.find("Megh");
    
    //#----------------------------------------------------
    std::string harry;
    harry = "Harribold";
    // At position 1, delete four characters 
    harry.erase(1,4);
    std::cout<< "\n" << "erased: " << harry;
    
    //#----------------------------------------------------
    
    std::string golden_word;
    
    // Insert the string inside egg at position 0 of harry. 
    golden_word = harry.insert(0, egg);
    std::cout << "\n" << golden_word;
    
    //#----------------------------------------------------
    
    //replace 
    std::string candy = "I like a lot of";
    std::string candy_bars = "I love sweeties and chocolate and ";
    // starting at pos, replace n characters in the string, with another string, but keep the string.  
    std::cout << "\n" << candy.replace(0, 6,  candy_bars);
    
    //#----------------------------------------------------
    // Make a string
    std::string sweet = "Chocolate_Sauce";
    std::cout << "\n" << sweet;
    
    // Make a new string based off another one. 
    std::string eat_sweet = sweet.c_str();
    std::cout << "\n" <<eat_sweet;
    
    //#----------------------------------------------------
    
    std::string str = "abc";
    
    // Add a D
    str += "d";
    
    std::cout << "\n" << str;
    
    //#----------------------------------------------------
    
    // Comparison based on ASCII Codes. 
    if (str == "alphabet"){
        
        std::cout << "\nThe string is equal" << std::endl;
    }else{
        
        std::cout << "\nThe string is not equal" << std::endl ;
    }
    //#----------------------------------------------------
    // Iterate through the characters of a string. 

    std::string fruits = "Watermellon";
    
    for ( int i = 0 ; i < fruits.length(); i++){
        std::cout <<fruits[i] << "\n";
    }
    
    //#----------------------------------------------------
    
    std::cout << reverse("Apples");
    
    //#----------------------------------------------------

    std::cout <<  "\n" << change_to_uppercase("Apples");
    
    //#----------------------------------------------------
    
    std::cout << "\n"  << is_this_a_palindrome("Level");
    
    //#----------------------------------------------------

    /*
    // STRING LIBRARY has many methods. 
    push_back  
    pop_back 
    append 
    starts_with  
    ends_with  
    contains 
    copy
    resize 
    resize_and_overwrite 
    swap 
    operator+= 
    */
    
    //#----------------------------------------------------
    // CCTYPE LIBRARY changes individual characters. 
    // isalpha
    // isupper
    // islower
    // isdigit
    // isxdigit
    // isalnum
    // ispunct
    // isspace
    // isprint 
    // toupper
    // tolower
    
    //#----------------------------------------------------

    
}

// FUNCTION: Reverse each character in a string. 
std::string reverse(std::string string_of_interest){
    
    string rev = "";
    
    for (int i = string_of_interest.length() -1 ; i >=0 ; i--)
        rev += string_of_interest[i];
    
    return rev;
}

// FUNCTION : convert each character to a string. 
std::string change_to_uppercase(std::string string_of_interest){
    
    std::string string_result = "";
    
    for( int i = 0 ; i < string_of_interest.length(); i++){
        
        string_result += toupper(string_of_interest[i]);
    }
    return string_result;
}

// FUNCTION : recognise a palindrome
bool is_this_a_palindrome(std::string string_of_interest){
    
    int n = string_of_interest.length();
    
    for (int i = 0 ; i < n/2; i++){
        
        // Select and compare characters
        if (string_of_interest[i] != string_of_interest[n -i - 1])
            
            return false;
    }
        return true; 
    }