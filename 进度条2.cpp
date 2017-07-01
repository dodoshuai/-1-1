/*#include<stdio.h>
#include<string.h>
#define N 20
void mBar(float fBar){
  
    int i,j,k,m;
    for ( i=0;i<N+6;i++ ) printf("\b");
    k=N*fBar; m=fBar*100; printf("[");
    for ( i=0;i<k;i++ )  	printf("=");
    for ( j=0;j<N-k;j++ ) printf(" ");
    printf("]%3d%%",m); 
}
void delay(int n) { int i,j,k; for ( i=0;i<n;i++ ) for ( j=0;j<0x07fff;j++ ) k++; }
int main()
{
    float x;
    int i;
    for ( i=0,x=0;i<100;i++,x+=0.01 ) { mBar(x); delay(10); }
    mBar(1);
}
*/
#include<stdio.h>
#include<iostream>
using namespace std;
#include<string.h>
#define N 20
class progress
{
	public:
		void mBar(float fBar)
		{
    int i,j,k,m;
    for ( i=0;i<N+;i++ ) cout<<"\b";
    k=N*fBar; m=fBar*100; cout<<"[";
    for ( i=0;i<k;i++ )  cout<<"=";
    for ( j=0;j<N-k;j++ ) cout<<" ";
    printf("]%3d%%",m);
	}
	void delay(int n) { int i,j,k; for ( i=0;i<n;i++ ) for ( j=0;j<0x07fff;j++ ) k++; }
};
void pro()
{
    float x;
    int i;
    progress a;
    for ( i=0,x=0;i<100;i++,x+=0.01 ) { a.mBar(x); a.delay(1000); }
    a.mBar(1);
}


