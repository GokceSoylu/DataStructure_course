#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//aritmatic mean
float arithmaticMean(int arr[], int numberOfElements)
{
    int sum=0,i;
    for(i=0;i<numberOfElements;i++)
        sum+=arr[i];
    return (float)sum/numberOfElements;
}
//median
float median(int arr[], int indis) //! not sure
{
    int i,j,tmp;
    for(i=0;i<indis;i++)//sorting
        for(j=i;j<indis;j++)
            if(arr[i]>arr[j])
            {
                tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
            }
    if(indis%2!=0)
        return arr[indis/2+1];
    return (arr[indis/2]+arr[indis/2+1])/2;
}
//mod 
void Switch(int arr[], int j, int indis)
{
    int i;
    for(i=0;i<indis;i++);
        arr[i]=arr[i+1];
}
int Mod(int array[], int indis)//! not sure
{
    int i,j,max, *tmp=(int*)malloc(sizeof(int)*indis);
    int *arr=(int*)malloc(sizeof(int)*indis);
    for(i=0;i<indis;i++) arr[i]=array[i];
    tmp[0]=0;
    for(i=0;i<indis;i++)    
        for(j=i+1;j<indis;j++)
            if(arr[i]==arr[j])
            {
                Switch(arr, j, indis);
                tmp[i]++;
                j++;
                indis--;
            }
    max=tmp[0];
    for(i=0;i<indis;i++)
        if(max<tmp[i]) max=i;
    return arr[i];
}
//variance
float variance(int arr[], int indis)
{
    int i,sum=0;
    for(i=0;i<indis;i++)
        sum+=pow(arr[i]-arithmaticMean(arr, indis),2);
    return (float)sum/indis;
}   
//standard derivation
float standardDerivation(int arr[], int indis)
{
    return sqrt(variance(arr,indis));
}
//skewness
float skewness(int arr[], int indis)
{
    float skewness_value=(float)3*(arithmaticMean(arr,indis)-median(arr,indis))/standardDerivation(arr,indis);
    if(skewness_value>0) printf("skewed to the right(pozitive skew)");//so right tail is longer
    else if(skewness_value<0) printf("\nskewed to the left(negative skew)");//left tail is longer
    else printf("\nstandard");
    return skewness_value;
}
//kurtosis
float kurtosis(int arr[], int indis)
{
    int i, sum=0;
    float med=median(arr,indis);
    for(i=0;i<indis;i++)
        sum=pow((med-arr[i]),4);
    float kurtosis = sum/pow(standardDerivation(arr,indis),4);
    if(kurtosis>3) printf("\nthin tailed");
    else if(kurtosis<3) printf("\nfat tailed");
    else printf("\nmedium tailed");
    return kurtosis;
}