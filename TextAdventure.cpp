//  =============== BEGIN ASSESSMENT HEADER ================
/// @file Text Adventure/textadventure.cpp 
/// @brief Programming Assignment #7 for CS 10 Spring 2013
///
/// @author Oscar Gonzalez [ogonz007@ucr.edu]
/// @date May 22, 2013
///
/// @par Enrollment Notes
///     Lecture Section: 001
/// @par
///     Lab Section: 24
/// @par
///     TA: Levi Lindsey
///
/// @par Plagiarism Section
/// I hereby certify that the code in this file
/// is ENTIRELY my own original work.
//  ================== END ASSESSMENT HEADER ===============

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void drawPicture()
{
    cout<<"        _--~~--_" << endl;
    cout<<"      /~/_|  |_\\~\\" << endl;
    cout<<"     |____________|" << endl;
    cout<<"     |[][][][][][]|" << endl;
    cout<<"   __| __         |__" << endl;
    cout<<"  |  ||. |   ==   |  |" << endl;
    cout<<" (|  ||__|   ==   |  |)" << endl;
    cout<<"  |  |[] []  ==   |  |" << endl;
    cout<<"  |  |____________|  |" << endl;
    cout<<"  /__\\            /__\\" << endl;
    cout<<"   ~~              ~~" << endl;
    cout<<endl;
}
//---picture room---//
//---@brief draws picture and does nothing else---//
void pictureRoom()
{
    cout<<"You found a picture!"<<endl;
    drawPicture();
}
//---monster room---//
//---@brief set banana and orange value to zero---//
void monsterRoom(int &bananas, int &oranges, string monster)
{
    cout<<endl;
    cout<<"WATCH OUT!!"<<endl;
    cout<<monster<<" attacks you and steals all of your";
    cout<<" bananas and oranges."<<endl;
    cout<<endl;
    
    bananas = 0;
    oranges = 0;
}

//---genie room---//
//---@brief bananas + 2 & oranges + 1---//
void genieRoom(int &bananas, int &oranges)
{
    cout<<endl;
    cout<<"!!POOF!!"<<endl;
    cout<<"A genie pops out and grants you 2 bananas and";
    cout<<" 1 orange."<<endl;
    cout<<endl;
    
    bananas = bananas + 2;
    oranges = oranges + 1;
}

int main()
{
    int bananas = 5;
    int oranges = 3;
    int x = 2;
    string monster;
    string name;
    char door;
    int alignment;
    srand(time(0)); 
    
    cout<<"Please enter your name: ";
    cin>>name;
    cout<<endl<<"Name your scariest monster: ";
    cin>>monster;
    cout<<endl;
    
        
    
    while(x>1)
    {
        alignment = rand()%2;
        cout<<name<<", you are in a room with 4 doors.";
        cout<<endl;
        cout<<"You are carrying "<<bananas<<" bananas and ";
        cout<<oranges<<" oranges."<<endl;
        cout<<endl;
        cout<<"Pick a door to enter by typing the "; 
        cout<<"direction it is in (N/E/S/W): ";
        cin>>door;
        cout<<endl;
        
        if(door=='N'||door=='E'||door=='W'||door=='S')
        {
            if(alignment == 0)
            {
                if(door == 'N')
                {
                    monsterRoom(bananas, oranges, monster);
                }
                else if(door == 'S')
                {
                    genieRoom(bananas, oranges);
                }
                else if(door == 'E')
                {
                    pictureRoom();
                }
                else if(door == 'W')
                {
                    cout<<"You found the exit!"<<endl;
                    cout<<"Your score is ";
                    cout<<bananas + oranges;
                    cout<<" ("<<bananas<<" bananas and ";
                    cout<<oranges<<" oranges)."<<endl;
                    cout<<"Bye bye!!!"<<endl;
                    break;
                }
            }
            
            else
            {
                if(door == 'N')
                {
                    cout<<"You found the exit!"<<endl;
                    cout<<"Your score is ";
                    cout<<bananas + oranges;
                    cout<<" ("<<bananas<<" bananas and ";
                    cout<<oranges<<" oranges)."<<endl;
                    cout<<"Bye bye!!!"<<endl;
                    break;
                }
                else if(door == 'S')
                {
                    monsterRoom(bananas, oranges, monster);
                }
                else if(door == 'E')
                {
                    genieRoom(bananas, oranges);
                }
                else if(door == 'W')
                {
                    pictureRoom();
                }
            }
        }    
        else 
        {
            int j = 1;
            while(j > 0)
            {
                cout<<endl;
                cout<<"Pick a door to enter by typing";
                cout<<" the direction it is in (N/E/S/W): ";
                cin>>door;
                cout<<endl;
                if(door == 'N')
                {
                    j = 0;
                }
                else if(door == 'E')
                {
                    j = 0;
                }
                else if(door == 'S')
                {
                    j = 0;
                }
                else if(door == 'W')
                {
                    j = 0;
                }
            }    
        }
        x++;
            
    }    
    
    
    
    
    return 0;
    
}