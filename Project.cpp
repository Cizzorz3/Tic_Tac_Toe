#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std ;
void board_design(); // Creating the Design of the board
void show_input(); //showing the input of the user
int Winning_condition();
int win{0};
int Win_Condition [9] ;
int Win_Condition_2[9];
int symbol_decide {0};
char x_o []  {'0', '1', '2', '3', '4','5','6','7','8'};
int spot_number_1 {0} ;
int spot_number_2 {0} ;
int main ()  {
board_design();             // show_input();
int cnt{0};                                     /////declring variablesss//////
                                 /////declring variablesss//////
char Symbol_choose ;                                                /////declring variablesss////// 
cout<<"Please Choose X or O "<<endl;
cin>>Symbol_choose;
Symbol_choose=tolower(Symbol_choose);
if(Symbol_choose=='x'){
    cout<<" Player 1 is ' X ' and Player 2 is ' O ' "<<endl;
}
else if (Symbol_choose=='o'){
    cout<<" Player 1 is ' O ' and Player 1 is ' X ' "<<endl;
}                                                                   /////declring variablesss//////
while( win != 1 && cnt!=9){      
    if(Symbol_choose=='x'){
        cout<<"please enter the spot number of 'X' "<<endl;
    cin>>spot_number_1;
    symbol_decide=1;
    show_input();
    cnt++;
    Win_Condition[spot_number_1]=1;
    Winning_condition();
    if(win==1){
        break;
    }
    if(cnt==9){
    cout<<" Tie "<<endl;
    break;
}


cout<<"please enter the spot number for 'O' "<<endl;
cin>>spot_number_2;
symbol_decide=2;
show_input();
cnt++;
if(cnt==9){
    cout<<" Tie "<<endl;
    break;
}
Win_Condition_2[spot_number_2]=2;
Winning_condition();
if(win==1){
        break;
    }

    }
 else if(Symbol_choose=='o')   {
    cout<<"please enter the spot number of 'O' "<<endl;
    cin>>spot_number_1;
    cnt++;
    Win_Condition[spot_number_1]=1;
    Winning_condition();
    if(win==1){
        break;
    }
    if(cnt==9){
    cout<<" Tie "<<endl;
    break;
}


cout<<"please enter the spot number for 'X' "<<endl;
cin>>spot_number_2;
cnt++;
if(cnt==9){
    cout<<" Tie "<<endl;
    break;
}
Win_Condition_2[spot_number_2]=2;
Winning_condition();
if(win==1){
        break;
    }

 }
}



}
void board_design(){
 cout<<" "<<x_o[0]<<" "<<"| "<<x_o[1]<<" "<<" "<<"| "<<x_o[2]<<" "<<endl;
    cout<<"--------------"<<endl;
    cout<<" "<<x_o[3]<<" "<<"| "<<x_o[4]<<" "<<" "<<"| "<<x_o[5]<<" "<<endl;
    cout<<"--------------"<<endl;
    cout<<" "<<x_o[6]<<" "<<"| "<<x_o[7]<<" "<<" "<<"| "<<x_o[8]<<" "<<endl;
    cout<<"--------------"<<endl;

}
int Winning_condition(){
    if(Win_Condition[0]==1 && Win_Condition[4]==1 && Win_Condition[8]==1){
    cout<<" Player 1 wins "<<endl;
    win=1;  
    return win;
    
 } 

else if (Win_Condition[0]==1&&Win_Condition[1]==1&&Win_Condition[2]==1){
     cout<<" Player 1 wins "<<endl;
    win=1; 
    return win;
    
}
else if(Win_Condition[0]==1&&Win_Condition[3]==1&&Win_Condition[6]==1){
    cout<<" Player 1 wins "<<endl;
    win=1; 
    return win;
    
}
else if(Win_Condition[1] == 1&&Win_Condition[4] ==1&& Win_Condition[7]==1){
    cout<<" Player 1 wins "<<endl;
    win=1;
    return win; 
    
}
else if(Win_Condition[2]==1&&Win_Condition[5]==1&&Win_Condition[8]==1){
    cout<<" Player 1 wins "<<endl;
    win=1;
    return win;
    
}
else if(Win_Condition[3]==1&&Win_Condition[4]==1&&Win_Condition[5]==1){
    cout<<" Player 1 wins "<<endl;
    win=1;
    return win;
    
}
else if(Win_Condition[6]==1&&Win_Condition[7]==1&&Win_Condition[8]==1){
    cout<<" Player 1 wins "<<endl;
    win=1;
  
}
if(Win_Condition_2[0]==2 && Win_Condition_2[4]==2 && Win_Condition_2[8]==2){
    cout<<" Player 2 wins "<<endl;
    win=1;  
    return win;
   
} 
else if (Win_Condition_2[0]==2&&Win_Condition_2[1]==2&&Win_Condition_2[2]==2){
     cout<<" Player 2 wins "<<endl;
    win=1; 
    return win;
    
}
else if(Win_Condition_2[0]==2&&Win_Condition_2[3]==2&&Win_Condition_2[6]==2){
    cout<<" Player 2 wins "<<endl;
    win=1; 
    return win;
   
}
else if(Win_Condition_2[1] ==2&& Win_Condition_2[4] ==2&& Win_Condition_2[7]==2){
    cout<<" Player 2 wins "<<endl;
    win=1; 
    return win;
    
}
else if(Win_Condition_2[2]==2&&Win_Condition_2[5]==2&&Win_Condition_2[8]==2){
    cout<<" Player 2 wins "<<endl;
    win=1;
    return win;
  
}
else if(Win_Condition_2[3]==2&&Win_Condition_2[4]==2&&Win_Condition_2[5]==2){
    cout<<" Player 2 wins "<<endl;
    win=1;
    return win;

}
else if(Win_Condition_2[6]==2&&Win_Condition_2[7]==2&&Win_Condition_2[8]==2){
    cout<<" Player 2 wins "<<endl;
    win=1;
    return win;
   
}

}
void show_input(){
   if(symbol_decide==1){
    x_o[spot_number_1]='x';
    cout<<" "<<x_o[0]<<" "<<"| "<<x_o[1]<<" "<<" "<<"| "<<x_o[2]<<" "<<endl;
    cout<<"--------------"<<endl;
    cout<<" "<<x_o[3]<<" "<<"| "<<x_o[4]<<" "<<" "<<"| "<<x_o[5]<<" "<<endl;
    cout<<"--------------"<<endl;
    cout<<" "<<x_o[6]<<" "<<"| "<<x_o[7]<<" "<<" "<<"| "<<x_o[8]<<" "<<endl;
    cout<<"--------------"<<endl;
   }
    else if(symbol_decide==2){
        x_o[spot_number_2]='o';
    cout<<" "<<x_o[0]<<" "<<"| "<<x_o[1]<<" "<<" "<<"| "<<x_o[2]<<" "<<endl;
    cout<<"--------------"<<endl;
    cout<<" "<<x_o[3]<<" "<<"| "<<x_o[4]<<" "<<" "<<"| "<<x_o[5]<<" "<<endl;
    cout<<"--------------"<<endl;
    cout<<" "<<x_o[6]<<" "<<"| "<<x_o[7]<<" "<<" "<<"| "<<x_o[8]<<" "<<endl;
    cout<<"--------------"<<endl;

    }

}


