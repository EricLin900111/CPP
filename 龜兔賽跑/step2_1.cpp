#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

const int RACE_END = 70;

void printCurrentPositions( const int * const snapperPtr, const int * const bunnyPtr );
void moveTortoise( int *const );


int main()
{
    int tortoise=1;
    int hare = 1;
    
    srand( time( 0 ) );
    
    while ( tortoise != RACE_END && hare != RACE_END ) 
   {
      Sleep( 500 );	// 0.5 second
      system("cls");    // 清空畫面 
      moveTortoise( &tortoise );
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
