# Тест на знание языка Си.
### Теория

* Объясните разницу между интерпретируемыми и компилируемыми языками программирования. К какому виду относится язык Си?
* Какие базовые типы данных определены в языке Си?
* В чем различия между локальными, глобальными и статистическими переменными ?
* Представьте, что вы приехали к бабушке и дедушке в деревню. Попытайтесь объяснить им что такое указатель и массив. 
### Практика

Что выведут в консоль следующие образцы кода: 
***
##### Пример №1
    #include <stdio.h>

    int main(){
        int i;
        for (i = 2; i < 11; i++)
        {
            printf("%x", i);
            i != 5 ? : printf("\n");
        }
    }
***
##### Пример №2
    #include <stdio.h>

    int main()
    {
        char arr[4] = {1, 2, 3, 4};
        short *p = (short*)arr;
        p++;
        (*p)++;
        printf("%x\n", *p);
    }
***
##### Пример №3
    #include <stdio.h>

    int main()
    {
        int i, j, n;
        n = 7;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if ((i == j) || ((i + j) == n - 1))
                {
                    printf("x");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
***
##### Пример №4
    #include <stdio.h>

    int main()
    {
        char c = 6;
        c = c & ~(1 << 2);
        printf("%d", c);
    }
***
##### Пример №5
    #include <stdio.h>

    int main()
    {
        char c = 5;
        c = c | (1 << 1);
        printf("%d", c);
    }
***
##### Пример №6
    #include <stdio.h>

    int main()
    {
        union Data
        {
            int i;
            short s[2];
        } data;

        data.i = 0;
        *(data.s) = 3;
        *(data.s + 1) = 5;
        printf("%x",data.i);
    }
