#include <stdio.h>
int main()
{
    char c;
    int *n;
    char *str = NULL;
    int real = 0;
    int you = 0;
    int score = 0;

    c = 'q';

    printf(
    "\x1B[31m              Testing tricky cases\n\nIt will always be like so "
    ": [Your result] \\n [printf's result]]\npress enter to start :\n\e[0m");
    getchar();
    you = my_printf("%s\n", str);
    real = printf("%s\n", str);
    score += (you == real ? 1 : 0);
    printf("\n");
    you = my_printf("%s", 0);
    real = printf("%s", 0);
    score += (you == real ? 1 : 0);
    printf("\n");
    you = my_printf("%%\n");
    real = printf("%%\n");
    score += (you == real ? 1 : 0);
    printf("\n");
    you = my_printf("|% |\n");
    real = printf("|% |\n");
    score += (you == real ? 1 : 0);
    printf("\n");
    you = my_printf("%#-+qtd \n");
    real = printf("%#-+qtd \n");
    score += (you == real ? 1 : 0);
    printf("\n");
    you = my_printf("int max / min :  %d, %d\n", -2147483648, 2147483647);
    real = printf("int max / min :  %d, %d\n", -2147483648, 2147483647);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("unsigned int max :  %u, %u\n", 0, 4294967295);
    real = printf("unsigned int max :  %u, %u\n", 0, 4294967295);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("unsigned int max octal :  %o, %o\n", 0, 4294967295);
    real = printf("unsigned int max octal :  %o, %o\n", 0, 4294967295);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("unsigned int max hexa :  %x, %x\n", 0, 4294967295);
    real = printf("unsigned int max hexa :  %x, %x\n", 0, 4294967295);
    printf("\n");
    score += (you == real ? 1 : 0);
    printf("\x1B[31m%d/9 return value passed \n\e[0m", score);
    getchar();
    printf("\x1B[31m | %%i and %%d |\n\e[0m", score);
    getchar();
    score = 0;
    you = printf("1chiffre 1 %d chiffre 2 %d\n", 42, -42);
    real = printf("1chiffre 1 %d chiffre 2 %d\n", 42, -42);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("2chiffre 1 %   #d chiffre 2 % d\n", 0, -42);
    real = printf("2chiffre 1 %   #d chiffre 2 % d\n", 0, -42);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("3chiffre 1 %12d chiffre 2 %12d\n", -999999999999999, -42);
    real = printf("3chiffre 1 %12d chiffre 2 %12d\n", -999999999999999, -42);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("4chiffre 1 %-12d chiffre 2 %-12d\n", 42, -42);
    real = printf("4chiffre 1 %-12d chiffre 2 %-12d\n", 42, -42);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("5chiffre 1 %0d chiffre 2 %0d\n", 42, -42);
    real = printf("5chiffre 1 %0d chiffre 2 %0d\n", 42, -42);
    printf("\n");
    score += (you == real ? 1 : 0);
    real =
    my_printf("6chiffre 1 %012d chiffre 2 %012d\n", 999999999999999, -42);
    you = printf("6chiffre 1 %012d chiffre 2 %012d\n", 999999999999999, -42);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = printf("7chiffre 1 %-012d chiffre 2 %012d\n", 42, -42);
    real = printf("7chiffre 1 %-012d chiffre 2 %012d\n", 42, -42);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("9chiffre 1 %+d chiffre 2 %+d\n", 42, 6, -42, 6);
    real = printf("9chiffre 1 %+d chiffre 2 %+d\n", 42, 6, -42, 6);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("10chiffre 1 %+12d chiffre 2 %+12d\n", 42, 6, -42, 6);
    real = printf("10chiffre 1 %+12d chiffre 2 %+12d\n", 42, 6, -42, 6);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("12chiffre 1 %-+5d chiffre 2 %-+05d\n", 42, -42);
    real = printf("12chiffre 1 %-+5d chiffre 2 %-+05d\n", 42, -42);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("13chiffre 1 %-+05d chiffre 2 %-+05d\n", 155461651, -42);
    real = printf("13chiffre 1 %-+05d chiffre 2 %-+05d\n", 155461651, -42);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("14chiffre 1 %+-5d chiffre 2 %+-5d\n", 42, -42);
    real = printf("14chiffre 1 %+-5d chiffre 2 %+-5d\n", 42, -42);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("15chiffre 1 %.d chiffre 2 %050d\n", 42, -42);
    real = printf("15chiffre 1 %.d chiffre 2 %050d\n", 42, -42);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("16chiffre 1 %.6d chiffre 2 %.6d\n", 42, -42);
    real = printf("16chiffre 1 %.6d chiffre 2 %.6d\n", 42, -42);
    printf("\n");
    score += (you == real ? 1 : 0);

    printf("\x1B[31m%d/14 return value passed \n\e[0m", score);
    getchar();
    printf("\x1B[31m | %%c |\n\e[0m", score);
    getchar();
    score = 0;
    /* Memes tests avec les %c */

    you = my_printf("1caractere 1 %c caractere 2 %c\n", 'a', 'c');
    real = printf("1caractere 1 %c caractere 2 %c\n", 'a', 'c');
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("2caractere 1 %   c caractere 2 % c\n", 'a', 'c');
    real = printf("2caractere 1 %   c caractere 2 % c\n", 'a', 'c');
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("4caractere 1 %12c caractere 2 %12c\n", 'a', 'c');
    real = printf("4caractere 1 %12c caractere 2 %12c\n", 'a', 'c');
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("4caractere 1 %-12c caractere 2 %-12c\n", 'a', 'c');
    real = printf("4caractere 1 %-12c caractere 2 %-12c\n", 'a', 'c');
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("5caractere 1 %0c caractere 2 %0c\n", 'a', 'c');
    real = printf("5caractere 1 %0c caractere 2 %0c\n", 'a', 'c');
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("6caractere 1 %012c caractere 2 %012c\n", 'a', 'c');
    real = printf("6caractere 1 %012c caractere 2 %012c\n", 'a', 'c');
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("7caractere 1 %-012c caractere 2 %012c\n", 'a', 'c');
    real = printf("7caractere 1 %-012c caractere 2 %012c\n", 'a', 'c');
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("9caractere 1 %+c caractere 2 %+c\n", 'a', 6, 'c', 6);
    real = printf("9caractere 1 %+c caractere 2 %+c\n", 'a', 6, 'c', 6);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("10caractere 1 %+12c caractere 2 %+12c\n", 'a', 6, 'c', 6);
    real = printf("10caractere 1 %+12c caractere 2 %+12c\n", 'a', 6, 'c', 6);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("12caractere 1 %-+5c caractere 2 %-+5c\n", 'a', 'c');
    real = printf("12caractere 1 %-+5c caractere 2 %-+5c\n", 'a', 'c');
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("13caractere 1 %-+05c caractere 2 %-+05c\n", 'a', 'c');
    real = printf("13caractere 1 %-+05c caractere 2 %-+05c\n", 'a', 'c');
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("14caractere 1 %+-5c caractere 2 %+-5c\n", 'a', 'c');
    real = printf("14caractere 1 %+-5c caractere 2 %+-5c\n", 'a', 'c');
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("15caractere 1 %.c caractere 2 %.c\n", 'a', 'c');
    real = printf("15caractere 1 %.c caractere 2 %.c\n", 'a', 'c');
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("16caractere 1 %.6c caractere 2 %.6c\n", 'a', 'c');
    real = printf("16caractere 1 %.6c caractere 2 %.6c\n", 'a', 'c');
    printf("\n");
    score += (you == real ? 1 : 0);
    printf("\x1B[31m%d/14 return value passed \n\e[0m", score);
    getchar();
    printf("\x1B[31m | %%o |\n\e[0m", score);
    getchar();
    score = 0;
    /* Memes tests avec les %o */

    you = my_printf("1octal 1 %o octal 2 %o\n", 42, -42);
    real = printf("1octal 1 %o octal 2 %o\n", 42, -42);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("2octal 1 %   o octal 2 % o\n", 42, -55115516);
    real = printf("2octal 1 %   o octal 2 % o\n", 42, -55115516);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("4octal 1 %12o octal 2 %12o\n", 42, -42);
    real = printf("4octal 1 %12o octal 2 %12o\n", 42, -42);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("4octal 1 %-12o octal 2 %-12o\n", 0, -42);
    real = printf("4octal 1 %-12o octal 2 %-12o\n", 0, -42);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("5octal 1 %0#o octal 2 %0o\n", 42, -42);
    real = printf("5octal 1 %0#o octal 2 %0o\n", 42, -42);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("6octal 1 %0#12o octal 2 %012o\n", 0, -42);
    real = printf("6octal 1 %0#12o octal 2 %012o\n", 0, -42);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("7octal 1 %-012o octal 2 %012o\n", -5048, -42);
    real = printf("7octal 1 %-012o octal 2 %012o\n", -5048, -42);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("9octal 1 %+o octal 2 %+o\n", 42, 6, -42, 6);
    real = printf("9octal 1 %+o octal 2 %+o\n", 42, 6, -42, 6);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("10octal 1 %+12o octal 2 %+12o\n", 42, 6, -42, 6);
    real = printf("10octal 1 %+12o octal 2 %+12o\n", 42, 6, -42, 6);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("12octal 1 %-+5o octal 2 %-+5o\n", 42, -42);
    real = printf("12octal 1 %-+5o octal 2 %-+5o\n", 42, -42);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("13octal 1 %-+05o octal 2 %-+05o\n", 454564, -42);
    real = printf("13octal 1 %-+05o octal 2 %-+05o\n", 454564, -42);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("14octal 1 %+-#5o octal 2 %+-5o\n", 42, -42);
    real = printf("14octal 1 %+-#5o octal 2 %+-5o\n", 42, -42);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("15octal 1 %#o octal 2 %.o\n", 0, -42);
    real = printf("15octal 1 %#o octal 2 %.o\n", 0, -42);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("16octal 1 %.6o octal 2 %.6o\n", 42, -42);
    real = printf("16octal 1 %.6o octal 2 %.6o\n", 42, -42);
    printf("\n");
    score += (you == real ? 1 : 0);
    printf("\x1B[31m%d/14 return value passed \n\e[0m", score);
    getchar();
    printf("\x1B[31m | %%xX |\n\e[0m", score);
    getchar();
    score = 0;

    you = my_printf("1heXa 1 %X heXa 2 %X\n", 42, -42);
    real = printf("1heXa 1 %X heXa 2 %X\n", 42, -42);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("2heXa 1 %   X heXa 2 % X\n", 159753, -159753);
    real = printf("2heXa 1 %   X heXa 2 % X\n", 159753, -159753);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("4heXa 1 %12X heXa 2 %12X\n", 0, 0);
    real = printf("4heXa 1 %12X heXa 2 %12X\n", 0, 0);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("4heXa 1 %-12X heXa 2 %-12X\n", 42, -42);
    real = printf("4heXa 1 %-12X heXa 2 %-12X\n", 42, -42);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("5heXa 1 %#0X heXa 2 %0X\n", 11, -42);
    real = printf("5heXa 1 %#0X heXa 2 %0X\n", 11, -42);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("6heXa 1 %012X heXa 2 %012X\n", 42, -42);
    real = printf("6heXa 1 %012X heXa 2 %012X\n", 42, -42);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("7heXa 1 %-012X heXa 2 %012X\n", 42, -42);
    real = printf("7heXa 1 %-012X heXa 2 %012X\n", 42, -42);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = printf("9heXa 1 %+X heXa 2 %+X\n", 42, 6, -42, 6);
    real = printf("9heXa 1 %+X heXa 2 %+X\n", 42, 6, -42, 6);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("10heXa 1 %+12X heXa 2 %+12X\n", 42, 6, -42, 6);
    real = printf("10heXa 1 %+12X heXa 2 %+12X\n", 42, 6, -42, 6);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("12heXa 1 %-+#5X heXa 2 %-+#5X\n", 42, -0);
    real = printf("12heXa 1 %-+#5X heXa 2 %-+#5X\n", 42, -0);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("13heXa 1 %-+05X heXa 2 %-+05X\n", 42, -42);
    real = printf("13heXa 1 %-+05X heXa 2 %-+05X\n", 42, -42);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("14hexa 1 %+-5x hexa 2 %+-5x\n", 42, -42);
    real = printf("14hexa 1 %+-5x hexa 2 %+-5x\n", 42, -42);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("15hexa 1 %.x hexa 2 %.x\n", 9999, -42);
    real = printf("15hexa 1 %.x hexa 2 %.x\n", 9999, -42);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("16hexa 1 %.6x hexa 2 %.6x\n", 42, -42);
    real = printf("16hexa 1 %.6x hexa 2 %.6x\n", 42, -42);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("1hexa 1 %x hexa 2 %x\n", 42, -42);
    real = printf("1hexa 1 %x hexa 2 %x\n", 42, -42);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("2hexa 1 %   x hexa 2 % x\n", 159753, -159753);
    real = printf("2hexa 1 %   x hexa 2 % x\n", 159753, -159753);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("4hexa 1 %12x hexa 2 %12x\n", 0, 0);
    real = printf("4hexa 1 %12x hexa 2 %12x\n", 0, 0);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("4hexa 1 %-12x hexa 2 %-12x\n", 42, -45648);
    real = printf("4hexa 1 %-12x hexa 2 %-12x\n", 42, -45648);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("5hexa 1 %0x hexa 2 %0x\n", 9999, -42);
    real = printf("5hexa 1 %0x hexa 2 %0x\n", 9999, -42);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("6hexa 1 %012x hexa 2 %012x\n", 42, -42);
    real = printf("6hexa 1 %012x hexa 2 %012x\n", 42, -42);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("7hexa 1 %-012x hexa 2 %012x\n", -7445455, -42);
    real = printf("7hexa 1 %-012x hexa 2 %012x\n", -7445455, -42);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = printf("9hexa 1 %+x hexa 2 %+x\n", 42, 6, -42, 6);
    real = printf("9hexa 1 %+x hexa 2 %+x\n", 42, 6, -42, 6);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("10hexa 1 %+12x hexa 2 %+12x\n", 42, 6, -42, 6);
    real = printf("10hexa 1 %+12x hexa 2 %+12x\n", 42, 6, -42, 6);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("12hexa 1 %-+5x hexa 2 %-+5x\n", 42, -42);
    real = printf("12hexa 1 %-+5x hexa 2 %-+5x\n", 42, -42);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("13hexa 1 %-+05x hexa 2 %-+05x\n", 42, -54654);
    real = printf("13hexa 1 %-+05x hexa 2 %-+05x\n", 42, -54654);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("14hexa 1 %+-5x hexa 2 %+-5x\n", 54654, -42);
    real = printf("14hexa 1 %+-5x hexa 2 %+-5x\n", 54654, -42);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("15hexa 1 %.x hexa 2 %.x\n", 42, -42);
    real = printf("15hexa 1 %.x hexa 2 %.x\n", 42, -42);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("16hexa 1 %.6x hexa 2 %.6x\n", 42, -42);
    real = printf("16hexa 1 %.6x hexa 2 %.6x\n", 42, -42);

    printf("\n");
    score += (you == real ? 1 : 0);
    printf("\x1B[31m%d/28 return value passed \n\e[0m", score);
    getchar();
    printf("\x1B[31m | %%p |\n\e[0m", score);
    getchar();
    score = 0;

    /* Memes tests avec les %p */
    you = my_printf("1pointeur 1 %p pointeur 2 %p\n", &c, &c);
    real = printf("1pointeur 1 %p pointeur 2 %p\n", &c, &c);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("2pointeur 1 %   p pointeur 2 % p\n", &c, -5);
    real = printf("2pointeur 1 %   p pointeur 2 % p\n", &c, -5);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("4pointeur 1 %12p pointeur 2 %12p\n", &c, 0);
    real = printf("4pointeur 1 %12p pointeur 2 %12p\n", &c, 0);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("4pointeur 1 %-12p pointeur 2 %-12p\n", &c, 100);
    real = printf("4pointeur 1 %-12p pointeur 2 %-12p\n", &c, 100);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("5pointeur 1 %#0p pointeur 2 %0p\n", 0, &c);
    real = printf("5pointeur 1 %#0p pointeur 2 %0p\n", 0, &c);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("6pointeur 1 %012p pointeur 2 %012p\n", &c, &c);
    real = printf("6pointeur 1 %012p pointeur 2 %012p\n", &c, &c);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("7pointeur 1 %-012p pointeur 2 %012p\n", &c, &c);
    real = printf("7pointeur 1 %-012p pointeur 2 %012p\n", &c, &c);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("9pointeur 1 %+p pointeur 2 %+p\n", &c, 6, &c, 6);
    real = printf("9pointeur 1 %+p pointeur 2 %+p\n", &c, 6, &c, 6);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("10pointeur 1 %+#12p pointeur 2 %+12p\n", &c, 6, &c, 6);
    real = printf("10pointeur 1 %+#12p pointeur 2 %+12p\n", &c, 6, &c, 6);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("12pointeur 1 %-+5p pointeur 2 %-+5p\n", &c, &c);
    real = printf("12pointeur 1 %-+5p pointeur 2 %-+5p\n", &c, &c);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("13pointeur 1 %-+#05p pointeur 2 %-+05p\n", 963852, &c);
    real = printf("13pointeur 1 %-+#05p pointeur 2 %-+05p\n", 963852, &c);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("14pointeur 1 %+-5p pointeur 2 %+-5p\n", &c, &c);
    real = printf("14pointeur 1 %+-5p pointeur 2 %+-5p\n", &c, &c);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("15pointeur 1 %.p pointeur 2 %.p\n", 456, &c);
    real = printf("15pointeur 1 %.p pointeur 2 %.p\n", 456, &c);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("16pointeur 1 %.6p pointeur 2 %.6p\n", &c, &c);
    real = printf("16pointeur 1 %.6p pointeur 2 %.6p\n", &c, &c);
    printf("\n");
    score += (you == real ? 1 : 0);
    printf("\x1B[31m%d/14 return value passed \n\e[0m", score);
    getchar();
    printf("\x1B[31m | %%u |\n\e[0m", score);
    getchar();
    score = 0;

    /* Memes tests avec les %u */
    you = my_printf("1unsigned 1 %u unsigned 2 %u\n", 42, -42);
    real = printf("1unsigned 1 %u unsigned 2 %u\n", 42, -42);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("2unsigned 1 %   u unsigned 2 % u\n", -8054, -42);
    real = printf("2unsigned 1 %   u unsigned 2 % u\n", -8054, -42);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("4unsigned 1 %12u unsigned 2 %12u\n", 42, -514645);
    real = printf("4unsigned 1 %12u unsigned 2 %12u\n", 42, -514645);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("4unsigned 1 %-12u unsigned 2 %-12u\n", 0, -42);
    real = printf("4unsigned 1 %-12u unsigned 2 %-12u\n", 0, -42);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("5unsigned 1 %0u unsigned 2 %0u\n", -400000, -42);
    real = printf("5unsigned 1 %0u unsigned 2 %0u\n", -400000, -42);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("6unsigned 1 %012u unsigned 2 %012u\n", 42, -42);
    real = printf("6unsigned 1 %012u unsigned 2 %012u\n", 42, -42);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("7unsigned 1 %-012u unsigned 2 %012u\n", 65454, -42);
    real = printf("7unsigned 1 %-012u unsigned 2 %012u\n", 65454, -42);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("9unsigned 1 %+u unsigned 2 %+u\n", 42, 6, -42, 6);
    real = printf("9unsigned 1 %+u unsigned 2 %+u\n", 42, 6, -42, 6);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("10unsigned 1 %+12u unsigned 2 %+12u\n", 1, 6, -42, 6);
    real = printf("10unsigned 1 %+12u unsigned 2 %+12u\n", 1, 6, -42, 6);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("12unsigned 1 %-+5u unsigned 2 %-+5u\n", 42, -42);
    real = printf("12unsigned 1 %-+5u unsigned 2 %-+5u\n", 42, -42);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("13unsigned 1 %-+05u unsigned 2 %-+05u\n", -1, -42);
    real = printf("13unsigned 1 %-+05u unsigned 2 %-+05u\n", -1, -42);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("14unsigned 1 %+-5u unsigned 2 %+-5u\n", 42, -42);
    real = printf("14unsigned 1 %+-5u unsigned 2 %+-5u\n", 42, -42);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("15unsigned 1 %.u unsigned 2 %.u\n", 45455, -42);
    real = printf("15unsigned 1 %.u unsigned 2 %.u\n", 45455, -42);
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("16unsigned 1 %.6u unsigned 2 %.6u\n", 42, -42);
    real = printf("16unsigned 1 %.6u unsigned 2 %.6u\n", 42, -42);
    printf("\n");
    score += (you == real ? 1 : 0);
    printf("\x1B[31m%d/14 return value passed \n\e[0m", score);
    getchar();
    printf("\x1B[31m | basic tests and %%s |\n\e[0m", score);
    getchar();
    score = 0;

    you = my_printf("thing\n");
    real = printf("thing\n");
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("truc %#-+d %-10s\n", 42, "-846784846//////%%%%%%%%");
    real = printf("truc %#-+d %-10s\n", 42, "-846784846//////%%%%%%%%");
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("hi there %+d %#-5s!\n", 42, "999999______Wfenfwfefkm");
    real = printf("hi there %+d %#-5s!\n", 42, "999999______Wfenfwfefkm");
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("hi there %#-5s!\n", -0, "");
    real = printf("hi there %#-5s !\n", -0, "");
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("1string 1 %s string 2 %s\n", "_my_horse_is_amazing",
    "+/%*- bistro reminder");
    real = printf("1string 1 %s string 2 %s\n", "_my_horse_is_amazing",
    "+/%*- bistro reminder");
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("2string 1 %   s string 2 % s\n", "_my_horse_is_amazing",
    "+/%*- bistro reminder");
    real = printf("2string 1 %   s string 2 % s\n", "_my_horse_is_amazing",
    "+/%*- bistro reminder");
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("4string 1 %12s string 2 %12s\n", "_my_horse_is_amazing",
    "+/%*- bistro reminder");
    real = printf("4string 1 %12s string 2 %12s\n", "_my_horse_is_amazing",
    "+/%*- bistro reminder");
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("4string 1 %-12s string 2 %-12s\n", "_my_horse_is_amazing",
    "+/%*- bistro reminder");
    real = printf("4string 1 %-12s string 2 %-12s\n", "_my_horse_is_amazing",
    "+/%*- bistro reminder");
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("5string 1 %0s string 2 %0s\n", "_my_horse_is_amazing",
    "+/%*- bistro reminder");
    real = printf("5string 1 %0s string 2 %0s\n", "_my_horse_is_amazing",
    "+/%*- bistro reminder");
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("6string 1 %012s string 2 %012s\n", "_my_horse_is_amazing",
    "+/%*- bistro reminder");
    real = printf("6string 1 %012s string 2 %012s\n", "_my_horse_is_amazing",
    "+/%*- bistro reminder");
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("7string 1 %-012s string 2 %012s\n",
    "_my_horse_is_amazing", "+/%*- bistro reminder");
    real = printf("7string 1 %-012s string 2 %012s\n", "_my_horse_is_amazing",
    "+/%*- bistro reminder");
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("12string 1 %-+5s string 2 %-+5s\n",
    "_my_horse_is_amazing", "+/%*- bistro reminder");
    real = printf("12string 1 %-+5s string 2 %-+5s\n", "_my_horse_is_amazing",
    "+/%*- bistro reminder");
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("13string 1 %-+05s string 2 %-+05s\n",
    "_my_horse_is_amazing", "+/%*- bistro reminder");
    real = printf("13string 1 %-+05s string 2 %-+05s\n",
    "_my_horse_is_amazing", "+/%*- bistro reminder");
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("14string 1 %+-5s string 2 %+-5s\n",
    "_my_horse_is_amazing", "+/%*- bistro reminder");
    real = printf("14string 1 %+-5s string 2 %+-5s\n", "_my_horse_is_amazing",
    "+/%*- bistro reminder");
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("15string 1 %.s string 2 %.s\n", "_my_horse_is_amazing",
    "+/%*- bistro reminder");
    real = printf("15string 1 %.s string 2 %.s\n", "_my_horse_is_amazing",
    "+/%*- bistro reminder");
    printf("\n");
    score += (you == real ? 1 : 0);
    you = my_printf("16string 1 %.6s string 2 %.6s\n", "_my_horse_is_amazing",
    "+/%*- bistro reminder");
    real = printf("16string 1 %.6s string 2 %.6s\n", "_my_horse_is_amazing",
    "+/%*- bistro reminder");
    printf("\n");
    score += (you == real ? 1 : 0);

    printf("\x1B[31m%d/16 return value passed \n\e[0m", score);
    getchar();
    printf("\x1B[31m | Hard / stress tests |\n\e[0m", score);
    getchar();
    score = 0;

    you = my_printf("salut les %u k %i p %-5X %o %c boys %s je mange %-45u et "
                    "de lol %015p %#015x du pain %+d\n",
    -5, 858585, 451, 'c', 4, "ya pas wesh", 15, 0, 4584, 80000);
    real = printf("salut les %u k %i p %-5X %o %c boys %s je mange %-45u et "
                  "de lol %015p %#015x du pain %+d\n",
    -5, 858585, 451, 'c', 4, "ya pas wesh", 15, 0, 4584, 80000);
    printf("\n");
    score += (you == real ? 1 : 0);

    you = my_printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%% %kd\n", 5);
    real = printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%% %kd\n", 5);
    printf("\n");
    score += (you == real ? 1 : 0);

    you = my_printf("%d %d %d %d %s %kkkkkkkkkkk bf owe jwefo lnef ef     f "
                    "bwue nwo jnwe f 4w6ef5 we %x %%xX\n",
    0, -1, -5, 548455, 0, 5465464);
    real = printf("%d %d %d %d %s %kkkkkkkkkkk bf owe jwefo lnef ef     f "
                  "bwue nwo jnwe f 4w6ef5 we %x %%xX\n",
    0, -1, -5, 548455, 0, 5465464);
    printf("\n");
    score += (you == real ? 1 : 0);
    printf("\x1B[31m%d/3 return value passed \n\e[0m", score);
    getchar();
    printf("\x1B[31mMade Jbrionne |\n\e[0m");
    getchar();
    return (0);
}
