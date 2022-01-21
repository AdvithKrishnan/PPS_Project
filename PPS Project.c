#include <stdio.h>
#include <conio.h>

void main()
{
	int yyyy,dd,mm,nleap,count,scount,i=1;
	long int dp;
		printf("\n\nNote - If you have entered an invalid month(mm) input,you will be allowed to input a new one\n\n\n");
	do
	{
		printf("\nEnter the year (yyyy) : ");
		scanf("%d",&yyyy);
	}while(yyyy<1);
	
	do
	{
		printf("\nEnter the month (mm) : ");
		scanf("%d",&mm);
	}
	while(mm<1||mm>12);
	
	if(mm==4||mm==6||mm==9||mm==11)
	  {
	  	dd=30;
	  }
	  
	  if(yyyy%4==0&&yyyy%100!=0||yyyy%400==0)
	  {
	  	if(mm==2)
	  	 {
	  	   dd=29;	
	  	 }
	  }
	  else
	  {
	  	if(mm==2)
	  	 {
	  	   dd=28;	
	  	 }
	  }
	  
	  if(mm==1||mm==3||mm==5||mm==7||mm==8||mm==10||mm==12)
	    dd=31;
	  
	  nleap=(yyyy-1)/4-(yyyy-1)/100+(yyyy-1)/400;
	  dp=(yyyy-1)*365l+nleap;
	  
	   switch(mm)
	   {
	   	case 12:dp+=30;
		case 11:dp+=31;
		case 10:dp+=30;
		case  9:dp+=31;
		case  8:dp+=31;
		case  7:dp+=30;
		case  6:dp+=31;
		case  5:dp+=30;
		case  4:dp+=31;
		case  3:dp+=28;
		case  2:dp+=31;
		case  1:dp+=1;   
	   }
	   
	   printf("\nmon tue wed thu fri sat sun");
	    switch(dp%7)
	    {
	    	case 1: count=0;
	    	        break;
	    	case 2: count=4;
	    	        break;
	    	case 3: count=8;
	    	        break;
	    	case 4: count=12;
	    	        break;
	    	case 5: count=16;
	    	        break;
	    	case 6: count=20;
	    	        break;
	    	default : count=24;
	    }
	    printf("\n");
	    scount=count;
	   while(scount>0)
	   {
	   	printf(" ");
	   	--scount;
	   }
	   while(dd>=i)
	   {
	    if(count%28==0)
	      printf("\n");
	   	printf("%3d ",i);
	   	i++;
	   	count+=4;
	   } 
	   
	  getch(); 
}
