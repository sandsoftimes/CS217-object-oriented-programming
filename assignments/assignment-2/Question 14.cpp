#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include <cstring>
using namespace std;

const int NUMROWS = 14;
const int NUMSEATS = 7;
//enum seatsType {A,B,C,D,E,F};

void initPlane(char plane[NUMROWS][NUMSEATS])
{
     int x,y;
     //strcpy(plane[2], "Row 1");
     plane[0][0] = ' ';
     plane[0][1] = 'A';
     plane[0][2] = 'B'; 
     plane[0][3] = 'C';
     plane[0][4] = 'D';
     plane[0][5] = 'E';
     plane[0][6] = 'F';
     plane[1][0] = '1';
     plane[2][0] = '2';
     plane[3][0] = '3';
     plane[4][0] = '4';
     plane[5][0] = '5';
     plane[6][0] = '6';
     plane[7][0] = '7';
     plane[8][0] = '8';
     plane[9][0] = '9';
     plane[10][0] = 'W';
     plane[11][0] = 'Y';
     plane[12][0] = 'Z';
     plane[13][0] = 'G';
     for (x = 1; x < NUMROWS ; x++)
     {
         for ( y = 1 ; y < NUMSEATS ; y++)
         plane[x][y] = '*';
     }
}
// POSTCONDITION: 
//   plane[x][0] == 'A', 0<=x<13
//   plane[x][1] == 'B', 0<=x<13
//   plane[x][2] == 'C', 0<=x<13
//   plane[x][3] == 'D', 0<=x<13


void printPlane(char msg[], char plane[NUMROWS][NUMSEATS])
{
     cout << msg << endl;
     int Row,col;
     for ( Row = 0; Row < NUMROWS ; Row ++)
     {
         for (col = 0; col < NUMSEATS; col++)
         cout << setw(5) << plane [Row][col] << " ";
         cout << endl;
     }
}
// POSTCONDITION: The seating layout of the plane has been printed
// to the standard output with an X displayed for each taken seat.


int main()
{
  int seatsTaken = 0;
  int seats = NUMROWS * NUMSEATS;
  char plane[NUMROWS][NUMSEATS];
  char keepGoing = 'y';
  int row = 0; 
  char seat;
  int rowIndex, seatIndex;
  char ticketType[15];

   initPlane(plane);

  cout << "Choose your seat!" << endl;
  while (seatsTaken < seats && keepGoing == 'y')
    {
      //
      // Show layout and get seat choice
      // 
      printPlane("Plane layout; X designates taken seats", plane);
      cout << "Row 1 and 2 are first clss. " << endl;
      cout << "Rows 3 through 7 are business class. " << endl;
      cout << "Rows 8 through 13 are economy class. " << endl;
      cout << "Eneter ticket type (first class,business class,or economy class) :" ;
      cin >> row >> seat;
           

      
      // Adjust input to use as indices
      
      rowIndex = row;
      
      
      if ( seat == 'A' || seat == 'a' )
      seatIndex = 1;
      else if ( seat == 'B' || seat == 'b' )
      seatIndex = 2;
      else if ( seat == 'C' || seat == 'c' )
      seatIndex = 3;
      else if ( seat == 'D' || seat == 'd' )
      seatIndex = 4;
      else if ( seat == 'E' || seat == 'e' )
      seatIndex = 5;
      else if ( seat == 'F' || seat == 'f' )
      seatIndex = 6;
      
      

      //
      // Check to see if seat is taken
      // 
      if (plane[rowIndex][seatIndex] == 'X')
	cout << "Sorry, " << row << seat << " is already taken." << endl;
      else
	{
	  cout << "OK, you've got " << row << seat << endl;
	  plane[rowIndex][seatIndex] = 'X';
	  seatsTaken++;
	}

      //
      // If there are seats left, check we should keep going
      // 

      if (seatsTaken < seats)
	{
	cout << "Choose another seat? (y/n) ";
	cin >> keepGoing;
	}
      else
	cout << "Plane is now full!" << endl;
    }

    printPlane("Final seating chart", plane);
    
    return 0;
    
}
