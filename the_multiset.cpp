#include <iostream>
#include <set>

int main(int argc, char *argv[]) {
	
	
	// MULTISET: multisets allow duplicates
	// Add an extra 3 into the multiset

	std::multiset <long> my_multiset;
	
	
	for (int i = 1; i <= 5; i++) my_multiset.insert(i);
		{
			my_multiset.insert(3);
		}
	
	std::cout << "The size of my multiset is : " << my_multiset.size() << std::endl;
		
	// print all
	for (int elem : my_multiset) {
		std::cout << elem << ' ';
	}
	std::cout << std::endl;
	
	//#--------------------------------------------------------------------


	std::multiset<int> multimulti = { 3,4,5,6,7,8,8,9};
	
	for (int elem : multimulti) {
		std::cout << elem << ' ';
	}
	std::cout << std::endl;
	
}