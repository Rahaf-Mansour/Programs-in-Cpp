#include <iostream>
#include <string>
using namespace std;

void data(int[],int);
void sort(int[],int);
int binarysearch(int[],int,int);
void Display(int[],int,string);
double mean(int[],int);

int main()
{
 
 int ch,num,ele[50],key;
 
 cout<<"Enter the number of elements: ";
 cin>>num;
 
 while(num>50)
 {
  cout<<"An integer array that holds a maximum of 50 elements\n";
  cout<<"Enter the number of elements: ";
  cin>>num;
 }
 
 data(ele,num);
 Display(ele,num,"unsorted");
 sort(ele,num);
 Display(ele,num,"sorted");
 cout<<"Enter number to search: ";
 cin>>key;
 ch=binarysearch(ele,num,key);
 if(ch<0)
  cout<<key<<" is not in the array.\n";
 else
  cout<<key<<" is at array location "<<ch<<endl;
 cout<<"The mean value of array is "<<mean(ele,num)<<endl;
 system("pause");
 return 0;
}

void data(int a[],int n)
{
 int i;
 for(i=0;i<n;i++)
 {
  cout<<"Enter element "<<i+1<<": ";
  cin>>a[i];
 }
}

void Display(int x[],int n,string d)
{
 int i;
 cout<<"The "<<n<<" elements in "<<d<<" array are:";
 for(i=0;i<n;i++)
 {
  cout<<x[i]<<" ";
  if((i+1)%10==0)
   cout<<endl;
 }
 cout<<endl;
}

void sort(int y[],int n)
{
 int i,j,t;
 for(i=0;i<n-1;i++)
  for(j=i;j<n;j++)
   if(y[i]>y[j])
   {
    
    t=y[i];
    y[i]=y[j];
    y[j]=t;
   }
}

int binarysearch(int z[],int n,int key)
{
 int low=0,max=n,mid;
 while(low<=max )
 {
  mid=(low+max)/2;
  if(z[mid]<key)
   low = mid + 1;
  else
  {
   if(z[mid]>key )
    max=mid-1;                  
   else
   {
    return mid;
   }}}
 return -1;
}

double mean(int m[],int n)
{
 int i,sum=0;
 for(i=0;i<n;i++)
  sum+=m[i];
 return (double)sum/n;
}

