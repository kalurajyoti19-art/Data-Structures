Try AI directly in your favorite apps … Use Gemini to generate drafts and refine content, plus get Gemini Pro with access to Google's next-gen AI for ₹1,950 ₹489 for 3 months
1
100%
◾1-D Array:Input,Display and Traversal 
#include<stdio.h>
int main(){
int n;
printf("Enter the number of elements: ");
scanf("%d",&n);
int arr[n];
printf("\n----Input Operation----\n");
for(int i=0;i<n;i++){
printf("Enter element at index %d:
",i);
scanf("%d",&arr[i]);
}
printf("\n----Traversal and Display Operations----\n");
printf("The array elements are: ");
for(int i=0;i<n;i++){
printf("%d",arr[i]);
}
printf("\n");
return 0;
}
