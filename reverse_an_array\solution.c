Try AI directly in your favorite apps … Use Gemini to generate drafts and refine content, plus get Gemini Pro with access to Google's next-gen AI for ₹1,950 ₹489 for 3 months
1
100%
◾REVERSING AN ARRAY
#include<stdio.h>
void reverse(int arr[],int n){
int l=0;
int r=n-1;
while(l<r)
{
int temp=arr[l];
arr[l]=arr[r];
arr[r]=temp;
l++;
r--;
}
int main(){
int arr[n];
int n;
printf("Enter the elements of the array:\n");
scanf("%d",&n);
printf("Input Elements:\n");
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
reverse(arr,n);

for(int i=0;i<n;i++)
{
printf("%d",arr[i]);
}
return 0;
}
