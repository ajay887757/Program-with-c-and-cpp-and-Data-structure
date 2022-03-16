//Project on file handling
#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<string.h>
struct item
{
  int ino;
  char iname[20];
  int price;
};

void add_rec()
{
  FILE *fp;
  struct item I;
  fp=fopen("COMP","ab");
  printf("\nEnter record to be Add : ");
  scanf("%d%s%d",&I.ino,I.iname,&I.price);
  fwrite(&I,sizeof(I),1,fp);
  printf("\n Record Added");
  fclose(fp);
}

void traverse_rec()
{
  FILE *fp;
  struct item I;

  fp=fopen("COMP","rb");
  if(fp==NULL)
  {
    printf("\nSorry file not found...");
    return;
  }
  while(fread(&I,sizeof(I),1,fp))
    printf("\n%5d %15s %5d",I.ino,I.iname,I.price);
  fclose(fp);
}

void search_rec()
{
  FILE *fp;
  struct item I;
  int icode;
  fp=fopen("COMP","rb");
  if(fp==NULL)
  {
    printf("\nSorry file not found...");
    return;
  }
  printf("\nEnter Item no to be search : ");
  scanf("%d",&icode);
  while(fread(&I,sizeof(I),1,fp))
  {
    if(icode==I.ino)
    {
      printf("\nCongrates Record Found !\n");
      printf("\n%5d %15s %5d",I.ino,I.iname,I.price);
      fclose(fp);
      return;
    }
  }
  printf("\nSorry Record not found!");
  fclose(fp);
}

void insert_rec()
{
  FILE *fp1,*fp2;
  struct item I,t;
  int icode,flag=0;
  fp1=fopen("COMP","rb");
  if(fp1==NULL)
  {
    printf("\nSorry file not found...");
    return;
  }
  fp2=fopen("TEMP","wb");
  printf("\nEnter Item no, after which you want to insert new record : ");
  scanf("%d",&icode);
  while(fread(&t,sizeof(t),1,fp1))
  {
    fwrite(&t,sizeof(t),1,fp2);
    if(icode==t.ino)
    {
      printf("Enter Record to be inserted(item no,item name,price): ");
      scanf("%d%s%d",&I.ino,I.iname,&I.price);
      fwrite(&I,sizeof(I),1,fp2);
      printf("\nRecord Inserted");
      flag=1;
    }
  }
  if(flag==0)
    printf("\nSorry %d item no not found",icode);
  fclose(fp1);
  fclose(fp2);
  remove("COMP");
  rename("TEMP","COMP");
}

void delete_rec()
{
  FILE *fp1,*fp2;
  struct item t;
  int icode,flag=0;
  fp1=fopen("COMP","rb");
  if(fp1==NULL)
  {
    printf("\nSorry file not found...");
    return;
  }
  fp2=fopen("TEMP","wb");
  printf("\nEnter Item no to be deleted : ");
  scanf("%d",&icode);
  while(fread(&t,sizeof(t),1,fp1))
  {
    if(icode!=t.ino)
      fwrite(&t,sizeof(t),1,fp2);
    else
    {
      printf("\nRecord Deleted");
      flag=1;
    }
  }
  if(flag==0)
    printf("\nSorry %d item no not found",icode);
  fclose(fp1);
  fclose(fp2);
  remove("COMP");
  rename("TEMP","COMP");
}

void update_rec()
{
  FILE *fp;
  struct item t,I;
  int icode,flag=0;
  fp=fopen("COMP","rb");
  if(fp==NULL)
  {
    printf("\nSorry file not found...");
    return;
  }
  printf("\nEnter Item no to be updated : ");
  scanf("%d",&icode);
  while(fread(&t,sizeof(t),1,fp))
  {
    if(icode==t.ino)
    {
      printf("\nEnter new price : ");
      scanf("%d",&t.price);
      fseek(fp,-sizeof(t),1);
      fwrite(&t,sizeof(t),1,fp);
      printf("\nRecord updated");
      flag=1;
    }
  }
  if(flag==0)
    printf("\nSorry %d item no not found",icode);
  fclose(fp);
}

void sort_rec()
{
  struct item t,*p;
  int nor,i=0,j;
  FILE *fp;
  fp=fopen("COMP","r");
  if(fp==NULL)
  {
    printf("\nSorry file not found...");
    return;
  }
  fseek(fp,0,2);
  nor=ftell(fp)/sizeof(t);
  p=(struct item *)malloc(nor * sizeof(struct item));
  rewind(fp);
  while(fread(&t,sizeof(t),1,fp))
  {
    p[i++]=t;
  }
  for(i=0;i<nor-1;i++)
  {
    for(j=i+1;j<nor;j++)
    {
      if(p[j].price<p[i].price)
      {
	t=p[i];
	p[i]=p[j];
	p[j]=t;
      }
    }
  }
  printf("\nSorted files are :\n");
  for(i=0;i<nor;i++)
    printf("\n%5d %15s %5d",p[i].ino,p[i].iname,p[i].price);
  free(p);
  fclose(fp);
}

void main()
{
  int ch;
  do
  {
    clrscr();
    printf("\n**MENU**\n");
    printf("\n 1 Add Record");
    printf("\n 2 Traverse Record");
    printf("\n 3 Search Record");
    printf("\n 4 Insert Record");
    printf("\n 5 Delete Record");
    printf("\n 6 Update Record");
    printf("\n 7 Sort Records");
    printf("\n 0 Exit");
    printf("\n Enter your choice");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1 : add_rec();
	       break;
      case 2 : traverse_rec();
	       break;
      case 3 : search_rec();
	       break;
      case 4 : insert_rec();
	       break;
      case 5 : delete_rec();
	       break;
      case 6 : update_rec();
	       break;
      case 7 : sort_rec();
	       break;
      case 0 : printf("Thanks for using S/W....");
	       break;
      default: printf("Invalid Choice");
    }
    printf("\n\nPress any key to coninue...");
    getch();
  }while(ch!=0);
}