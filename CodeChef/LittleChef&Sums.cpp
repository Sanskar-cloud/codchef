#include <stdio.h>
     
    int main()
    {
    	int t,n,a[100001],i,min,k;
    	
    	scanf("%d\n",&t);
    	
    	while(t--)
    	{
    		scanf("%d\n",&n);
    		
    		for(i=1;i<=n;i++)
    		{
    			scanf("%d",&a[i]);
    		}
    		
    		min=a[1];
    		k=1;
    		for(i=2;i<=n;i++)
    		{
    			if(a[i]<min)
                  {
                  	min=a[i];
                  	k=i;
    			  }
            }
    		printf("%d\n",k);
    	}
    }   
