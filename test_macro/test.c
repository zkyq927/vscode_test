#include <stdio.h>
#include <stdarg.h>

#define __DEBUG__

#ifdef __DEBUG__  
#define DEBUG(format,arg...) printf("File: %s, Line: %05d:"format"\r\n", __FILE__ ,__LINE__,##arg)
#else  
#define DEBUG(format,arg...)  
#endif 

int main() 
{
    char str[] = "YES";
    DEBUG("please check me:%s",str);

    return 0;
}
