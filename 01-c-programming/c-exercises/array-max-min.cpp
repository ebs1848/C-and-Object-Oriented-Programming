#include <stdlib.h>
#include <locale.h>

int main() {
setlocale(LC_ALL,"german");
    int a[10],max,min,i;
    for(i=0;i<5;i++){  //kullanýcýdan sayýlarý alýyoruz
        printf("%d. sayýyý girin: ",i+1); //%d. anlamý i=0 iken 1 yapýp 1. sayiyi giriniz der
        scanf("%d",&a[i]);
    }
    max=min=a[0]; //min ve max bir deðere atadýk ki karþýlaþtýrma yapabilelim
    for(i=0;i<5;i++){
        if(a[i]<min)//a[0]dan kucuk bir deðer varsa onu min yapar
            min=a[i];
        if(a[i]>max)//a[0]dan buyuk bir deðer varsa onu max yapar
            max=a[i];
    }
    printf("en küçük ßßß sayý: %d\n",min);
    printf("en büyük sayý: %d\n",max);
    return 0;
}
