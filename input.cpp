#include<iostream>
using namespace std; 
int  limit1=0, total = 0, random1=0, counter = 0, time_quantum_p; 
      int wait_time_p = 0, turnaround_time_p = 0,pos,z,p[10],prio[10], a_time[10], b_time[10], temp[10],b,local_var; 
float average_wait_time_P, average_turnaround_time_p;  

void Input(){

	cout<<endl<<"Enter Total Number of Processes"<<endl; 
     	cin>>limit1; 
      	random1 = limit1; 
	int  k=0; 
  while(k<limit1) 
      {p[k]=k+1;prio[k]=0;
cout<<"\nEnter total Details of Process\n"<<(k + 1)<<endl;
            cout<<"Arrival Time:\t"<<endl; 
	cin>>a_time[k]; 
	cout<<"\nBurst Time:\t"<<endl; 
	cin>>b_time[k];
	 temp[k] = b_time[k]; k++;
}
cout<<"\nEnter the Time Quantum:\n"; 
      cin>>time_quantum_p; 
}

int main() {

Input();        
      return 0; 
}
