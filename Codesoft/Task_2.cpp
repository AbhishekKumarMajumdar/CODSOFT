#include <iostream>
using namespace std;

void Sum(float x, float y){
    cout<<x+y;
}
void Sub(float x, float y){
    cout<<x-y;
}
void Mul(float x, float y){
    cout<<x*y;
}
void Div(float x, float y){
    cout<<x/y;
}

int main(){
  float num1, num2;
  int opr;
  cout<<"Enter the first number ...\n";
  cin>>num1;
  cout<<"Enter the Second number ...\n";
  cin>>num2;

  cout<<"Choose One Opretion\n";
  cout<<"1.Addition\n";
  cout<<"2.Subtraction\n";
  cout<<"3.Multiplication\n";
  cout<<"4.Division\n";
  cin>>opr;

  if(opr<=4 && opr >0){
    if(opr==1){
        Sum(num1,num2);
    }if(opr==2){
        Sub(num1,num2);
    }if(opr==3){
        Mul(num1,num2);
    }if(opr==4){
        Div(num1,num2);
    }
  }else{
    cout<<" Error ! Error ! Enter right number\n";
  }
  return 0;
}