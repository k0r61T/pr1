#include <locale.h>
#include <stdio.h>

void name()
{
    setlocale(LC_CTYPE, "RUS");
    puts("*******************************************");
    puts("*                                         *");
    puts("*                                         *");
    puts("* ����: ���������� ����������� ���������� *");
    puts("* �������� �������� �.�.                  *");
    puts("*                                         *");
    puts("*                                         *");
    puts("*******************************************");
    return 0;
}

void date()
{
    puts("  _   _     _   _     _   __ ");
    puts(" / |  _|   | | |_|   | |   / ");
    puts("   |  _|   |_| |_|   |_|  |  ");
    return 0;
}

void main()
{
    name();
    date();
}
