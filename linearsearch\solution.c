
◾Linear Search And Binary Search 
#include<stdio.h>
int search(int arr[],int n,int target)
{
for(int i=0;i<n;i++){
if(arr[i]==target){
return i;
}
}
return -1;
}
int main(){
int arr[];int n;int target;
printf("Enter the size of the array:\n");
scanf("%d",&n);
printf("Input Elements:\n");
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++){
printf("%d",arr[i]);
}
printf("Enter the search value:\n");
scanf("%d",&target);
int index=search(arr,n,target);
printf("%d\n",index);
return 0;
}
//Binary Search
#include<stdio.h>
int search(int arr[],int target,int low,int high)
{
while(low<=high){
int mid=low+(high-low)/2;
if(arr[mid]==target)
return mid;
if(arr[mid]<target)
low =mid+1;
else
high=mid-1;
}
return -1;
}
int main(){
int arr[];int n;int target;
printf("Enter the size of the array:\n");
scanf("%d",&n);
printf("Input Elements:\n");
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++){
printf("%d",arr[i]);
}
printf("Enter the search value:\n");
scanf("%d",&target);
int low=0;
int high=n;
int index=search(arr,target,low,high);
printf("%d\n",index);
return 0;
}
