//
// Created by aung on 12/26/2022.
//
#include <stdio.h>
#include <conio.h>
int pow_k( int base,int exponent)
{
    int count=1;
    int result = base;
    if(exponent==0)
    {
        return 1;
    }
    else if(exponent==1)
    {
        return base;
    }
    else
    {
        while(count<exponent)
        {
            result *=base;
            count++;
        }
        return result;
    }

}
int strlen_k(const char *str)       // string length
{
    int count = 0;
    while (str[count] != '\0' && str[count] != -52)
    {
        count++;
    }
    return count;
}
int strcpy_k(char *destination, const char *source)//string copy
{
    int count = 0;
    while (source[count] != '\0' && source[count] != -52)
    {
        destination[count] = source[count];
        count++;
    }
}

int strcmp_k(const char *str1, const char *str2)    //string compare
{

    int index = 0;
    int max = 0;
    if (strlen_k(str1) > strlen_k(str2))
    {
        return 1;
    }
    else if (strlen_k(str1) < strlen_k(str2))
    {
        return -1;
    }
    while (str1[index] != '\0' && str1[index] != -52)
    {
        if (str1[index] > str2[index])
        {
            return 1; // str1 > str2
        }
        else if (str1[index] < str2[index])
        {
            return -1; // str1 < str2
        }
        index++;
    }
    return 0; // equal
}

int strcat_k(char *destination, const char *source) //string concatenate
{
    int dl = strlen_k(destination);
    int sl = strlen_k(source);
    for (int i = 0; i < sl; i++)
    {
        destination[dl + i] = source[i];
    }
}

int strncmp_k(const char *str1,const char *str2,const int number)   //string compare with number
{
    int index=0;
    while(index<number)
    {
        if (str1[index] > str2[index])
        {
            return 1; // str1 > str2
        }
        else if (str1[index] < str2[index])
        {
            return -1; // str1 < str2
        }
        index++;
    }
    return 0; //equal until (index<n)
}
int strncpy_k(char *destination, const char *source,const int number)//string copy with number
{

    int count=0;
    while(count<number)
    {
        destination[count]=source[count];
        count++;
    }
}

int strncat_k(char *destination, const char *source,const int number) //string concatenate
{
    int dl = strlen_k(destination);
    int sl = strlen_k(source);
//    if(dl>=sl)
//    {
    for (int i = 0; i < number; i++)
    {
        destination[dl+1] = source[i];
    }
//    }

}
char* gets_k(char* str, int buffer_size)
{
    char ch = '\0';
    int i = 0;
    do
    {
        ch = _getch();
        putchar(ch);
        if (ch != '\n' && ch != '\r')
        {
            str[i++] = ch; // str[0]=ch; i++;
        }

    } while (ch != '\r' && i < buffer_size); // off by one error => 0 to buffer_size - 1
    str[i] = '\0';
    printf("\n"); // need to enter new line
    return str;
}
void clr_k(char *str,int count)
{
    for(int k=0;k<100;k++)
    {
        str[k] = '\0';
    }
}
void split_k(char* line, char* command, const char* str)
{
    int i=0;
    int k=0;
    int j=0;
    while(str[i]==32){i++;}
    while(str[i]!=32)
    {
        line[k]=str[i];
        i++;
        k++;
    }
    while(str[i]==32){i++;}
    while(str[i]!='\0')
    {
        command[j]=str[i];
        i++;
        j++;
    }
}
int c2i_k(char c)
{
    if(c>=48 && c<=57)
    {
        return (c-48);
    }
    else
    {
        return -1;
    }
}
int s2i_k(const char* line)
{
    int i=0;
    int temp=0;
    int result =0;
    while(i<strlen_k(line))
    {
        temp = c2i_k(*(line+i));
        if(temp == -1)
        {
            printf("s2i error! not an integer!\n");
            return -1;
        }
        else
        {
            result += (temp * pow_k(10, (strlen_k(line)-i-1)));
        }
        i++;
    }
    return result;
}
int sqrt_k(int x)
{
    int i = 1;
    int count = 0;
    if(x<0)
    {
        printf("Error! negative value is invalid!");
        return -1;
    }
    while(x>=i)
    {
        x = x -i;
        i+=2;
        count++;
    }
    return count;
}