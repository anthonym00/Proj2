/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Anthony Morales
 *
 * Created on 5/31/2020 , 8:22 PM
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
void aPwn(int, int [], int&);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Random Number Seed Set Here
    srand(static_cast<unsigned int>(time(0)));
    //Variable Declarations
    int plrT = 1; 
    char option; 
    string playerN;
    int PlrPwns[4] = {0,0,0,0};
    char optRorS;
    int die;
    int PlayerA;
    int pawnSel;
    //Variable Initialization
    die = 0; 
    PlayerA=PlrPwns[0]+PlrPwns[1]+PlrPwns[2]+PlrPwns[3];
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
        cin>>playerN; //Players Name input
    do{
         cout<<"Type r and press enter to roll die"<<endl;
    cout<<"Type s and press enter to see players' pieces locations"<<endl;
        cin>>optRorS;
    while( isRorS(optRorS) == false){
        cout<<"Invalid Input, try again"<<endl;
        cin>>optRorS;
    }
        isRorS(0);
    
    if ((optRorS == 's')||(optRorS == 'S')) {
        ScrBrd(playerN, PlrPwns);
    }
    if ((optRorS == 'r')||(optRorS == 'R')){  // if r is chosen roll die 
        die = rand()%6+1;// random number generator 1-6
        die=6;
    if (PlayerA == 0 && die != 6){//First move validation based on game rules
        cout<<"Die Rolled # "<<die<<endl<<"Turn Skipped"<<endl;
        plrT=0;
    }
    else { //if first roll isnt 6 do the following
        cout<<"Die Rolled # "<<die<<endl<<"Pick your piece to move"<<endl;       //VALID FIRST MOVE
        cout<<"Type 1,2,3,4 for pawn selection and press enter"<<endl;
        cin>>pawnSel; //select pawn number
        static_cast<short>(pawnSel);// cast to short
        aPwn(pawnSel, PlrPwns, die);
    }
    }
    }while (plrT==1);
   
    
       
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
    while(y<4){
    cout<<"Pawn "<<y+1<<": "<<a[y]<<endl;
    y++;
}
    y=0;
}

void aPwn(int a, int x[], int& die){
    cout<<a<<endl;
    int y = a;
    cout<<a<<endl<<y<<endl;
    if(y==1)
        x[0]+=die;
    if(y==2)
        x[1]+=die;
    if(y==3)
        x[2]+=die;
    if(y==4)
        x[3]+=die;
}


        
       
    
    
    




