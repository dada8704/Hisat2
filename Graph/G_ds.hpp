#ifndef _G_DS_HPP_
#define _G_DS_HPP_

#include <iostream>
#include <vector>
#include <string>


class Node
{
public:
    char label; // ACGT
    int id; // location in whole genome
    
    std::vector<int> income;
    std::vector<int> to;
    std::string preFix;

    
    Node(char _label, int _id, int _income, int _to) : label(_label), id(_id) { 
        //preFix = std::string(1, _rank);
        to.push_back(_to);
        income.push_back(_income);
    } 
    Node(char _label, int _id, int _to) : label(_label), id(_id) { 
        to.push_back(_to);
    } 
    ~Node() { }
};


class Prefix
{
public:
    char from; // ACGT
    int successor;
    int id;
    bool sorted = false;
    std::string rank;

    Prefix(char _from, int _id, int _successor, char _rank) : from(_from), id(_id), successor(_successor) { rank = std::string(1, _rank);  }
    ~Prefix() { }

};


#endif
