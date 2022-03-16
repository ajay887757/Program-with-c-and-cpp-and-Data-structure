Void main( )
       {  int x =12 , *p;
          int *p ;
          p = &x;
          p=x;

          printf(“\n %u  %u   %u “, p , &p , &x );

          p = 7078 ;
          printf(“\n %u  %u   %u “, p , &p , &x );

          &p = 4045 ; 
          printf(“\n %u  %u   %u “, p , &p , &x );

          *p = 6069 ; 
          printf(“\n %u  %u   %u “, p , &p , &x );
  
          printf(“\n   %d    %d   “ , x, *p ); 

          scanf ( “%d”  , p );
     
          scanf ( “%d” , &x );

          scanf( “%u” , &p);

          printf(“\n %u  %u   %u “, p , &p , &x );

          printf(“\n   %d    %d   “ , x, *p ); 
         
          }


       

