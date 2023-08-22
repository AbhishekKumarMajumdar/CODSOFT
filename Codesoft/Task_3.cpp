#include <iostream>
using namespace std;

char board[]={'0','1','2','3','4','5','6','7','8','9'};


//Game Board: 
void displayBoard(string a,string b){
    system("cls");
    cout<<"===========================\n";
    cout<<"=======Tik Tac Toe ========\n";
    cout<<a<<"(X) ========= "<<b<<"(O)\n\n";

    cout<<"     |     |     \n";
    cout<<"  "<< board[1] <<"  |  "<< board[2] <<"  |  "<< board[3] <<"  \n";
    cout<<"_________________\n";
    cout<<"     |     |     \n";
    cout<<"  "<<board[4]<<"  |  "<<board[5]<<"  |  "<<board[6]<<"  \n";
    cout<<"_________________\n";
    cout<<"     |     |     \n";
    cout<<"  "<<board[7]<<"  |  "<<board[8]<<"  |  "<<board[9]<<"  \n\n";
}

//Check for Win and Draw
int win(){
     if(board[1]==board[2] && board[2]==board[3]){
        return 1;
    } if(board[4]==board[5] && board[5]==board[6]){
        return 1;
    } if(board[7]==board[8] && board[8]==board[9]){
        return 1;
    } if(board[1]==board[4] && board[4]==board[7]){
        return 1;
    } if(board[2]==board[5] && board[5]==board[8]){
        return 1;
    } if(board[3]==board[6] && board[6]==board[9]){
        return 1;
    } if(board[1]==board[5] && board[5]==board[9]){
        return 1;
    } if(board[3]==board[5] && board[5]==board[7]){
        return 1;
    }
    int count = 0;
    for(int i=1; i<=9;i++){
        if(board[i]=='X' || board[i]=='O'){
                    count++;
        }
    }
    if(count==9){
        return 0;
    }else{
        return 2;
    }
        return -1;

}

//Update Board:
void resetBoard(){
    board[1] ='1';
    board[2] ='2';
    board[3] ='3';
    board[4] ='4';
    board[5] ='5';
    board[6] ='6';
    board[7] ='7';
    board[8] ='8';
    board[9] ='9';
}


int main(){

    cout<<"Enter The First Player Name\n";
    string name1 ;
    string name2 ;

    cin>>name1;
    cout<<"Enter The Second Player Name\n";
    cin>>name2;
    displayBoard(name1,name2);
    int player = 1;
    while(true){
    player = (player % 2 == 0) ? 2 : 1;
    if(player == 1){
        cout<<name1<<"  Your Turn...\n";
    }else{
        cout<<name2<<"   Your Turn ... \n";
    }
        int input;

//Assign X and O icon

        char icon = (player == 1) ? 'X' : 'O';
//Player Input
        cin>>input;
        if(input==1 && board[1]=='1'){
            board[1]=icon;
        }else if(input==2 && board[2]=='2'){
            board[2]=icon;
        }else if(input==3 && board[3]=='3'){
            board[3]=icon;
        }else if(input==4 && board[4]=='4'){
            board[4]=icon;
        }else if(input==5 && board[5]=='5'){
            board[5]=icon;
        }else if(input==6 && board[6]=='6'){
            board[6]=icon;
        }else if(input==7 && board[7]=='7'){
            board[7]=icon;
        }else if(input==8 && board[8]=='8'){
            board[8]=icon;
        }else if(input==9 && board[9]=='9'){
            board[9]=icon;
        }
        else{
        cout<<"Invalid Choice Try Again press enter for continue\n";
        player--;
        cin.ignore();
		cin.get();
        }

//Display Board
    displayBoard(name1,name2);

    int result = win();
    char responce ;
//Display Result
    if(result==1){
        cout<<"Winner ! .  \n";
         if(player == 1){
        cout<<name1<<" you win this game\n";
    }else{
        cout<<name2<<"  you win this game \n";
    } 
    cout<<"You want to play another game !\n";
    cout<<"Y/N >> ";
    cin>>responce;
    if((responce=='y') || (responce=='Y')){
        resetBoard();
        system("cls");
        displayBoard(name1,name2);
        continue;
    }
    else  if((responce=='n') || (responce=='N')){
        break;
    }
    else{
        cout<<"invalid choice try again! Enter to continue\n";
        cin.ignore();
		cin.get();
    }
           break;

      
    }if(result==0){
        cout<<"Draw ! \n";
//Play Again:
        cout<<"You want to play another game !\n";
        cout<<"Y/N >> ";
        cin>>responce;
  if((responce=='y') || (responce=='Y')){
        resetBoard();
        system("cls");
        displayBoard(name1,name2);
        continue;
    }
    else  if((responce=='n') || (responce=='N')){
        break;
    }
    else{
        cout<<"invalid choice try again! Enter to continue\n";
        cin.ignore();
		cin.get();
    }    }
        if(result==2){
        cout<<"Ongoing.........\n";
    }
        player++;
        
    }
  
return 0;
}