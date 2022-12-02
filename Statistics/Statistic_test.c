#include "Statistics.h"
int main()
{
    int arr[8]={10, 12, 23, 23, 16, 23, 21, 16};
    printf("\naritmatic mean = %0.2f",arithmaticMean(arr,8));
    printf("\nmedian = %0.2f",median(arr,8));
    printf("\nmod = %d",Mod(arr,8));
    printf("\nvariance = %f",variance(arr,8));
    printf("\nstandard derivation = %f",standardDerivation(arr,8));
    printf("\nskewness = %f",skewness(arr,8));
    printf("kurtosis = %f",kurtosis(arr,8));
    return 0;
}