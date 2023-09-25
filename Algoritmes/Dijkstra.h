#ifndef DIJKSTRA_H
#define DIJKSTRA_H

#include <vector>
#include <map>
#include <queue> // Include the <queue> header
#include "Node.h"

class Dijkstra
{
private:
	struct NodeInfo {
		int ShortestDistance;
		Node* From;
	};

	struct PairComparer {
		bool operator()(const std::pair<double, Node*>& left, const std::pair<double, Node*>& right) const {
			// Compare based on the double values (less than)
			return left.first < right.first;
		}
	};

	std::vector<Node*> _nodes;

	std::priority_queue<std::pair<double, Node*>, std::vector<std::pair< double, Node*>>, PairComparer> queueNodes;
	//std::map<Node*, NodeInfo>* _nodesInfo = nullptr;;
	//std::vector<Node*>* _priority_queue = nullptr;;
	
	
public:
	
	Dijkstra(std::vector<Node*>& nodes);

	void Solve(Node* start, Node* end, std::list<Node*>& shortestPathsOut);

	struct PairComparator {
		bool operator()(const std::pair<Node*, double>& lhs, const std::pair<Node*, double>& rhs) const {
			// Compare the Node* pointers directly
			return lhs.first == rhs.first;
		}
	};

};

#endif // DIJKSTRA_H