#include <iostream>
#include<time.h>
using namespace std;

int main(){
    srand(time(0));
  int result = rand() % 100 + 1;
  int user;
  cout<<"Walcome to the Gusse this number\n\n";
  cout<<"Gusse the number ...\n";
  
   int count = 0;
   while(true){
    cin>>user;
 if(user != result){
    if(user > result ){
        cout<<"You are gusse too High!\n";
    }else{
        cout<<"You are gusse too Low! \n";
    }
  }
  else{
    cout<<"Congratulation ! YOU WON THE MATCH\n\n";
    cout<< "You have found the correct number "<< result << " in "<< count<< " attempts.";
    break;
  }
  count++;
   
   }
 
return 0;
}