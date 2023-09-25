//#include <vector> 
//#include <map> 
//#include <iostream>
//#include <string> 
//
//using std::map;
//using std::string;
//
//void PrintVector(std::vector<int>& vector)
//{
//	std::cout << "[";
//	for (int i{ 0 }; i < vector.size(); i++) {
//		if (i == vector.size()-1) {
//			std::cout << vector.at(i);
//		}
//		else {
//			std::cout << vector.at(i) << ",";
//		}
//		
//	}
//	std::cout << "]";
//}
//
//int main()
//{
//	map<string, int> diconaryOfNumbers;
//
//	diconaryOfNumbers["first"] = 1;
//
//	std::vector<int> numbers{ 1,5,6,8,9,4,6,8,8,2,3,4 };
//	PrintVector(numbers);
//
//	std::cin.get();
//	return 0;
//}


#include <iostream>
#include <map>
#include <vector>
#include "Node.h"
#include "Dijkstra.h" // Include your Dijkstra class definition
#include <chrono>

int main() {


	//// Create nodes without specifying neighbors and distances
	//Node* nodeA = new Node('A');
	//Node* nodeB = new Node('B');
	//Node* nodeC = new Node('C');
	//Node* nodeD = new Node('D');
	//Node* nodeE = new Node('E');
	//Node* nodeF = new Node('F');
	//Node* nodeG = new Node('G');

	//// Specify neighbors and distances after creating the nodes
	//nodeA->DistanceToneighbors = std::unordered_map<Node*, double>({
	//	{nodeB, 2.0},
	//	{nodeC, 4.0}
	//	});

	//nodeB->DistanceToneighbors = std::unordered_map<Node*, double>({
	//	{nodeA, 2.0},
	//	{nodeC, 1.0},
	//	{nodeD, 7.0},
	//	{nodeE, 2.0},
	//	});

	//nodeC->DistanceToneighbors = std::unordered_map<Node*, double>({
	//	{nodeA, 4.0},
	//	{nodeB, 1.0},
	//	{nodeD, 3.0},
	//	{nodeF, 6.0},
	//	});

	//nodeD->DistanceToneighbors = std::unordered_map<Node*, double>({

	//	{nodeB, 7.0},
	//	{nodeC, 3.0},
	//	{nodeE, 3.0},
	//	{nodeF, 2.0},
	//	});

	//nodeE->DistanceToneighbors = std::unordered_map<Node*, double>({
	//	{nodeD, 3.0},
	//	{nodeB, 2.0},
	//	{nodeG, 3.0}
	//	});

	//nodeF->DistanceToneighbors = std::unordered_map<Node*, double>({
	//	{nodeD, 2.0},
	//	{nodeC, 6.0},
	//	{nodeG, 1.0}
	//	});


	//// Create a vector to hold all the nodes
	//std::vector<Node*> nodes = { nodeA, nodeB, nodeC, nodeD, nodeE, nodeF, nodeG };

	/// ------------------------------- start generated with chatgpt ------------------------------------------------------------
	// Create nodes
	Node* cityA = new Node("City A");
	Node* cityB = new Node("City B");
	Node* cityC = new Node("City C");
	Node* cityD = new Node("City D");
	Node* cityE = new Node("City E");
	Node* cityF = new Node("City F");
	Node* cityG = new Node("City G");
	Node* cityH = new Node("City H");
	Node* cityI = new Node("City I");
	Node* cityJ = new Node("City J");
	Node* cityK = new Node("City K");
	Node* cityL = new Node("City L");
	Node* cityM = new Node("City M");
	Node* cityN = new Node("City N");
	Node* cityO = new Node("City O");
	Node* cityP = new Node("City P");

	// Specify neighbors and distances
	cityA->DistanceToneighbors = {
		{cityB, 10.0},
		{cityC, 15.0},
		{cityD, 20.0}
	};

	cityB->DistanceToneighbors = {
		{cityA, 10.0},
		{cityE, 25.0},
		{cityF, 12.0}
	};

	cityC->DistanceToneighbors = {
		{cityA, 15.0},
		{cityE, 30.0},
		{cityF, 5.0},
		{cityG, 22.0}
	};

	cityD->DistanceToneighbors = {
		{cityA, 20.0},
		{cityF, 10.0},
		{cityH, 18.0}
	};

	cityE->DistanceToneighbors = {
		{cityB, 25.0},
		{cityC, 30.0},
		{cityG, 12.0},
		{cityI, 15.0}
	};

	cityF->DistanceToneighbors = {
		{cityB, 12.0},
		{cityC, 5.0},
		{cityD, 10.0},
		{cityH, 8.0},
		{cityJ, 14.0}
	};

	cityG->DistanceToneighbors = {
		{cityC, 22.0},
		{cityE, 12.0},
		{cityI, 18.0},
		{cityK, 30.0}
	};

	cityH->DistanceToneighbors = {
		{cityD, 18.0},
		{cityF, 8.0},
		{cityJ, 20.0},
		{cityL, 35.0}
	};

	cityI->DistanceToneighbors = {
		{cityE, 15.0},
		{cityG, 18.0},
		{cityK, 25.0},
		{cityM, 28.0}
	};

	cityJ->DistanceToneighbors = {
		{cityF, 14.0},
		{cityH, 20.0},
		{cityL, 17.0},
		{cityN, 42.0}
	};

	cityK->DistanceToneighbors = {
		{cityG, 30.0},
		{cityI, 25.0},
		{cityM, 10.0},
		{cityO, 32.0}
	};

	cityL->DistanceToneighbors = {
		{cityH, 35.0},
		{cityJ, 17.0},
		{cityN, 22.0},
		{cityP, 50.0}
	};

	cityM->DistanceToneighbors = {
		{cityI, 28.0},
		{cityK, 10.0},
		{cityO, 18.0}
	};

	cityN->DistanceToneighbors = {
		{cityJ, 42.0},
		{cityL, 22.0},
		{cityP, 12.0}
	};

	cityO->DistanceToneighbors = {
		{cityK, 32.0},
		{cityM, 18.0},
		{cityP, 8.0}
	};

	cityP->DistanceToneighbors = {
		{cityL, 50.0},
		{cityN, 12.0},
		{cityO, 8.0}
	};

	// Create a vector to hold all the nodes
	std::vector<Node*> cities = { cityA, cityB, cityC, cityD, cityE, cityF, cityG, cityH, cityI, cityJ, cityK, cityL, cityM, cityN, cityO, cityP };

	/// ---------------------------------- stop generated with chatgpt  ----------------------------------------------------------------------


	// Create a Dijkstra object with the nodes
	Dijkstra dijkstra(cities);

	// Record the start time
	auto start = std::chrono::high_resolution_clock::now();

	// Call the Solve method to find the shortest paths
	std::list<Node*> shortestPaths;
	dijkstra.Solve(cityA, cityP, shortestPaths);

	auto end = std::chrono::high_resolution_clock::now();
	std::cout << "Fastest way" << std::endl;
	for (const auto& p : shortestPaths) {

		std::cout << "Key: " << p->name << std::endl;
	}
	std::cout << "---------------------" << std::endl;


	// Calculate the elapsed time
	std::chrono::duration<double> duration = end - start;
	std::cout << "Elapsed time: " << duration.count() << " seconds" << std::endl;

	/*delete nodeA;
	delete nodeB;
	delete nodeC;
	delete nodeD;
	delete nodeE;
	delete nodeF;
	delete nodeG;*/

	for (Node* node : cities) {
		delete node;
	}

	return 0;
}
