//Difference between Union and Structure
union xyz1
{
  int n;
  char s[20];
  float m;
}
struct xyz2
{
  int n;
  char s[20];
  float m;
}
void main()
{
  struct xyz1 x1;
  printf("\n%d",sizeof(x1));
  union xyz2 x2;
  printf("\n%d",sizeof(x2));
}

