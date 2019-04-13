/* Your code here! */
#include "dsets.h"

DisjointSets::DisjointSets(){
/* initialize an empty vector */
  // _elems.clear();
}

void DisjointSets::addelements(int num){
  size_t current_size = _elems.size();
  for (size_t i = current_size; i < current_size + num; i++){
    _elems.push_back(i);
  }
}

int DisjointSets::find (int elem){

  while(_elems[elem] != elem){
    _elems[elem] = _elems[_elems[elem]];
    elem = _elems[elem];
  }

  return elem;
}

void DisjointSets::setunion (int a, int b){
  int root_a = find(a);
  int root_b = find(b);

  if (size(root_a) < size(root_b)) {
    _elems[root_a] = _elems[root_b];
  }

  else {
    _elems[root_b] = _elems[root_a];
  }

}

int DisjointSets::size (int elem){
  int size = 0;
  int root = find(elem);

  std::vector<int>::iterator it;

  for(it = _elems.begin(); it != _elems.end(); it++){
    if (find(*it) == root){
      size++;
    }
  }

  return size;
}
