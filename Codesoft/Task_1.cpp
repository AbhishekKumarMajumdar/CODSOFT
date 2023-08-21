#include <iostream>
#include <time.h>
using namespace std;

int main(){
    srand(time(0));
  int result = rand() % 100 + 1;
 
    int user;
    cout<<"Gusse the Number ( 0-100 ) \n";
    int count = 0;

while(true){
    cin>>user;
    if( user != result){
        if(user > result ){
            cout<<"Your gusse is too high\n";
        }else{
            cout<<"Your gusse is too low \n";
        }
    }else{
        cout<<" Your gusse is right . YOU WIN \n";
        cout<<count;
        break;
    }
    count++;

}
return 0;
}