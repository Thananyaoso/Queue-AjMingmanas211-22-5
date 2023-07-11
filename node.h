#ifndef node_h
#define  node_h

class NODE{
//int data;
  int ord_number,qty;
	NODE *nextPtr;
public:
	NODE(int, int);
	~NODE();
  int get_value();
	void set_next(NODE *);
	NODE* get_next();
};

typedef NODE* NodePtr;

NODE::NODE(int x, int y){
	ord_number=x;
  qty=y;
	nextPtr=NULL;
  
}
int NODE::get_value(){
  int price;
  switch(ord_number){
    case 1: //Banoffee
      price=120*qty;
      break;
    case 2: //Croissant
      price=90*qty;
      break;
    case 3: //Croffle
      price=45*qty;
      break;
    case 4: //Cheesecake
      price=120*qty;
      break;
  }
	return price;
}

NODE* NODE::get_next(){
	return nextPtr;
}

void NODE::set_next(NODE *t){
	 nextPtr=t;
}

NODE::~NODE(){

}





#endif