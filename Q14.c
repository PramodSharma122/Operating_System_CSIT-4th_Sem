// Q14. Write a program to implement sequential file allocation. 


#include<stdio.h> 
void main() 
{ 
    int f[50],i,st,j,len,c,k; 
    for(i=0;i<50;i++) 
    f[i]=0; X: 
    printf("\n Enter the starting block & length of file "); 
    scanf("%d%d",&st,&len); for(j=st;j<(st+len);j++) 
    if(f[j]==0) 
    {
        f[j]=1; 
        printf("\n%d->%d",j,f[j]); 
    } 
    else 
    { 
        printf("Block already allocated");
        break; 
    } 
    if(j==(st+len)) 
        printf("\n\n The file is allocated to disk");
        printf("\n If you want to enter more files?(y-1/n-0) "); 
        scanf("%d",&c); 
        if(c==1) goto X; 
    else 
    exit(0); 
} 