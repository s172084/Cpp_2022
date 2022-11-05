# include <iostream>
# include <vector>

// This header file is the "interface" to be able to use the vector class from the STLibrary

// FUNCTION CALL BY REFERENCE USING &
// Declare the function in the header file. 
void extendVector(std::vector<int> &MyFunVector);

// Describe how the function works: 
// The function takes a reference to a vector and adds 42. 
// This does not work without the & before the name of the vector. 

void extendVector(std::vector<int> &MyFunVector) 
{	MyFunVector.push_back(42); 
}

// #-----------------------------------------------------
// Declare the function in the header file. 
std::vector<int> makeVector();

/* Describe how the function works: 
The function makes a variable into a vector.*/
std::vector<int> makeVector()
{
	std::vector<int> result;		return result;
}

// #-----------------------------------------------------
int main(int argc, char *argv[]) {
		
	std::cout << "This is the first vector:\n" ;
	// create a vector whose elements are integers, using the function called makeVector(); 
	std::vector<int> MyIntVec = makeVector();
	
	// Add 1 element into the vector. 
	MyIntVec.push_back(10);
	
	// Add multiple elements into the vector. 
	MyIntVec.insert(MyIntVec.end(), { 1, 2, 3, 4, 5, 6 });
	
	for (auto i  : MyIntVec){
		std::cout << i << " ";
		
	}
	
	// create a vector whose elements are integers
	std::vector<int> MyIntVector;
	
	// create a vector whose elements are floats
	std::vector<double> MyDoubleVector;

	// create vector whose elements are vectors of integers
	std::vector< std::vector<int>>  MyNestedVector;
	
	 //#-----------------------------------------------------
	
	// Add integers into the vector 
	MyIntVector.push_back(10);
	MyIntVector.push_back(20);
	MyIntVector.push_back(30);
	MyIntVector.push_back(40);
	
	// Insert the number: 25 after the second index
	MyIntVector.insert(	MyIntVector.begin()+2, 25);

	// erase the first element from the vector (at index 0)
	MyIntVector.erase(MyIntVector.begin());
	//MyIntVector.erase(MyIntVector.begin()+0);
	
	// replace the number at index 3, with the number 35 
	MyIntVector[3] = 35;
	
	// remove all elements from the vector at the same time
	// MyIntVector.clear();
	//#-----------------------------------------------------

	//Change the size of the vector to 1, 3, 5 integers. 
	MyIntVec.resize(3);
	
	//std::cout<<"MyIntVec has space for " << MyIntVec.size() << " elements\n";
	
	//Assign one 7 into the vector
	int x = 7;
	
	//MyIntVec.assign(1,x);
	//#-----------------------------------------------------

	// Call the function in order to extend the vector. 
	extendVector(MyIntVector);
	//#-----------------------------------------------------
	// VERSION 1
	// Iterate through the vector by using the modern style of looping.
	
	std::cout<<"\nThe vector contains these elements:\n";
	
	for (auto i :MyIntVector) {		std::cout << i << " ";
	}
}