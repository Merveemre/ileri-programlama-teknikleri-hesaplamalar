#include <stdio.h>
#include <stdlib.h>

int main()
{
   int secim, sayi, sayi1, sayi2, sayi3, i;

    printf("Asagidaki menude 1, 2 veya 3 degerlerinden birini girerek yapabileceginiz islemler siralanmistir:\n\n");
    printf("(1) Girilen Sayinin Tek Yada Cift Oldugunu Bulma\n");
    printf("(2) Girilen Uc Sayiyi Buyukten Kucuge Siralama\n");
    printf("(3) Girilen Sayinin Asal Sayi Olup Olmadigini Bulma\n");
    printf("Programdan cikmak icin -1 degerini giriniz.\n");
    printf("\nSeciminizi Giriniz : ");


        do
        {
            scanf("%d", &secim);
        switch (secim) {
            case 1:
                printf("Bir sayi giriniz: ");
                scanf("%d", &sayi);
                if (sayi % 2 == 0) {
                    printf("%d cift sayidir.\nDevam etmek icin seciminizi yapiniz: ", sayi);
                } else {
                    printf("%d tek sayidir.\nDevam etmek icin seciminizi yapiniz: ", sayi);
                }
                break;

            case 2:
                printf("Birinci sayiyi giriniz: ");
                scanf("%d", &sayi1);
                printf("Ikinci sayiyi giriniz: ");
                scanf("%d", &sayi2);
                printf("Ucuncu sayiyi giriniz: ");
                scanf("%d", &sayi3);
                if (sayi1 >= sayi2 && sayi1 >= sayi3) {
                    if (sayi2 >= sayi3) {
                        printf("%d  %d  %d\nDevam etmek icin seciminizi yapiniz: ", sayi1, sayi2, sayi3);
                    } else {
                        printf("%d  %d  %d\nDevam etmek icin seciminizi yapiniz: ", sayi1, sayi3, sayi2);
                    }
                }
                else if (sayi2 >= sayi1 && sayi2 >= sayi3) {
                    if (sayi1 >= sayi3) {
                        printf("%d  %d  %d\nDevam etmek icin seciminizi yapiniz: ", sayi2, sayi1, sayi3);
                    } else {
                        printf("%d  %d  %d\nDevam etmek icin seciminizi yapiniz: ", sayi2, sayi3, sayi1);
                    }
                }
                else if (sayi3 >= sayi1 && sayi3 >= sayi2) {
                    if (sayi1 >= sayi2) {
                        printf("%d  %d  %d\nDevam etmek icin seciminizi yapiniz: ", sayi3, sayi1, sayi2);
                    } else {
                        printf("%d  %d  %d\nDevam etmek icin seciminizi yapiniz: ", sayi3, sayi2, sayi1);
                    }
                }
                break;

            case 3:
                printf("Bir sayi giriniz: ");
                scanf("%d", &sayi);
                for (i = 2; i<sayi ; ++i) {
                    if (sayi % i == 0)
                        break;
                }
                if (sayi == i)
                    printf("%d Asal Sayidir.\nDevam etmek icin seciminizi yapiniz: ", sayi);
                else
                    printf("%d Asal Sayi degildir.\nDevam etmek icin seciminizi yapiniz: ", sayi);
                break;
            case -1:
                printf("Cikis Yapiliyor...");
                break;

            default:
                printf("Yanlis deger girdiniz. Tekrar giris yapiniz. ");
                break;
        }
        }

        while(secim!=-1);

    return 0;

}





