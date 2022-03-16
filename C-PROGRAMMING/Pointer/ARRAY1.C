//WAP to get the value of array using pointer
void main()
    { int x[10] ,i,*p ;
      p=x;
      clrscr();
      printf("\n enter array x :");
      for ( i=0 ; i<10 ; i++ )
	    scanf( "%d" , (p+i) );
      for ( i=0 ; i<10 ; i++ )
	    printf("   %d", *(p+i));
      getch();
     }

     
