/*******************
	
		Week 2
		Write a C program to implement Shortest Job first (Non Preemptive)Scheduling Algorithm. (Consider all processes are arrived at time 0).?	
	Inputs: Number of processes, Burst Time of each process. 
	
	Outputs: Turnaround time and waiting time of each process. 
*****************/

	#include<stdio.h>
	int main()
	{
	
	int n,j,tmp,tmp1,tmp2,pr[10],bt[10],t[10],w[10],p[10],i;
	
	float x=0,y=0;
	
	for(i=0;i<10;i++)
	            {
	                        bt[i]=0;w[i]=0;
	            }
	
	printf("enter the number of process");
	scanf("%d",&n);
	printf("enter the burst times");
	
	for(i=0;i<n;i++)
	            {
	                        scanf("%d",&bt[i]);
	                        p[i]=i;
	            }
for(i=0;i<n;i++)
	            {
	                        for(j=i;j<n;j++)
	                        {
	                                    if(bt[i]>bt[j])
	                                    {
	                                                tmp=bt[i];
	                                                tmp1=p[i];
	                                                bt[i]=bt[j];
	                                                p[i]=p[j];
	                                                bt[j]=tmp;
	                                                p[j]=tmp1;
	                                                }
	}
	}
	w[0]=0;
for(i=0;i<n;i++)
	w[i+1]=w[i]+bt[i];
	for(i=0;i<n;i++)
	        {
	t[i]=w[i]+bt[i];
	            y=y+w[i];
	            x=x+t[i];
	        }
	y=y/n;
	x=x/n;
	printf("\n\t process \t waiting time \t turn around time \n");
	for(i=0;i<n;i++)
	printf("\t p[%d] \t %d \t\t %d \n",p[i],w[i],t[i]);
	printf(" average waiting time is %f\n",y);
	printf(" average turn around time is %f\n",x);
	return 1;
	}

