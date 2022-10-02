#include<stdio.h>
int main(){
    int size , max , min ;
int arr[size];


printf("Enter size of the array: ");
    scanf("%d", &size);

    printf("Enter elements in the array: ");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    min = arr[0];

    for(int i=1; i<size; i++)
    {

        if(arr[i] > max)
        {
            max = arr[i];
        }


        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d", min);
if(max%min ==0){
    printf("pass");
}
return 0 ;
}
