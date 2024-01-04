cmake_minimum_required(VERSION 3.23)
project(graph-puzzle-game-TuganBasaran)

set(CMAKE_CXX_STANDARD 17)

add_executable(Executable AbstractGraph.cpp Element.cpp DictionaryReader.cpp Graph.cpp Heap.cpp Edge.cpp HeapNode.cpp MinHeap.cpp Path.cpp Queue.cpp main.cpp
        DictionaryReader.cpp
        DictionaryReader.h
        DictionaryReader.h
        Edge.cpp
        Edge.h
        Element.cpp
        Element.h
        Graph.cpp
        Graph.h
        Heap.cpp
        Heap.h
        HeapNode.cpp
        HeapNode.h
        MinHeap.cpp
        MinHeap.h
        Path.cpp
        Path.h
        Queue.cpp
        Queue.h Test_Case.cpp)

add_library(AbstractGraph.cpp Element.cpp DictionaryReader.cpp Graph.cpp Heap.cpp Edge.cpp HeapNode.cpp MinHeap.cpp Path.cpp Queue.cpp
        DictionaryReader.cpp
        DictionaryReader.h
        DictionaryReader.h
        Edge.cpp
        Edge.h
        Element.cpp
        Element.h
        Graph.cpp
        Graph.h
        Heap.cpp
        Heap.h
        HeapNode.cpp
        HeapNode.h
        MinHeap.cpp
        MinHeap.h
        Path.cpp
        Path.h
        Queue.cpp
        Queue.h
        AbstractGraph.h
        DictionaryReader.h)