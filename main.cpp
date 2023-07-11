#include <iostream>
using namespace std;
#include "queue.h"

int main(int argc,char *argv[]) {
Queue q;
int i, price, cash, change, order, quantity;
const char* food;
int customerNum = 0;
int queuesize = 0;
int cus = 0;
  
  for(i=1; i<argc; i++){ 
    if(i+1 < argc && argv[i][0] != 'x'){
        order = atoi(argv[i]);
        quantity = atoi(argv[i+1]);
        i++;
        q.enqueue(order, quantity);
        cout<<"---------------------------------"<<endl;
        cout<<"My order is "<<order<<endl;
        
          switch (order) {
            case 1:
              food = "Banoffee";
              break;
            case 2:
              food = "Croissant";
              break;
            case 3:
              food = "Croffle";
              break;
            case 4:
              food = "Cheesecake";
              break;
            default:
              food = "Unknown";
              break;
          }
        queuesize++;
        customerNum++;
        cout<<"Customer"<<" order "<< food <<endl; 
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
      }
      if (argv[i][0] == 'x'){
        cus++;
        if(queuesize>0){
        customerNum--;
        cout<<"================================="<<endl;
        cout<<"Serving customer No."<<cus<<endl;;
        price = q.dequeue();
        cout<<"Total: "<<price<<endl;
        
        int j=0;
        while(j==0){
        cout<<"Cash: ";
        cin>>cash;
          if(cash<price){
            cout<<"Insufficient funds (ꐦ○_○）"<<endl;
            j=0;
          }else if (cash >= price){
            int change = cash - price;
            if(change != 0){
            cout<<"Here is your change : "<<change<<endl;
            }
            cout<<"Thank you ヾ(＾-＾)ノ"<<endl;
            cout<<"================================="<<endl;
            j=1;
            queuesize--;
          }
        }
       }
      }
    }
  if (customerNum > 0){
          cout<<"Our bakery is closing :("<<endl;
          cout<< "There are "<< queuesize << " people left in the queue"<<endl;
  }else{ 
          cout<<"Our bakery is closing :("<<endl;
          cout<<"Queue is empty"<<endl;
    }
  return 0;
}
  