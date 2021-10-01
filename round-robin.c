#include <stdio.h>
 #include <conio.h>
 #include <math.h>
 int main()
 {
 int i, limit, total = 0, x, counter = 0, time_quantum;
 int wt = 0, tat = 0, a1[10], bt[10], temp[10];
 float average_wt, average_tat;
 printf("Enter total number of processes: \n");
 scanf("%d", &limit);
 x = limit;
 for(i = 0; i < limit; i++)
 {
 printf("Enter of the processes  details %d: \n", i + 1);
 printf("arrival Time: \t");
 scanf("%d", &a1[i]);
 printf("burst Time:t");
 scanf("%d", &bt[i]);
 temp[i] = bt[i];
 }
 printf("Enter time quantum or time slice: \t");
 scanf("%d", &time_quantum);
 printf("\n Process ID\t\t  burst time\t turn around time\t waiting time\n");
 for(total = 0, i = 0; x != 0;)
 {
 if(temp[i] <= time_quantum && temp[i] > 0)
 {
 total = total + temp[i];
 temp[i] = 0;
 counter = 1;
 }
 else if(temp[i] > 0)
 {
 temp[i] = temp[i] - time_quantum;
 total = total + time_quantum;
 }
 if(temp[i] == 0 && counter == 1)
 {
 x--;
 printf("\n Process: %d\t\t %d\t %d\t %d\n", i + 1, bt[i], total - a1[i], total - a1[i] - bt[i]);
 wt = wt + total - a1[i] - bt[i];
 tat = tat + total - a1[i];
 counter = 0;
 }
 if(i == limit - 1)
 {
 i = 0;
 }
 else if(a1[i + 1] <= total)
 {
 i++;
 }
 else
 {
 i = 0;
 }
 }
 average_wt = wt * 1.0 / limit;
 average_tat = tat * 1.0 / limit;
 printf("\n\n Average Waiting Time:\t %f", average_wt);
 printf("\n Average Turnaround Time:\t %f \n", average_tat);
 return 0;
 }
