#include <stdio.h>

int main() {
  int n, i;
  float avg_waiting_time = 0, avg_turnaround_time = 0;
  
  printf("Enter the number of processes: ");
  scanf("%d", &n);
  
  int burst_time[n], waiting_time[n], turnaround_time[n];
  
  // Input burst times for each process
  printf("Enter burst time for each process:\n");
  for(i = 0; i < n; i++) {
    printf("Process %d: ", i+1);
    scanf("%d", &burst_time[i]);
  }
  
  waiting_time[0] = 0; // First process has zero waiting time
  for(i = 1; i < n; i++) {
    waiting_time[i] = waiting_time[i-1] + burst_time[i-1];
  }
  
  for(i = 0; i < n; i++) {
    turnaround_time[i] = waiting_time[i] + burst_time[i];
    avg_waiting_time += waiting_time[i];
    avg_turnaround_time += turnaround_time[i];
  }
  
  avg_waiting_time /= n;
  avg_turnaround_time /= n;

printf("\nFCFS Scheduling Algorithm\n");
  printf("Process\tBurst Time\tWaiting Time\tTurnaround Time\n");
  for(i = 0; i < n; i++) {
    printf("%d\t%d\t\t%d\t\t%d\n", i+1, burst_time[i], waiting_time[i], turnaround_time[i]);
  }}
