#pragma once
#include<vector>
#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

struct vertex;

struct adjVertex { //structure to store adjacent city and edge weight
	vertex *v;
	int weight;
};

struct vertex { //structure to store city and other information
	int ID;
	std::string name;
	int district;
	bool visited;
	int distance;
	std::vector<adjVertex> adj;
};

struct queueVertex { 
	int distance;
	std::vector<vertex *> path;
};
//--------------------------------------------------------------------------------------
struct Edge //structure to store edge weight between two adjacent cities
{
	int srcDistrict, destDistrict, weight;
	string srcName, destName;

};
struct Graph //structure to store overall map representing a connected, undirected cities.
{
	int V, E;
	struct Edge* edge;
};
struct subset //structure to store parent vertex and priority
{
	int parent, priority;
};

class MST
{
public:
	MST();
	~MST();
	void addEdge(std::string v1, std::string v2, int weight);
	void addVertex(std::string name);
	void displayEdges();

	struct Graph* createGraph(int V, int E);
	int find(struct subset subsets[], int i);
	void Union(struct subset subsets[], int x, int y);
	void KruskalMST(struct Graph* graph);
	void KruskalMST();

	vertex* findVertex(std::string name);
protected:
private:
	std::vector<vertex> vertices;
	struct Edge *result;
	int districtNum = 0;
};