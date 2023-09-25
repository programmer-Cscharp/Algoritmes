#include "Dijkstra.h"
#include <vector> 
#include <queue> 
#include <iostream>
#include <cassert>
#include <set>
#include <unordered_map>

Dijkstra::Dijkstra(std::vector<Node*>& nodes) :_nodes(nodes) {}

void Dijkstra::Solve(Node* start, Node* end, std::list<Node*>& shortestPathsOut)
{
	auto startex = std::find(_nodes.begin(), _nodes.end(), start);
	auto endex = std::find(_nodes.begin(), _nodes.end(), end);

	if (startex == _nodes.end() || endex == _nodes.end()) {
		throw std::runtime_error("Start node or End node not found.");
	}

	////_nodesInfo[start] = new NodeInfo(){}

	////*_priority_queue = _nodes;

	//// Create a priority queue to keep track of nodes to visit
	////std::priority_queue<std::pair<int, Node>> queue;

	std::unordered_map<Node*, NodeInfo> NodesInfo;

	std::set < Node*> visitedNodes;
	NodesInfo[_nodes[0]] = NodeInfo{0 , _nodes[0] };
	queueNodes.push(std::make_pair(0, _nodes[0]));
	//// Create a set to track visited nodes
	


	while (!queueNodes.empty())
	{
		Node* currentNode = (queueNodes.top().second);
		double currentDistance = -queueNodes.top().first; // we save the distance as negatives to we need to make it postive.

		queueNodes.pop();

		if (visitedNodes.find(currentNode) != visitedNodes.end()) {
			continue; // Skip this node if it's already visited
		}




		// Mark the current node as visited
		visitedNodes.insert(currentNode);

		// Check if we've reached the end node
		if (currentNode == end) {
			break; // Terminate the loop
		}
		

		for (const auto& n : currentNode->DistanceToneighbors) {
			// Iterate through the map using a for loop
			

			Node* nNode = n.first;
			int newDistance = currentDistance + n.second;



			//auto it = std::find_if(NodesInfo.begin(), NodesInfo.end(), [n](const std::pair<Node*, NodeInfo>& element) {
			//	return element.first == n.first; // Compare the Node* pointers
			//	});


			// Check if the node has already been visited
			if (NodesInfo.find(nNode) == NodesInfo.end()) {
				

				NodesInfo[n.first] = NodeInfo{newDistance, currentNode};
				queueNodes.push(std::make_pair(-newDistance, n.first)); // Push with negative distance
			}
			// it has been visited
			else {
				if (newDistance < NodesInfo[nNode].ShortestDistance) {
					NodesInfo[nNode].ShortestDistance = newDistance;
					
					queueNodes.push(std::make_pair(-newDistance, n.first)); // Push with negative distance
				}
			}

			

		}
		for (const auto& p : NodesInfo) {

			std::cout << "Key: " << p.first->name << ", Value: " << p.second.ShortestDistance << ", From: " << p.second.From->name << std::endl ;
		}
		std::cout << "---------------------" << std::endl;
	}

	

	shortestPathsOut.clear();
	Node* node = end;
	shortestPathsOut.push_front(node);
	while (node != start)
	{
		node = NodesInfo[node].From;
		shortestPathsOut.push_front(node);
		
	}

	
}
