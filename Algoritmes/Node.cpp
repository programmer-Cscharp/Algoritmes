#include "Node.h"

Node::Node(std::unordered_map<Node*, double> distanceToneighbors, std::string NodeName) : DistanceToneighbors(distanceToneighbors), name( NodeName){}
Node::Node(std::string NodeName): name(NodeName) {}

//std::map<std::pair<Node*, double>, ValueType, PairComparer> myMap;