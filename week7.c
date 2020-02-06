#include <stdio.h>
#include <stdlib.h>
//void addTen(int num[], int n) same pointer
void addTen(int *num, int n)
{
    // num == 00;
    //int numm[] = {4,5,6,7,8,9};

    for(int i = 0; i < n; i++)
    {
        printf("add Ten [%p] = %d\n",num + i,*(num + i)); //  base16 +4(int), ค่าใน array
        *(num + i) += 10;
    }
}
int addTwenty(int *n)
{
    *n += 20;
    //return 1;
}

int main()
{
    int num[] = {4,5,6,7,8,9};
    int n = 6;
    addTen(num,n); //address index 0, pointer ชี้ตัวไหนก็ไหน
    for(int i = 0; i < n; i++)
    {
        printf("[%p] = %d\n",num + i,*(num + i)); // 16 
        *(num + i) += 10;
    }
    //n = addTwenty(&n); // 1 
    addTwenty(&n); //26
    printf(" n = %d\n",n);
}