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

	for (int i = 0; i < v2.size(); i++) 
		std::cout << v2[i];	//Imprime 123
	

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

	while (pque2.size() > 0) {	//Imprime 2019 2018 2017
		std::cout << pque2.top();
		pque2.pop();
		std::cout << " ";
	}

	//STACK
	std::stack<int> st1;
	
	st1.push(6);
	st1.push(7);
	st1.push(9);

	std::stack<int> st2;
	std::cout << std::endl;

	st2 = st1;
	while (st2.size() > 0) {
		std::cout << st2.top();	//Imprime 976
		st2.pop();
	}


	//LIST
	std::list<int> l1({ 1,2,3 });
	std::list<int> l2;
	l2 = l1;
	std::cout << std::endl;
	for (auto iter : l2) 
		std::cout << iter;	//Imprime 123
	

	//FORWARD_LIST 
	std::forward_list<int> fl1({ 5,4,3,2 });
	std::forward_list<int> fl2;
	std::cout << std::endl;
	fl2 = fl1;
	for (auto iter : fl2) 
		std::cout << iter;	//Imprime 5432
	

	//MAP
	std::map<int, float> m1;
	m1[1] = 1.3;
	m1[2] = 2.3;
	m1[3] = 3.14;
	std::map<int, float> m2;
	m2 = m1;

	//SET
	int misints[] = { 12,13,14,15 };
	std::set<int> primero(misints, misints + 5);
	std::set<int> segundo;
	segundo = primero;
	

	//Testeo de los diferentes constructores de cada contenedor
	//VECTOR
	std::vector<int> primero;			//Vector de ints vacío
	std::vector<int> segundo(4, 100);	//Vector con cuatro ints de 100
	std::vector<int> tercero(segundo.begin(), segundo.end());	//Vector que itera el segundo
	std::vector<int> quarto(tercero);		//Una copia del tercero	

	//DEQUE
	std::deque<int> primerDeq;			//Deque de ints vacío
	std::deque<int> segundoDeq(4, 100);	//Deque con cuatro ints de 100
	std::deque<int> tercerDeq(segundoDeq.begin(), segundoDeq.end());	//Deque que itera el segundo
	std::deque<int> quartoDeq(tercerDeq);		//Una copia del tercero	

	//QUEUE
	std::queue<int> primerQue;				//Queue de ints vacío
	std::queue<int> segundoQue(primerQue);	//Una copia del primero

	

}