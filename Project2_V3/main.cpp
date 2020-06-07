/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Anthony Morales
 *
 * Created on 6/1/2020 , 7:43 AM
 */


//System Level Libraries
#include <iostream>   //I/O Library
#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <string>
#include <ctime>
#include <fstream>
using namespace std;  //Libraries compiled under std

//User Level Libraries


//Global Constants - Science/Math Related

//Conversions, Higher Dimensions

//Function Prototypes
bool isRorS (char);
void ScrBrd(string, int []);
void aPwn(char, int [], int&);
void( int x, int [], int [], int [], int []);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Random Number Seed Set Here
    srand(static_cast<unsigned int>(time(0)));
    //Variable Declarations
    int plrT = 1; 
    char option; 
    char optRorS;
    int die;
    char pawnSel;
    string Players [4]= {" ", "Player 2","Player 3","Player 4"};
    int PlrPwns[16] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int PlrTtl[4] = {0,0,0,0};
    //Variable Initialization
    die = 0; 
    PlrTtl [0]=PlrPwns[0]+PlrPwns[1]+PlrPwns[2]+PlrPwns[3];

    PlrTtl [1] =PlrPwns[4]+PlrPwns[5]+PlrPwns[6]+PlrPwns[7];
    PlrTtl [2] =PlrPwns[8]+PlrPwns[9]+PlrPwns[10]+PlrPwns[11];
    PlrTtl [3] =PlrPwns[12]+PlrPwns[13]+PlrPwns[14]+PlrPwns[15];
    pawnSel = 0;
    //Mapping Process Inputs to Outputs
    
    
    //Display Outputs
     cout<<"TTTTT  RRRRR   OOOOO  U   U  BBBBB   L      EEEEE"<<endl;   //Trouble Written with letters
    cout<<"  T    R    R  O   O  U   U  B    B  L      E"<<endl;
    cout<<"  T    RRRRR   O   O  U   U  BBBBB   L      EEEEE"<<endl;
    cout<<"  T    R  R    O   O  U   U  B    B  L      E"<<endl;
    cout<<"  T    R    R  OOOOO  UUUUU  BBBBB   LLLLL  EEEEE"<<endl<<endl;  // End Trouble with letters
    cout<<"To start game type a and press enter \nTo exit type any key and press enter"<<endl;
    cin>>option;
switch(option){ //switch for start game or end program
    case 'a':    // If a is chosen game starts 
        cout<< "Game Started!"<<endl; 
        cout<<"Enter your name and press enter"<<endl;
        cin>>Players[0]; //Players Name input
          while(PlrTtl [0]<116){
               
    do{
         PlrTtl [0]=PlrPwns[0]+PlrPwns[1]+PlrPwns[2]+PlrPwns[3];
        if(PlrTtl [0]<116){
           
            plrT=0;
         cout<<"Type r and press enter to roll die"<<endl;
    cout<<"Type s and press enter to see players' pieces locations"<<endl;
    cout<<"Type e and press enter to end game"<<endl;
        cin>>optRorS;
        if (optRorS== 'e'||optRorS=='E')
            exit(0);
    while( isRorS(optRorS) == false){
        cout<<"Invalid Input, try again"<<endl;
        cin>>optRorS;
    }
        isRorS(0);
    
    if ((optRorS == 's')||(optRorS == 'S')) {
        PlrTtl [0]=PlrPwns[0]+PlrPwns[1]+PlrPwns[2]+PlrPwns[3];
        ScrBrd(Players[0], PlrPwns);
        PlrTtl [0]<<endl;
   
    }
    if ((optRorS == 'r')||(optRorS == 'R')&& PlrTtl [0]<116){  // if r is chosen roll die 
        PlrTtl [0]=PlrPwns[0]+PlrPwns[1]+PlrPwns[2]+PlrPwns[3];
        die = rand()%6+1;// random number generator 1-6
        die = 6;
    if (PlrTtl [0] == 0 && die != 6){//First move validation based on game rules
        cout<<"Die Rolled # "<<die<<endl<<"Turn Skipped"<<endl;
        plrT=0;
  
    }
    else if (PlrTtl [0]<116) { //if first roll isnt 6 do the following
        cout<<"Die Rolled # "<<die<<endl<<"Pick your piece to move"<<endl;       //VALID FIRST MOVE
        cout<<"Type a,b,c,d for pawn selection and press enter"<<endl;
        aPwn(pawnSel, PlrPwns, die);    
        plrT=1;
        
    }            
    }
        }
        else{
            plrT=0;
        }
        
        
    }while (plrT==1);
    plrT=1;
     PlrTtl [0]=PlrPwns[0]+PlrPwns[1]+PlrPwns[2]+PlrPwns[3];
          }
    

   break; 
default: //if a isnt chosen at start program will print message and end
    cout<<"Invalid Input"<<endl;
break;
}
    //Clean Up

    
    //Exit stage right!
    return 0;
}
bool isRorS (char optRorS){ //input validation. RorS is r or s (caps doesnt matter)
    if(optRorS == 'r') // if input is 'r' set function (isRorS) to true
        return true;
    if(optRorS == 'R')// if input is 'R' set function (isRorS) to true
        return true;
    if(optRorS == 's')// if input is 's' set function (isRorS) to true
        return true;
    if(optRorS == 'S')// if input is 'S' set function (isRorS) to true
        return true;
    else{
        return false;//If letter besides r or s is input,funtion returns false
    }   
}

