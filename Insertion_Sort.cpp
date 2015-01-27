#include <stdio.h>
#include <stdlib.h>
#include <iostream>

void swap(int *p1, int *p2)
{
      int temp;
      temp=*p1;
      *p1=*p2;
      *p2=temp;
}

void insertSort(int *a,int len)
{
      int i,j;
      for(i=0;i<len-1;i++)
      {
          for(j=i+1;j>=1;j--)
          {
              if(a[j]<a[j-1])
                   swap(&a[j],&a[j-1]);              
          }
      }
}

int main()
{
	const int LEN=10;
    int a[LEN]={1,45,41,71,19,15,12,10,21,45};
	insertSort(a,LEN);
	for(int i:a){
		std::cout<< i << "   ";
	}
	std::cout<<std::endl;
}