#include <stdio.h>
int main() {
    int Score ;
    int text ;

    printf("Insert score : ") ;
    text  =scanf("%d" , &Score  );
    if ( text  != 1 ){
          printf("please enter number only") ;
          return 1 ;
    }//end if
    switch( Score  )
    {
    case 80 ... 100 :
        printf( "A" ) ;
        break ;
    case 75 ... 79 :
        printf( "B+" ) ;
        break ;
    case 70 ... 74 :
        printf( "B" ) ;
        break ;
    case 65 ... 69 :
        printf( "C+" ) ;
        break ;
    case 60 ... 64 :
        printf( "C" ) ;
        break ;
    case 55 ... 59 :
        printf( "D+" ) ;
        break ;
    case 50 ... 54 :
        printf( "D" ) ;
        break ;
    case 0 ... 49 :
        printf("F") ;
        break ;
    default:
        printf( "T_T" ) ;
        break ;
    }//end switch 
     return 0 ;
}//end main functio