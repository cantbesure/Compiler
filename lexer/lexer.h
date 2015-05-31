#ifndef LEXER_H
#define LEXER_H

#include <iostream>
#include <map>
using namespace std;

class edge{
 public :
  int val;
  char got;
  edge (int v,char g)
    {
      val=v;
      got=g;
    }

}

class graph{

 private:
  map <int , map<int ,edge> > data;
 public: 
 void addedge(int u,int v,char c);
 map <int ,edge> begin_map(int u);
 int new_node();
}

void pre_file_load();
