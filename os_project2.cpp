#include<iostream>
using namespace std;
class input_local{
protected:
 int 	no_of_processes, total, random1, counter, time_quantum_p,counter1; 
      int wait_time_p, turnaround_time_p,qq,z,p[20],prio[20], a_time[20], b_time[20], temp[20],b,local_var; 
float average_wait_time_P, average_turnaround_time_p;  


input_local(){
int 	no_of_processes=0, total=0, random1=0, counter=0, time_quantum_p=0,counter1=0;
float average_wait_time_P=0, average_turnaround_time_p=0;}};


class var: protected input_local{
public :
void Input(){
	cout<<endl<<"Enter Total Number of Processes"<<endl; 

     	cin>>no_of_processes; 

      	random1 =no_of_processes; 

	int  k=0; 

  while(k<no_of_processes) {
	p[k]=k+1;
	
	prio[k]=0;

	cout<<"\nEnter total Details of Process\n"<<"["<<(k+1)<<"]"<<endl;
            cout<<"Arrival Time:\t"<<endl; 
	cin>>a_time[k]; 
	cout<<"\nBurst Time:\t"<<endl; 
	cin>>b_time[k];
	 temp[k] = b_time[k]; k++;}

	cout<<"\nEnter the Time Quantum:\n"; 
      	cin>>time_quantum_p;

}
};

int main(){
var c;
c.Input();
return 0;


}
