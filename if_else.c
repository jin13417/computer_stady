
#include <time.h>

#include <stdlib.h>




int main()
{
    srand(time(NULL));
    int r = rand()%3;
    int a = 10;
    if (r== 0)
    {
	a = 1;
    }else if(r==1){
        a = 2;
    }else{
       a = 3;
}
}
