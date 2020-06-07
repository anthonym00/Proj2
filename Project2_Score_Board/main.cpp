/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on March 19th, 2020, 11:40 AM
 * Purpose: Linked List Concepts
 */

//System Level Libraries
#include <iostream>   //I/O Library
using namespace std;  //Libraries compiled under std

//User Level Libraries


//Global Constants - Science/Math Related
//Conversions, Higher Dimensions

//Function Prototypes
void ScrBrd(string, int []);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Random Number Seed Set Here
    
    //Variable Declarations
    int Scr[4] = {0,1,2,3};
    string PlayerN; 
    //Variable Initialization

    
    //Mapping Process Inputs to Outputs

    
    //Display Outputs
    cout<<"Enter Name"<<endl;
    cin>>PlayerN;
    ScrBrd(PlayerN,Scr);
   
    //Clean Up

    
    //Exit stage right!
    return 0;
}
void ScrBrd(string x, int a[]){
    static int y = 0; 
    cout<<x<<"'s Score"<<endl;
    cout<<"-----------------"<<endl;
    while(y<4){
    cout<<"Pawn "<<y+1<<": "<<a[y]<<endl;
    y++;
}
}