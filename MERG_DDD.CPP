#include<iostream.h>
#include<conio.h>

void main()
 {
  clrscr();
  int a[30],b[30],n,m;
  void Merg_DDD(int a[30],int b[30],int n,int m);
  cout<<"\n How many data you want to enter in first array:";
  cin>>n;
  cout<<"\n Enter "<<n<<" data in descending order:";
  for(int i=0;i<n;i++)
    cin>>a[i];

  cout<<"\n How many data you want to enter in second array:";
  cin>>m;
  cout<<"\n Enter "<<m<<" data in descending order:";
  for(i=0;i<m;i++)
    cin>>b[i];


   cout<<"\n Normal Display of first array:-\n";
   for(i=0;i<n;i++)
    cout<<"\t"<<a[i];

   cout<<"\n Normal Display of second array:-\n";
   for(i=0;i<m;i++)
    cout<<"\t"<<b[i];

   cout<<"\n\n Press any key to merg:";
   getch();
   Merg_DDD(a,b,n,m);
   getch();
 }
void Merg_DDD(int a[30],int b[30],int n,int m)
 {
  int i,j,k,c[75];
  i=0;
  j=0;
  k=0;
  while((i<n)&&(j<m))
   {
    if(a[i]>b[j])
     {
      c[k]=a[i];
      k++;
      i++;
     }
    else
     {
      c[k]=b[j];
      k++;
      j++;
     }
   }
  while(i<n)
   {
    c[k]=a[i];
    k++;
    i++;
   }
  while(j<m)
   {
    c[k]=b[j];
    k++;
    j++;
   }

  cout<<"\nDisplay of merged array:-";
  for(i=0;i<n+m;i++)
   cout<<"\t"<<c[i];
 }
 
