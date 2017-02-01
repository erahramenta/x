#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main()
{
	// weight W=peso
	//        C=beneficio
	
	
	float c[10]={5,9,8,10,9,5,4,2,3,1};
	float w[10]={1,9,5,7,8,9,3,1,5,1};
	float v[10];
	for(int i=0;i<10;i++)
	{
		v[i]=c[i]/w[i];
	}
	for(int i=0;i<10;i++)
	{
		printf("v[%d]=%f \n",i+1,v[i]);
	}
	system("pause");
	float k=10;
	float aux;
	
	
	for (i=0;i<10;i++) 
    { 
for (j=0;j<9;j++) 
    {    
       if (v[j]>=v[j+1]) 
       { 
    aux=v[j]; 
    v[j]=v[j+1]; 
    v[j+1]=aux; 
       } 

    }  

   }  
	
}
