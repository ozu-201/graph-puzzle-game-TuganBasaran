//
// Created by TuganBasaran on 28.12.2023.
//


#include <iostream>
#include "DictionaryReader.h"

int main() {
    std::string filename = "/Users/tugan_basaran/CLionProjects/graph-puzzle-game-TuganBasaran/english-dictionary.txt";
    DictionaryReader reader (filename);
    std::string start,finish;
    std:: cout << "Enter starting word: " << std::endl;
    std::getline(std::cin,start);
    std:: cout << "Enter destination word: " << std::endl;
    std::getline(std::cin,finish);
    reader.readDictionaryToGraph(start,finish);
    return 0;
}