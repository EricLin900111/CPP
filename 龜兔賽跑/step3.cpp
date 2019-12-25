#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

const int RACE_END = 70;

void printCurrentPositions( const int * const snapperPtr, const int * const bunnyPtr );
void moveTortoise( int *const );
void moveHare( int * const );

int main()
{
    int tortoise=1;
    int hare = 1;
    
    srand( time( 0 ) );
    
    while ( tortoise != RACE_END && hare != RACE_END ) 
   {
      Sleep( 100 );
      system("cls");  
	      
      moveTortoise( &tortoise );
      moveHare(&hare);
      printCurrentPositions( &tortoise, &hare );
      
   }
}

/*印出烏龜與兔子位置*/
void printCurrentPositions( const int * const snapperPtr, const int * const bunnyPtr )
{
	for(int i = 1 ; i <= 7 ; i++)
			cout << "---------|" ;
	cout << endl ;
	
	cout << setw(*bunnyPtr) << "H" << endl ;
	cout << setw(*snapperPtr) << "T" <<endl ;
}

/*移動烏龜*/
void moveTortoise( int * const turtlePtr )
{
	int a = rand() % 10 ;
	*turtlePtr += ((a>=0 && a<=4)?3:(a>4&&a<7)?-6:1) ;
	*turtlePtr = ((*turtlePtr>70)?70:(*turtlePtr<0)?1:*turtlePtr) ;
}

/*移動兔子*/
void moveHare( int * const rabbitPtr )
{
	int a = rand() % 10 ;
	*rabbitPtr += ((a>=0 && a<=1)?0:(a>1&&a<4)?9:(a==4)?-12:(a>=5&&a<=7)?1:-2) ;
	*rabbitPtr = ((*rabbitPtr>70)?70:(*rabbitPtr<0)?1:*rabbitPtr) ;
}
