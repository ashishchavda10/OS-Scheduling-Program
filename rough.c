#include <stdio.h> 
// creating a structure of a process 


// variable to find the total time 

int main() 
{ 

	int i,temp,j,BT[10],processno[10],pay[10],n; 

	// initializing the process number 
	 printf("Enter Total Number of Student:");
    scanf("%d",&n);
 
    printf("\nEnter Total_gifts\n");
    for(i=0;i<n;i++)
    {
        printf("\nStudent[%d]\n",i+1);
        printf("Total Gifts:");
        scanf("%d",&BT[i]);
        processno[i]=i+1;           //contains process number
    }

printf("\n");
	printf( "Student_No\tTotal_gifts\n"); 

	for (i = 0; i < n; i++) { 
		printf("Stduent = %d \t" ,processno[i]);
		printf("%d \t\t",BT[i]);  
	    printf("\n");
	} 
	printf("After Sorting\n\n");
	 for(i=0;i<n;i++)
    {
    	for(j=i+1;j<n;++j){
		
    	if(BT[i]<BT[j]){
		
        temp=BT[i];
    	BT[i]=BT[j];
        BT[j]=temp;
 
        temp=processno[i];
        processno[i]=processno[j];
        processno[j]=temp;
    }
    }
    }
    	printf( "Student_No\tTotal_gifts\tTotal_Pay\n"); 

	for (i = 0; i < n; i++) { 
		printf("Stduent = %d \t" ,processno[i]);
		printf("%d \t\t",BT[i]);
		pay[i]= 2 * BT[i];  
		printf("%d \t\t",pay[i]); 
	    printf("\n");
	}
}

