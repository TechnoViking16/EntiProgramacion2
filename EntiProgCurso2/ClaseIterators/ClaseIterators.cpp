#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <forward_list>
#include <map>
#include <set>

void main() {
	using iterVect = std::vector<int>::iterator;
	using invIterVect = std::vector<int>::reverse_iterator;

	using iterDeq = std::deque<char>::iterator;
	using iterList = std::list<int>::iterator;
	using iterFlist = std::forward_list<int>::iterator;
	using iterMap = std::map<int, float>::iterator;
	using iterSet = std::set<int, float>::iterator;

	//Iterar vector
	std::vector<int> v1({ 1,2,3 });
	std::cout << "Imprimimos el vector con iterator:" << std::endl;
	for (iterVect it = v1.begin() ; it!=v1.end() ; it++) 
		std::cout << *it;
	
	std::cout<<""<<std::endl;

	std::cout << "Imprimimos el vector con reverse_iterator:" << std::endl;
	for (invIterVect it = v1.rbegin(); it != v1.rend(); it++) 
		std::cout << *it;
	
	std::cout << "" << std::endl;

	//Iterar deque
	std::deque<char> deq1({ 'a','b','c' });

	std::cout << "Imprimimos el deque con iterator:" << std::endl;
	for (iterDeq it = deq1.begin(); it != deq1.end(); it++) {
		std::cout << *it;
	}

	//Iterar 







}