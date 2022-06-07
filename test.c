#include <stdio.h>
#include <unistd.h>
int main()
{
    printf("pid: %d\n", getpid());

    unsigned long addr = (unsigned long)&printf;
    addr &= 0xfffffffffffff000;
    printf("vaddr: 0x%lx\n", addr);
    char c;
    scanf("%c", &c);
    return 0;
}
