#include<iostream>
using namespace std;

float avgtat(int tat[],int n)
{
	float avg=0;
	int i;
	for(i=0;i<n;i++)
	{
		avg = avg + tat[i];
	}
	avg = avg/n;
	return avg;
}

float avgwt(int wt[],int n)
{
	float avg=0;
	int i;
	for(i=0;i<n;i++)
	{
		avg = avg + wt[i];
	}
	avg = avg/n;
	return avg;
}

void Gantt_Chart(int wt[], int pid[])
{
	cout<<"| "<<pid[0]<<" | "<<pid[1]<<" | "<<pid[2]<<" | "<<pid[3]<<" |"<<endl;
	cout<<wt[0]<<"   "<<wt[1]<<"   "<<wt[2]<<"   "<<wt[3]<<endl;
}

int main()
{
	int n,i;
	int burst = 0;
	float avg1, avg2;
	
	cout<<"Enter the size of arrays"<<endl;
	cin>>n;
	int Pid[n],AT[n],BT[n],CT[n],TAT[n],WT[n];
	for(i=0;i<n;i++)
	{
		Pid[i] = i+1;
		cout<<"The Pid is : "<<Pid[i]<<endl;
		cout<<"The AT for "<<Pid[i]<<" : "<<endl;
		cin>>AT[i];		//entered the values of arrival time
		cout<<"and the BT : "<<endl;
		cin>>BT[i];		//entered the values of burst time
	}
//defined 3 arrays comprising of processes, arrival and burst time 

CT[0] = BT[0] + AT[0];
burst = CT[0];
	for(i=1;i<n;i++)
	{
		CT[i] = BT[i] + burst;
		burst = CT[i];
	}
//calculated the completion time

	for(i=0;i<n;i++){
		TAT[i] = CT[i] - AT[i];
		WT[i] = TAT[i] - BT[i];	
	}
//calculated turn around time and waiting time

avg1 = avgtat(TAT,n);
avg2 = avgwt(WT,n);
Gantt_Chart(WT,Pid);
cout<<"the avgTAT is : "<<avg1<<endl;
cout<<"the avgWT is : "<<avg2<<endl;
cout<<"Pid"<<"\t"<<"AT"<<"\t"<<"BT"<<"\t"<<"CT"<<"\t"<<"TAT"<<"\t"<<"WT"<<endl;
for(i=0;i<n;i++)
{
	cout<<Pid[i]<<"\t"<<AT[i]<<"\t"<<BT[i]<<"\t"<<CT[i]<<"\t"<<TAT[i]<<"\t"<<WT[i]<<endl;
}
return 0;
}
