#include <stdio.h>
#include <math.h>

int Armstrong ( int num ) {
    int orinum, left , result = 0 , n = 0 ;

    orinum = num ;
    while ( orinum != 0 ) {
    orinum /= 10 ;
    ++n ;
    }//end while
    orinum = num ;
    while ( orinum != 0 ) {
        left = orinum % 10 ;
        result += pow ( left , n ) ;
        orinum /= 10 ;
    }//end while
    return ( result == num ) ;
}//end int isArmstrong

int main() {
    int nm ;

    printf ( "Enter Number:" ) ;
    scanf ( "%d" , &nm ) ;
    if ( Armstrong ( nm ) ) {
        printf ( "Pass.\n" ) ;
    } else { 
        printf ( "Not Pass.\n" ) ;
    }//end else
    return 0 ;
}//end main function