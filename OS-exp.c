#include<stdio.h>
void main(){
    int i, n=5, bt[5], wt[5], tat[5];
    float avg_wt, avg_tat;
    for(i=0;i<n;i++){
        printf("Burst time:");
        scanf("%d", &bt[i]);
    }
    wt[0]=0;
    for(i=0;i<n;i++){
        wt[i]=wt[i-1]+bt[i-1];
    }
    for(i=0;i<n;i++){
        tat[i]=wt[i]+bt[i];
    }
    for(i=0;i<n;i++){
        printf("Process: %d Burst time: %d Waiting time: %d Turnaround time: %d\n", i,bt[i],wt[i],tat[i]);
    }
    avg_wt=(wt[0]+wt[1]+wt[2]+wt[3]+wt[4])/n;
    avg_tat=(tat[0]+tat[1]+tat[2]+tat[3]+tat[4])/n;
    printf("Average waiting time: %f\n", avg_wt);
    printf("Average turnaround time: %f", avg_tat);
}