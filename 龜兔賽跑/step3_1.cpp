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
		switch(a){
			case 0 :
			case 1 :
				*turtlePtr -= 6 ;
				if(*turtlePtr>70)
					*turtlePtr = 70 ;
				if(*turtlePtr<1)
					*turtlePtr = 1 ;
				break ;
			case 2 :
			case 3 :
			case 4 :
				*turtlePtr += 1 ;
				if(*turtlePtr>70)
					*turtlePtr = 70 ;
				if(*turtlePtr<1)
					*turtlePtr = 1 ;
				break ;
			default:
				*turtlePtr += 3 ;
				if(*turtlePtr>70)
					*turtlePtr = 70 ;
				if(*turtlePtr<1)
					*turtlePtr = 1 ;
				break ;
		}
}

/*移動兔子*/
void moveHare( int * const rabbitPtr )
{
  	int a = rand() % 10 ;
		switch(a){
			case 0 :
			case 1 :
				break ;
			case 2 :
			case 3 :
				*rabbitPtr += 9 ;
				if(*rabbitPtr>70)
					*rabbitPtr = 70 ;
				if(*rabbitPtr<0)
					*rabbitPtr = 1 ;
				break ;
			case 4 :
				*rabbitPtr -= 12 ;
				if(*rabbitPtr>70)
					*rabbitPtr = 70 ;
				if(*rabbitPtr<0)
					*rabbitPtr = 1 ;
				break ;
			case 5 :
			case 6 :
			case 7 :
				*rabbitPtr += 1 ;
				if(*rabbitPtr>70)
					*rabbitPtr = 70 ;
				if(*rabbitPtr<0)
					*rabbitPtr = 1 ;
				break ;
			default:
				*rabbitPtr -= 2 ;
				if(*rabbitPtr>70)
					*rabbitPtr = 70 ;
				if(*rabbitPtr<0)
					*rabbitPtr = 1 ;
				break ;
		}
}
