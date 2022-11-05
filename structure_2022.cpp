#include <iostream>
#include <string>

#define MAX_SIZE 3

using namespace std;
	
	// STRUCTURES
	/* STRUCTURE: A struct is a user-defined data type that combines values of different types
	
	Create an example structure in the header section */
	struct employee {		std::string name;		std::string surname;		unsigned int salary; 
};


int main(int argc, char *argv[]) {
	
	//# -------------------------------------------------------------------
	// Initialised 
		employee emp1 = {"Bjarne", "Stroustrup", 100000};
	
	std::cout << "This is employee 1 :" << emp1.name << std::endl ; 

	//# -------------------------------------------------------------------
	
	/* POINTERS AND STRUCTURES 
	Create pointer p to a structure*/ 
	
	employee *p = &emp1;
	
	// Write p -> field as shorthand for  (*p).field
	std::cout << "Using a pointer, the name is: " << p -> name << std::endl;
	
	/* Class discussion someone says: 
	The -> has to be used to increase the salary in a function. 
	variables do not get passed in a function so pointers are used.*/ 
	
	//# -------------------------------------------------------------------
	// un-initialised 
	employee emp2; 
	
	// Add in the variable values	emp2.name = "Oriade";
	emp2.surname = "Simpson";	emp2.salary = 90000;
	
	// print the values. 
	std::cout << "The name is: " << emp2.name << std::endl; 
	
	//# -------------------------------------------------------------------
	// The employee variable is given a size of 3 because it is now an array. 
	employee employees [MAX_SIZE];
	
	// way 1
	employees[0] = {"Mike","Tyson", 500};
	employees[1] = {"Mohammed", "Ali", 400};
	
	// way2 
	employees[2].name = "Joe";
	employees[2].surname = "Louis";
	employees[2].salary = 5000;
	
	// Print all of the names
	for( auto i : employees){
		std::cout << i.name  << ", ";
	}
	
	// print all of the surnames
	for( auto i : employees){
		std::cout << i.surname  << "-";
	}
	
	//# -------------------------------------------------------------------
	// ARRAY OF STRUCTURES
	// Select a structure  0 , 1 or 2 from an array of structures. 
	
	std::cout<< "\nWhich employee should be selected, enter 0, 1 or 2 ? " << endl;
	unsigned int n;
	std::cin >> n;
	
	if (n < MAX_SIZE){
		std::cout << "name:"<< employees[n].name << "\n" << 
					 "surname :" << employees[n].surname << "\n" << 
					 "salary:" << employees[n].salary ;
	} else {
		std::cout << "There is no employee at this position1";
	}
// # -------------------------------------------------------------------
	
	// Keep running the program until typing quit. 
	string action;
	
	while(action != "quit")
	{
		std::cout << "\nType: 'display' or 'quit' "<< std::endl;
		std::cin >> action;
		
		if (action == "display"){
			std::cout << "Which employee should be displayed ?" << std::endl;
			std::cin >> n;
			
			if (n < MAX_SIZE)
				std::cout << "name: "<< employees[n].name << " " << 
							 "surname :" << employees[n].surname << " " << 
							 "salary: " << employees[n].salary << " ";
			} else {
				std::cout << "Thanks for taking part.";
			}
	}
}