#include <iostream>
using namespace std;

int BinSearch(int Array[],int low,int high,int key/*要找的值*/)  
{  
    if (low<=high)  
    {  
        int mid = (low+high)/2;  
        if(key == Array[mid])  
            return mid;  
        else if(key<Array[mid])  
            return BinSearch(Array,low,mid-1,key);  
        else if(key>Array[mid])  
            return BinSearch(Array,mid+1,high,key);  
    }  
    else  
        return -1;  
} 

int BinSearch1(int Array[],int SizeOfArray,int key/*要找的值*/)
{
	int low=0,high=SizeOfArray-1;
	int mid;
	while (low<=high)
	{
		mid = (low+high)/2;
		if(key==Array[mid])
			return mid;
		if(key<Array[mid])
			high=mid-1;
		if(key>Array[mid])
			low=mid+1;
	}
	return -1;
}

int main()
{
	const int LEN=10;
    int a[10]={1,3,4,7,9,10,12,13,20,45};
    
    int goal = 10;
    int index = BinSearch1(a, LEN, goal);

    if(index != -1)
        cout<<goal<<"在数组中的下标为"<<BinSearch1(a, LEN, goal)<<endl;
    else
        cout<<"不存在"<<goal<<endl;
    return 0;
}

	
