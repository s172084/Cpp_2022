#include <iostream>
#include <vector>

using namespace std;
int main(int argc, char *argv[]) {
    
    
    // Declare a vector using vector<type> name. 
    vector<int> vector_of_integers;
    vector<char> vector_of_characters;
    vector<double> vector_of_doubles;
    vector<float> vector_of_floats;
    
    //#----------------------------------------------------
    
    // Add numbers to the vector
    vector_of_integers.push_back(10);
    vector_of_integers.push_back(20);
    vector_of_integers.push_back(30);
    
    
    for (auto i : vector_of_integers){
        std::cout << i << " ";
    }
    
    std::cout << "\n";
    
    //#----------------------------------------------------
    
    // Insert a number in the middle of a vector, state the index and number. 
    vector_of_integers.insert(vector_of_integers.begin()+2, 25);
    
    for (auto i : vector_of_integers){
        std::cout << i << " ";
    }
    
    std::cout << "\n";
    
    //#----------------------------------------------------
    // remove a number at index 1
    vector_of_integers.erase(vector_of_integers.begin()+1 );
    
    for (auto i : vector_of_integers){
        std::cout << i << " ";
    }
    
    std::cout << "\n";
    
    //#----------------------------------------------------
    
    // Which number is at index 1	
    std::cout <<  vector_of_integers.at(1);
    
    std::cout << "\n";
    
    //#----------------------------------------------------
    
    // How many elements are there? 
    std::cout <<  vector_of_integers.size();
    
    std::cout << "\n";
    
    //#----------------------------------------------------
    
    // Get element at index position 0,1,2
    std::cout<< vector_of_integers[0]<<  " ";
    std::cout<< vector_of_integers[1]<<  " ";
    std::cout<< vector_of_integers[2]<<  " ";
    std::cout << "\n";
    
    //#----------------------------------------------------
    // Replace the value at index 0 to be 70. 
    
    vector_of_integers[0] = 70;
    
    for (auto i : vector_of_integers){
        std::cout << i << " ";
    }
    
    std::cout << "\n";
    //#----------------------------------------------------
    
    // Print it with brackets. 
    std::cout <<"[";
    
    for (int i = 0 ; i < vector_of_integers.size(); i++) {
        
        if(i > 0) {
            std::cout << ",";
        }
        
        std::cout << vector_of_integers[i];
    }
    std::cout << "]" << std::endl;
    
    //#----------------------------------------------------
    
    /// create a vector of a predefined size. 
    // Specify that there should be 18 elements in the vector upon creation.
    // Create an integer vector containing zero values.
    
    const int N_HOLES = 18;
    
    std::vector<int> golfscores (N_HOLES);
    
    for(auto i : golfscores){
        std::cout << i <<  " ";
    }
    
    //#----------------------------------------------------
    
    // Initialise a character vector. 
    std::vector<char> vee1;
    
    // create a two Dimensional Vector 
    std::vector<std::vector <int> > sodoku (9, std::vector<int> (9));
    
    // A vector of 9 elements, each of which contains a vector of 9 elements. 
    
}