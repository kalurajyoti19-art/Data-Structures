Try AI directly in your favorite apps … Use Gemini to generate drafts and refine content, plus get Gemini Pro with access to Google's next-gen AI for ₹1,950 ₹489 for 3 months
1
100%
◾FINDING MAXIMUM, MINIMUM,SUM AND AVERAGE 
#include<stdio.h>
int main(){
int arr[limit]; int limit;
float avg=0.0;
int sum;
int max;
int min;
printf("Enter the number limit:\n");
scanf("%d",&limit);
printf("Input Elements:\n");
for(int i=0;i<limit;i++);
{
scanf("%d",&arr[i]);
}
sum=arr[0];
max=arr[0];
 min=arr[0];
for(int i=1;i<limit;i++);
if(arr[i]>max)
{
max=arr[i];
}
if(arr[i]<min)
{
min=arr[i];
}
sum=sum+arr[i];
}
printf("\nThe sum of the numbers is:%f",sum);
printf ("\nThe average of the numbers is:%f",sum/limit);
printf("\nThe maximum number is:%f",max);
printf("\nThe minimum number is:%f",min);
}
