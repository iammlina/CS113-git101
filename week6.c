#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x = 100, a = 0144, b = 0x64;// 10 8 16
    printf("x = %d\n",a);
    printf("reference x = %lu\n",&x); //x keep address, use & tell address
    printf("reference x = %p\n",&x); //base 16 %x too , address 

    int num[] = {4, 5, 6, 7, 8,}; //array 1
    printf("reference number = %p\n",num); //array 1 reference address
    printf("reference &number = %p\n",&num[0]); //array 2 reference address use &
    printf("index 1 = %d\n",num[1]); 
    printf("reference &number[1] = %p\n",&num[1]); //+4 array int
    printf("index 2 = %d\n",num[2]);
    printf("reference &number[1] = %p\n",num + 1); // จะเป็น +4
    printf("reference &number[2] = %p\n", num + 2); // จะเป็น +8 ||+ ตาม type ถ้าเป็น pointer int +4, b +8, char +1
    printf("reference &number[3] = %p\n", num + 3);

    int *ptr = &x; //keep address
    int *arrPtr;
    arrPtr = num; //assing ค่า ไม่ต้องชี้ (*), addres all , if not array use & now!! OR array!!!!!!!!, เปลี่ยนที่ชี้ ไม่สามารถเปลี่ยน address
    printf("ptr = %p , value = %d \n",ptr,*ptr); //address ตำแหน่ง, reference ค่าที่ถูกเก็บใน address นั้น
    //num[2] = 500; 
    //*(arrPtr+2) = 500; //use pointer index 2 = 500, same top
    printf("arrPtr + 2 = %p , value = %d \n",arrPtr + 2, *(arrPtr+2)); // address , บอกค่า reference // + 3000 => 3000*4 // หา index 0 มากกว่า /0 // ถ้าเกิน int ติด - 

    for (int *ptr = num; ptr <= &num[4]; ptr++)
    {
        printf("[%p] = %d\n", ptr , *ptr);
    }
    char input[100]; //array 2
    int count = 0;
    char c;
    while((c = getchar()) != '\n')
    {
        input[count] = c;
        ++count;
    }
    printf("char array = %s\n",input);
    for(char *cPtr = input; *cPtr != '\0' ; cPtr++) // ค่านั้นเมื่อเจอ \0 ให้หยุด
    {
        printf("%c\n", *cPtr);
    }

    int aa;
    char cc;
    char s[100];
    scanf("%d-%c-%s", &aa, &cc, s); // array ไม่มี & ถ้าจะใส่ก็ &s[0]
    printf("%d %c %s", aa, cc, s);
}