bool isRorS (int x){ // Input validation Overflowing if user inputs a number
    return false;
}
void ScrBrd(string x, int a[]){
    static int y = 0; 
    cout<<x<<"'s Score"<<endl;
    cout<<"-----------------"<<endl;
    cout<<"Pawn A:"<<a[0]<<endl;
    cout<<"Pawn B:"<<a[1]<<endl;
    cout<<"Pawn C:"<<a[2]<<endl;
    cout<<"Pawn D:"<<a[3]<<endl;
}
void aPwn(char a, int x[], int& die){
    static int z =0; 
    for(z=0;z<1;z++){
  cin>>a;
    if(a=='a' && x[0]<29)
        x[0]+=die;
   
    
    else if(a=='b'&& x[1]<29){
        x[1]+=die;
       
    }
    else if(a=='c'&& x[2]<29){
        x[2]+=die;
        z=1;
    }
    else if(a=='d'&& x[3]<29){
        x[3]+=die;
       
    }
    else{
        cout<<"invalid input try again"<<endl;
        z--;
    }
    if(x[0]>29)
        x[0]=29;
    if(x[1]>29)
        x[1]=29;
    if(x[2]>29)
        x[2]=29;   
    if(x[3]>29)
        x[3]=29;
    }
    z=0;
}
void( int x,int PlrTl[], int a[], int b[], int c[], int d[]){
    //die is x
    // int PlrPwns[16] = {0,0,0,0,  0,0,0,0,  0,0,0,0,  0,0,0,0};
    //int PlrTtl[4] = {      0,        0,        0,        0     };
    for(int x = 1;x<3;x++){
    while(PlrTl [x]<116){          
    do{
         PlrTl [x]=PlrPwns[0]+PlrPwns[1]+PlrPwns[2]+PlrPwns[3];
        if(PlrTl [0]<116){
           
            plrT=0;
         cout<<"Type r and press enter to roll die"<<endl;
    cout<<"Type s and press enter to see players' pieces locations"<<endl;
    cout<<"Type e and press enter to end game"<<endl;
        cin>>optRorS;
        if (optRorS== 'e'||optRorS=='E')
            exit(0);
    while( isRorS(optRorS) == false){
        cout<<"Invalid Input, try again"<<endl;
        cin>>optRorS;
    }
        isRorS(0);
    
    if ((optRorS == 's')||(optRorS == 'S')) {
        PlrTl [0]=PlrPwns[0]+PlrPwns[1]+PlrPwns[2]+PlrPwns[3];
        ScrBrd(Players[0], PlrPwns);
        PlrTl [0]<<endl;
   
    }
    if ((optRorS == 'r')||(optRorS == 'R')&& PlrTl [0]<116){  // if r is chosen roll die 
        PlrTl [0]=PlrPwns[0]+PlrPwns[1]+PlrPwns[2]+PlrPwns[3];
        die = rand()%6+1;// random number generator 1-6
        die = 6;
    if (PlrTl [0] == 0 && die != 6){//First move validation based on game rules
        cout<<"Die Rolled # "<<die<<endl<<"Turn Skipped"<<endl;
        plrT=0;
  
    }
    else if (PlrTl [0]<116) { //if first roll isnt 6 do the following
        cout<<"Die Rolled # "<<die<<endl<<"Pick your piece to move"<<endl;       //VALID FIRST MOVE
        cout<<"Type a,b,c,d for pawn selection and press enter"<<endl;
        aPwn(pawnSel, PlrPwns, die);    
        plrT=1;
        
    }            
    }
        }
        else{
            plrT=0;
        }
        
        
    }while (plrT==1);
    plrT=1;
     PlrTtl [0]=PlrPwns[0]+PlrPwns[1]+PlrPwns[2]+PlrPwns[3];
          }
}
}


        
       
    
    
    




