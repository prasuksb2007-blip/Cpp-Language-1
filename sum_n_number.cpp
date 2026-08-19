// Implementation of Sum of N numbers.
#include<iostream>

int main()
{
    long long int n,sum=0;
    std::cout<<"Enter the N to be added:";
    std::cin>>n;
    for (int i=0; i<=n; i++)
    {
        sum=sum+i;
    }
    std::cout<<"Sum of N numbers:"<<sum<<std::endl;
    return 0;
}
