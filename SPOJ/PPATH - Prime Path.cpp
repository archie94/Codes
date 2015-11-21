#include <stdio.h>
#include <iostream>
#include <vector>
#include <queue>
#include <stdlib.h>
#include <string.h>
using namespace std;

bool check[10009];
void seive()//seive to find all prime nos within 10000
{
    int i,j;
    for(i=2;i<=100;i++)
    {
        if(!check[i])
        {
            for(j=i*i;j<=10000;j+=i)
            {
                check[j]=true;
            }
        }
    }
}

void numTOarr(int a[],int num)//store digits of num into array a[] of size 4
{
    int d=3;
    while(num>0)
    {
        a[d--]=num%10;
        num/=10;
    }
}

int arrTOnum(int a[])//converts the number represented in array to an integer
{
    int temp=0,k=0;
    while(k<4)
    {
        temp=temp*10+a[k];
        k++;
    }
    return temp;
}

int main()
{
    int t;
    scanf("%d",&t);
    seive();//find all prime nos
    while(t--)
    {
        int a,b,parent[10009],dist[10009],digit[4];
        //dist[i]  will store the dist from a
        scanf("%d%d",&a,&b);
        queue<int> q;
        memset(parent,-1,sizeof(parent));
        memset(dist,-1,sizeof(dist));
        dist[a]=0;
        parent[a]=0;
        q.push(a);
        while(!q.empty())
        {
            int num=q.front();
            for(int k=3;k>=0;k--)
            {
                numTOarr(digit,num);//each time convert num to array representation
                for(int i=0;i<=9;i++)
                {
                    digit[k]=i;
                    int temp=arrTOnum(digit);
                    if((!check[temp])&&(dist[temp]==-1)&&(temp>1000))
                    {
                        //check if temp is prime && not already visited && a 4 digit prime
                        dist[temp]=dist[num]+1;
                        parent[temp]=num;
                        q.push(temp);
                    }
                }
            }
            q.pop();
        }
        if(dist[b]==-1)
        {
            printf("impossible\n");
        }
        else
        printf("%d\n",dist[b]);
    }
    return 0;
}

