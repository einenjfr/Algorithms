#include <stdio.h>

int main (void) {
    float debt;
    const float coins[15] = {0.01,0.02,0.05,0.1,0.2,0.5,1,2,5,10,20,50,100,200,500};
    int dispo[15] = {20,20,20,20,20,20,20,20,20,20,20,20,20,20,0};
    int pay[15] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    char currency[5] = "euro";

    debt = 1243.88;

    printf("Your debt is: %.2f\n\n",debt);

    for (int i = 14; i >= 0; i--)
        while (dispo[i] > 0 && (debt - coins[i] >= 0))
            if (debt == 0)
                break;
            else if (debt - coins[i] >= 0) {
                pay[i] += 1;
                debt -= coins[i];
            }
    if (debt > 0.009)
        printf("Sorry, we do not have enought change.\n");

  //PRINT RESULT
    printf("TO PAY\n");
    for(int i = 14; i >= 0; i--)
        printf("->%.2f x %d\t=%.2f\n",coins[i],pay[i],coins[i]*pay[i]);

    return 0;
}
