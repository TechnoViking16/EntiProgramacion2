#include <iostream>
#include <vector>
#include <deque>
#include <queue>
#include <stack>
#include <list>
#include <forward_list>
#include <map>
#include <set>

void main() {
	//Que contenedores soportan el uso del operador (=) entre sus objetos
	//VECTOR
	std::vector<int> v1({ 1,2,3 });
	std::vector<int> v2;
	v2 = v1;

	for (int i = 0; i < v2.size(); i++) {
		std::cout << v2[i];	//Imprime 123
	}

	//DEQUE
	std::deque<int> deq1({ 3,2,1 });
	std::deque<int> deq2;
	deq2 = deq1;
	std::cout << std::endl;
	for (int i = 0; i < deq2.size(); i++) {
		std::cout << deq2[i];	//Imprime 321
	}

	//QUEUE
	std::deque<int> que1({9,8,7});
	std::deque<int> que2;
	que2 = que1;
	std::cout << std::endl;
	while (que2.size() > 0) {	//Imprime 987
		std::cout << que2.front();
		que2.pop_front();
	}

	//PRIORITY_QUEUE
	std::priority_queue<int> pque1;
	pque1.push(2019);
	pque1.push(2017);
	pque1.push(2018);


	std::priority_queue<int> pque2;
	pque2 = pque1;
	std::cout << std::endl;
	

}