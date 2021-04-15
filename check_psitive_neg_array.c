#include <stdio.h>
#include <conio.h>

int main()
{
	int n,arr[20],i,positive=0,negative=0,zero=0;
	printf("enter size: ");
  scanf("%d", & n);
  printf("enter the elements of  array: \n");
  for (i = 0; i < n; i++) {
    scanf("%d", & arr[i]);
    printf("\n");
  }
  for(i=0;i<n;i++){
  	if(arr[i]==0){
  		zero++;
  	}
  	if(arr[i]<0){
  		negative++;
  	}
  	if(arr[i]>0){
  		positive++;
  	}
  }
  printf("positive=%d\n zero=%d\n negative=%d\n",positive,zero,negative);
	return 0;
}