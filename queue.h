#include "node.h"

class Queue {
  NodePtr headPtr, tailPtr;
  int size;

public:
  void enqueue(int x, int y);
  int dequeue();
  Queue();
  ~Queue(); 
};

Queue::Queue(){
  size=0;
  headPtr=NULL;
  tailPtr=NULL;
}

Queue::~Queue(){
 int i;
 int n=size;
  for(i=0;i<n;i++){
    dequeue();
  } 
}

void Queue::enqueue(int x, int y){
  NodePtr new_node = new NODE(x, y);
  if(new_node){
    if (size == 0){
      headPtr=new_node; 
      tailPtr=new_node;
    }else{
      tailPtr -> set_next(new_node);
      tailPtr=new_node;
    }
    ++size;
  }
}

int Queue::dequeue() {
  int value;
  NodePtr t;
  if(headPtr != NULL){
    NodePtr t = headPtr;
    value = t->get_value();
    headPtr = headPtr->get_next();
    if(headPtr == NULL){
      tailPtr = NULL;
    }
    delete t;
    --size;
    return value;
  }
  return -1;
}

