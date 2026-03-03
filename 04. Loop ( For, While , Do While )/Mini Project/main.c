#include <stdio.h>
#include <stdlib.h>

int main()
{
    int com = rand() % 10 + 1;

    int kesempatan = 5;
    int user;

    printf("masukan tebakan mu (1-10) : ");
    scanf("%d", &user);    
    
    while (kesempatan > 0)
    {
        kesempatan--;

        if (user > com) {
            printf("terlalu banyak\n");
            printf("masukan tebakan mu (1-10) : ");
            scanf("%d", &user);
        } else if (user < com) {
            printf("terlalu kecil\n");
            printf("masukan tebakan mu (1-10) : ");
            scanf("%d", &user);
        } else if ( user == com ) {
            printf("tebakan mu benar\n");
        }

        printf("sisa kesempatan mu : %d\n", kesempatan);
    }

    return 0;
}