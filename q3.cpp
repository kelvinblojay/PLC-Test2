#include<iostream>
#include<ctime>
using namespace std;
#define MAX 50

void fun1()
{
    
   static int a[MAX];//static array
}
 
void fun2()
{
   int a[MAX];//stack array
}
 
void fun3()
{   
   int *p=new int[MAX];//heap array
}


int main()//main
{
   int i,n=2000000;
   double total_time;
   clock_t start, end;
   start=clock();
   for(i=0;i<n;i++)
   {
       fun1();
   }
   end=clock();
   total_time=((double) (end - start));
   cout<<"Total time for static array: "<<total_time<<"\n"<<endl;
  
   start=clock();
   for(i=0;i<n;i++)
   {
       fun2();
   }
   end=clock();
   total_time=((double) (end - start));
   cout<<"Total time for stack array: "<<total_time<<endl;
  
   start=clock();
   for(i=0;i<n;i++)
   {
       fun3();
   }
   end=clock();
   total_time=((double) (end - start));
   cout<<"Total time for heap array: "<<total_time<<endl;
}

