Try AI directly in your favorite apps … Use Gemini to generate drafts and refine content, plus get Gemini Pro with access to Google's next-gen AI for ₹1,950 ₹489 for 3 months
1
100%
◾DELETION FROM BEGINNING,END AMD GIVEN POSITION 
#include<stdio.h>
int main(){
int arr[n];int n;
printf("Enter the size of the array:\n");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("Array Before Deletion:\n");
for(int i=0;i<n;i++)
{
printf("%d",arr[i]);
}
for(int i=1;i<n;i++)
{
arr[i-1]=arr[i];
}
n--;
printf("Array Deletion:\n");
for(int i=0;i<n;i++)
{
printf("%d",arr[i]);
}
return 0;
}
//DELETE AT END
#include<stdio.h>
int main(){
int arr[n];int n;
printf("Enter the size of the array:\n");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("Array Before Deletion:\n");
for(int i=0;i<n;i++)
{
printf("%d",arr[i]);
}
if(n>0)
(*n)--;
for(int i=0;i<n;i++)
{
printf("%d",arr[i]);
}
return 0;
 }
//DELETE AT A POSITION 
#include<stdio.h>
int main(){
int arr[n];int n;int position;
printf("Enter the size of the array:\n");
scanf("%d",&n);
printf("Enter the location of the array:\n");
scanf("%d",&position);
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("Array Before Deletion:\n");
for(int i=0;i<n;i++)
{
printf("%d",arr[i]);
}
for(int i=position;i<n;i++)
{
arr[i-1]=arr[i];
}
if(position<=n)
n--;
printf(" Resultant Array:\n");
for(int i=0;i<n;i++)
{
printf("%d",arr[i]);
}
return 0;
}
