Try AI directly in your favorite apps … Use Gemini to generate drafts and refine content, plus get Gemini Pro with access to Google's next-gen AI for ₹1,950 ₹489 for 3 months
1
100%
◾ Insertion at Beginning,End and given position 
//INSERT AT BEGINNING
#include<stdio.h>
int main(){
int arr[];int position;int value;int n;
printf("Enter the number of elements in the array\n");
scanf("%d",&n);
for(int i=0;i<n;i++)
scanf("%d",&arr[n]);
printf("Enter the location where you want to insert a new element\n");
scanf("%d",& position);
printf("Enter the value\n");
scanf("%d",&value);
printf("Array before Insertion:\n");
for(int i=0;i<n;i++)
{
printf("%d",arr[i]);
}
for(int i=n-1;i>=0;i--){
arr[i+1]=arr[i];
}
arr[0]=value;
printf("Array  After Insertion:\n");
for(int i=0;i<n;i++)
{
printf("%d",arr[i]);
}
return 0;
}
//INSERT AT END 
#include<stdio.h>
void main(){
int arr[];int position;int value;int n;
printf("Enter the number of elements in the array\n");
scanf("%d",&n);
for(int i=0;i<n;i++)
scanf("%d",&arr[n]);
printf("Enter the location where you want to insert a new element\n");
scanf("%d",& position);
printf("Enter the value\n");
scanf("%d",&value);
printf("Array before Insertion:\n");
for(int i=0;i<n;i++)
{
printf("%d",arr[i]);
}
arr[*n]=val;
(*n)++;
printf("Array  After Insertion:\n");
for(int i=0;i<n;i++)
{
printf("%d",arr[i]);
}
}
//INSERT AT AT A POSITION 
void main(){
int arr[];int position;int value;int n;
printf("Enter the number of elements in the array\n");
scanf("%d",&n);
for(int i=0;i<n;i++)
scanf("%d",&arr[n]);
printf("Enter the location where you want to insert a new element\n");
scanf("%d",& position);
printf("Enter the value\n");
scanf("%d",&value);
printf("Array before Insertion:\n");
for(int i=0;i<n;i++)
{
printf("%d",arr[i]);
}
for(int i=*n;i>ps;i--){
arr[i]=arr[i-1];
arr[pos]=val;
(*n)++;
}
printf("Array  After Insertion:\n");
for(int i=0;i<n;i++)
{
printf("%d",arr[i]);
}
}
