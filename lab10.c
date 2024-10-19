#include <stdio.h>
#include <string.h>
#include <ctype.h>

int Checkw ( char str[] ) {
    int left = 0 ;
    int right = strlen(str) - 1 ;

    while ( left < right ) {
        while ( left == right&& !isalnum ( str[left] ) ) {
            left++ ;
        }//end while
        if ( tolower ( str[left] ) !=tolower ( str[right] ) ) {
            return 0 ;
        }//end if
        left++ ;
        right-- ;
    }//end whaile 
    return 1 ;
}//end int

int main() {
    char word[99] ;

    printf ( "Enter a word: " ) ;
    scanf ( "%s" , word ) ;
    if ( Checkw ( word ) ) {
        printf ( "Pass. \n" ) ;
    } else { 
        printf ( "Not Pass. \n" ) ; 
    }//end else
    return 0 ;
}//end main function