#include <cstdio>
#include <iostream>
#include <map>
#include <vector>
#include <cstring>
#include <cstdlib>
using namespace std;
map < string ,int> symbols;
vector<string> rules;
int sym_cnt=0;

void rules_preload()
{
  FILE * pFile;
  char symbol[200];//used to temporarily store 
  char rule[500];
  pFile =fopen("rules","r");
  while (!feof(pFile))
    {
      fscanf(pFile,"%[^:]%*c",symbol);//use regex
      char c;
      int cnt=0;
      while ((c=fgetc(pFile))!=EOF && c!=';')
	{

	  if (isspace(c))
	    continue;
	  rule[cnt++]=c;
	  //if meet '\'
	  if (c=='\\')
	    {
	      c=fgetc(pFile);
	      rule[cnt++]=c;
	    }
	}
      rule[cnt]=0;
      //cout<<symbol<<endl;
      symbols.insert(make_pair(string(symbol),sym_cnt++));
      rules.push_back(string(rule));
    }
}

void generateNFA(graph& nfa)
{
  



}
int main()
{
  rules_preload();
  
  return 0;
}
