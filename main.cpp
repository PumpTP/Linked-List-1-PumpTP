#include <iostream>

using namespace std;
#include "ll.h"

int main(int argc, char** argv){
  LL l;
  int i;
  
	for(i=1;i<argc;i+=2) {
    string name(argv[i]);
    l.insert_node(argv[i+1], atoi(argv[i]));
  }
  l.print_all();
  return 0;
}