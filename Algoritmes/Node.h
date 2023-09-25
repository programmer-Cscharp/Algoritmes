#pragma once
#include <unordered_map>
#include <string>

class Node
{
public:

	std::unordered_map<Node*, double> DistanceToneighbors;

	std::string name;
	Node(std::string NodeName);
	Node(std::unordered_map<Node*, double> distanceToneighbors, std::string NodeName);
	

};

