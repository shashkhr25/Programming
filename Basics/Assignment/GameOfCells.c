#include <stdio.h>
int main()
{
    int n,m;
    scanf("%d %d \n", &n,&m);
    int noOfPackages=0;
    int n1=n/2,m1=m/2;
    noOfPackages = n1*m1;
    
    //Findind remainig no of cells 
    int rem_n,rem_m;
    rem_n  = n-n1*2;
    rem_m = m-m1*2;
    if(rem_n==0 && rem_m==0) // if both are even
    {
        noOfPackages=noOfPackages;
    }
    else if(rem_n==1 && rem_m==0) // if n is odd and m is even
    {
        noOfPackages+= m/2;
    }
    else if(rem_n==0 && rem_m==1) // if m is odd and n is even
    {
        noOfPackages+= n/2;
    }
    else //if both are odd
    {
        noOfPackages+=n/2+m/2+1;
    }
 
 	printf("%d \n", noOfPackages);
    
    return 0;
}
