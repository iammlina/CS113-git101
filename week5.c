// address 0-200000 เป็นของmemory
// การใช้พื้นที่ของฟังก์ชันที่ไม่ใช่ main เมื่อใช้เสร็จจะหาย
#include <stdio.h>
// ctype.h ใช้เช็คชนิดข้อมูล
// include ต้องมี .h ถึงจะเป็นของ c
int x = 100;
int addTen(int x)
{
    x = x + 10;
    printf("x addTen = %d\n",x);
    return x;
}
int addTwenty();
int main()
{
    int x = 30;
    int y = addTen(x);
    printf("addTen main = %d\n",y);
    int z = addTwenty();
    printf("addTwenty main = %d\n",z);
}
int addTwenty()
{
    x += 20;
    printf("x addTwenty = %d\n",x);
    return x;
}