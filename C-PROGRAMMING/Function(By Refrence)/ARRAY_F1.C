//WAP to display the elements of Array using fn
void main()
    {
    int x[10] , i  ;
    void show(int * , int );
    clrscr();
    printf("\n enter array x :");
    for ( i=0 ; i<10 ; i++ )
	scanf( "%d" , &x[i] );
       show (x ,10);
    clrscr();
    }
void show (int *p ,int n)
     {
     int i;
     for( i=0 ; i<n ; i++ )
	  printf("  %d", *(p+i) );
     }

      
      
     


        
