/*************

	Week 1
         Write a C program to implement First Come First Serve Scheduling Algorithm. (Consider all processes are arrived at time 0). 
		 Inputs: Number of processes, Burst Time of each process. 
		 Outputs: Turnaround time and waiting time of each process.  


******/



#include<stdio.h>
	main()
	{
	int Number_Process;
	int a[10],b[10];
	int t[10],w[10],g[10],i,m;
	float att=0,awt=0;
	            for(i=0;i<10;i++)
	            {
	                        a[i]=0; b[i]=0; w[i]=0; g[i]=0;
	            }
	printf("Enter the number of process");
	            scanf("%d",&Number_Process);
	printf("Enter the burst times \n");
	            for(i=0;i<Number_Process;i++)
	                scanf("%d",&b[i]);
	    printf("\n Enter the arrival times");
	            for(i=0;i<Number_Process;i++)
	                scanf("%d",&a[i]);
	    g[0]=0;
	             for(i=0;i<10;i++)
	                   g[i+1]=g[i]+b[i];
	             for(i=0;i<Number_Process;i++)
	            {     
							w[i]=g[i]-a[i];
	                        t[i]=g[i+1]-a[i];
	                        awt=awt+w[i];
	                        att=att+t[i]; 
            }
	     awt =awt/Number_Process;
	            att=att/Number_Process;
	            printf("\n\tprocess\twaiting time\tturn arround time\n");
	            for(i=0;i<Number_Process;i++)
	            {
	                        printf("\tp%d\t\t%d\t\t%d\n",i,w[i],t[i]);
	            }
	printf("the average waiting time is %f\n",awt);
	printf("the average turn around time is %f\n",att);
	}
