#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

int main(int argc, char *argv[]) {
	
	int n, x;
	
	// Create a set  of integers. 
	std::set <int> my_set = {0, 1, 2, 3, 3000, 4000, 5000, 6000}; 
	
	
	// Add a number to the set
	//std::cin >> x;
	//my_set.insert(x);
	
	// print out the contents of the set. 
	std::cout << "The set contains:";
	
	for (int elem : my_set) {
		std::cout << elem  << " ";
	}
	std::cout << std::endl;
	
	//# --------------------------------------------------------------------
	
	// Delete a specific variable from the set. 
	if (my_set.count(x)){
		
		my_set.erase(x);
	}
	
	for (int elem : my_set) {
		if (elem > 0){
			std::cout << elem  << " ";
		}
			}
	std::cout << std::endl;
	
	std::cout << &x << " was deleted." << std::endl;
	
	//# --------------------------------------------------------------------
	// If the number is in the set, print out true, otherwise , print out false. 
	std::cout << "Generate a query of x: \n";
	
	if (my_set.count(x)){
		std::cout << "T";
	} else {
		std::cout << "F";
	};
	
	//#--------------------------------------------------------------------
	//#--------------------------------------------------------------------

	// Create a set 
	std::set <int> iset = {0,1,2,3,7,12}; 
	std::set <int> jset = {0,1,2,3}; 

	// Insert 10 into the set. 
	iset.insert(10);
	
	// Delete 3 from the set
	iset.erase(3); 
	
	//Delete all elements in the set
	// iset.clear();

	// Find out how many elements are in the set
	std::cout << "\nThere are "<< iset.size() << " elements in the set" << std::endl;
	
	std::cout << "Is there a 7 in the set? "<< iset.count(7) << std::endl;
	
	for (int elem :iset) {
		std::cout << elem <<" ";
	}
	std::cout << std::endl;
	
	//#--------------------------------------------------------------------
	// Check if two sets are the same
	if (iset == jset) {
		std::cout << "They are the same\n"; }
	else {
	std::cout <<"They are not the same\n";
	}
	
	//#--------------------------------------------------------------------

	// Set operations
	// which numbers are in set 1 and not in set two? 
	std::vector<int> differences;
	
	std::set_difference(iset.begin(), iset.end(), 
						my_set.begin(), my_set.end(), 
						std::inserter(differences, differences.begin()));
	
	std::cout << "these numbers are in set 1 and not in set 2:" << std::endl;
	
	for (int elem :differences) {
		std::cout << elem <<" ";
	}
	
	std::cout << std::endl;
	//#--------------------------------------------------------------------
	
	// intersection : all those elements which are common to both A and B.
	std::vector<int> intersect;
	
	std::cout << "the intersection:" << std::endl;
	
	std::set_union(iset.begin(), iset.end(), 
		my_set.begin(), my_set.end(), 
		std::inserter(intersect, intersect.begin()));
	
	for (int elem :intersect) {
		std::cout << elem <<" ";
	}
	std::cout << std::endl;
	std::cout << "the end\n" << std::endl;
	
	//#--------------------------------------------------------------------
	// set_symmetric_difference : the set of elements which are in either of the sets A and B
	
	//#--------------------------------------------------------------------
	// union: a completely new set that contains elements that are present in both the initial sets.
	// which numbers are in both sets? 
	
	std::vector<int> in_both_sets;
	std::cout << "the union:" << std::endl;

	std::set_union(iset.begin(), iset.end(), 
		my_set.begin(), my_set.end(), 
		std::inserter(in_both_sets, in_both_sets.begin()));
				
	for (int elem :in_both_sets) {
		std::cout << elem <<" ";
	}
	std::cout << std::endl;
	std::cout << "the end\n" << std::endl;

	//#--------------------------------------------------------------------
	// overwrite a set
	// jset = iset;
	//#--------------------------------------------------------------------
	
	/* ITERATOR : access elements in a set using an iterator. 
	use dereferencing notation *, create an iterator for the set 
	iterator syntax: set | datatype inside the set | iterator name */
	
	std::set <int>::iterator my_iter;
	
	for (my_iter = iset.begin(); my_iter != iset.end(); my_iter ++){
		std::cout << * my_iter << std::endl;
	}
	
	//#--------------------------------------------------------------------

	// Sum the elements of the set
	int sum = 0;
	
	for (my_iter = iset.begin(); my_iter != iset.end(); my_iter ++){
	     sum +=  * my_iter;
	}
	std::cout << "The sum is: " << sum ; 
	
}
