//
// Created by Olcay Taner YILDIZ on 8.05.2023.
//

#ifndef DATASTRUCTURES_CPP_GRAPH_H
#define DATASTRUCTURES_CPP_GRAPH_H


#include "AbstractGraph.h"
#include "Edge.h"
#include <string>
#include <vector>

namespace array{
    class Graph : public AbstractGraph{
    private:
        int** edges;
        std::vector<std::string> words;
    public:
        explicit Graph(int vertexCount);
        ~Graph();
        void addWord(const std::string& word);
        void addEdge(std::string from, std::string to);
        void addEdge(int from, int to);
        int getIndex(const std::string &startWord);
        void addEdge(int from, int to, int weight);
        Path* dijkstra(int source);
        Edge* edgeList(int& edgeCount);
        void depthFirstSearch(bool* visited, int fromNode) override;
        std::vector<std::string> shortestPath(const std::string &startWord, const std::string &endWord);

    protected:
        void breadthFirstSearch(bool* visited, int startNode) override;

    };

}


#endif //DATASTRUCTURES_CPP_GRAPH_H