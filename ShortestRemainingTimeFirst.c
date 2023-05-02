#include <stdio.h>

int main() {
  int n, i, j, time = 0, smallest;
  float avg_waiting_time = 0, avg_turnaround_time = 0;
  int remaining_time[n], burst_time[n], waiting_time[n], turnaround_time[n];
  
  printf("Enter the number of processes: ");
  scanf("%d", &n);
  
  // Input burst times for each process
  printf("Enter burst time for each process:\n");
  for(i = 0; i < n; i++) {
    printf("Process %d: ", i+1);
    scanf("%d", &burst_time[i]);
    remaining_time[i] = burst_time[i];
  }
  
  remaining_time[0] = burst_time[0];
  for(time = 0; ; time++) {
    smallest = 0;
    for(j = 1; j < n; j++) {
      if(remaining_time[j] < remaining_time[smallest] && remaining_time[j] > 0) {
        smallest = j;
      }
    }
    
    remaining_time[smallest]--;
    
    if(remaining_time[smallest] == 0) {
      waiting_time[smallest] = time - burst_time[smallest];
      turnaround_time[smallest] = waiting_time[smallest] + burst_time[smallest];
      avg_waiting_time += waiting_time[smallest];
      avg_turnaround_time += turnaround_time[smallest];
    }
    
    if(time == n-1) {
      break;
    }
  }
  
  avg_waiting_time /= n;
  avg_turnaround_time /= n;
  
  // Display results
  printf("\nSRTF Scheduling Algorithm\n");
  printf("Process\tBurst Time\tWaiting Time\tTurnaround Time\n");
  for(i = 0; i < n; i++) {
    printf("%d\t%d\t\t%d\t\t%d\n", i+1, burst_time[i], waiting_time[i], turnaround_time[i]);
  }
  
  printf("Average waiting time: %.2f\n", avg_waiting_time);
  printf("Average turnaround time: %.2f\n", avg_turnaround_time);
}
