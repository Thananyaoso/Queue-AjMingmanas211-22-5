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
  



  
 /* 
  for(i=0; i<argc; i++){
    if(argv[i][0] == 'x'){
      int price = q.dequeue();
      if (price == -1) {
        cout << "WRONG ORDER" << endl;
        break;
      }
        cout<<"You have to pay: "<<price<<endl;
        int j=0;
          while(j==0){
            cout<<"Total: "<<price<<endl;
            cout<<"Cash: ";
            cin>>cash;
            if (cash<price){
              cout<<"Insufficient funds (ꐦ○_○）"<<endl;;
              j=0;
            }else{
              cout<<"Thank you ヾ(＾-＾)ノ"<<endl;;
              j=1;
            }
          }     
      }else{
      order = atoi(argv[i]);
      if (i + 1 < argc) {
        quantity = atoi(argv[i + 1]);
        q.enqueue(order, quantity);
        i++;
      } else {
        std::cout << "Invalid command line arguments." << std::endl;
        break;
      }
    }
  }
  
  return 0;
}
  
      



/*
    int order = atoi(argv[i]);
    int quantity = atoi (argv[i+1]);

    if(order == 0 || quantity == 0){
      cout<<"PLEASE ORDER!"<<endl;
      continue;
    }

    q.enqueue(order, quantity);

    if(argv[i+2]&&argv[i+2][0] == 'x'){
      price = q.dequeue();
      int j=0;
      while(j==0){
        cout<<"Total: "<<price<<endl;
        cout<<"Cash: ";
        cin>>cash;
        if (cash<price){
          cout<<"Insufficient funds (ꐦ○_○）"<<endl;;
          j=0;
        }else{
          cout<<"Thank you ヾ(＾-＾)ノ"<<endl;;
          j=1;
        }
      }
      i+=2;
    }
  }
  return 0;
}




  /*  if(argv[i][0]=='x'){
        price=q.dequeue();
       //ask the customer to pay
        int j=0;
        while(j==0){
        cout<<"Total: "<<price;
        cout<<"Cash: ";
        cin>>cash;
        if (cash < price){
          cout<<"Insufficient funds (ꐦ○_○）"<<endl;;
          j=0;
        }else{
          cout<<"Thank you ヾ(＾-＾)ノ"<<endl;;
          j=1;
        }
      }
    }else if (i+1 < argc) {
      q.enqueue(atoi(argv[i]),atoi(argv[i+1]));
      i++;
    }else{
      cout<<"invalid!!"<<endl;
      break;
    }
  }
}


  
  /*q.enqueue(5);  
  q.enqueue(1);
  q.dequeue();//
  q.enqueue(7);
  q.dequeue();
  
  q.enqueue(6);
  q.dequeue();//7
  q.dequeue();//6
  
 q.enqueue(8);
   q.enqueue(9);
   q.enqueue(10);
  cout<<"End of program"<<endl; */

  

