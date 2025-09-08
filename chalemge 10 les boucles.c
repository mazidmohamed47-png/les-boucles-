#include <stdio.h>
#include <stdlib.h>

unsigned long long somme_for(unsigned long long n, int show_steps) {
    unsigned long long s = 0;
    for (unsigned long long i = 1; i <= n; ++i) {
        s += i;
        if (show_steps) {
            if (i > 1) printf(" + ");
            printf("%llu", i);
        }
    }
    if (show_steps) printf(" = %llu\n", s);
    return s;
}

unsigned long long somme_while(unsigned long long n, int show_steps) {
    unsigned long long s = 0, i = 1;
    while (i <= n) {
        s += i;
        if (show_steps) {
            if (i > 1) printf(" + ");
            printf("%llu", i);
        }
        ++i;
    }
    if (show_steps) printf(" = %llu\n", s);
    return s;
}

unsigned long long somme_formule(unsigned long long n, int show_steps) {
    // تجنّب overflow: قسم قبل الضرب
    unsigned long long s;
    if (n % 2 == 0) s = (n / 2) * (n + 1);
    else            s = n * ((n + 1) / 2);
    if (show_steps) printf("Formule: %llu*(%llu+1)/2 = %llu\n", n, n, s);
    return s;
}

int main(void) {
    long long tmp;                 // نقرأ هنا باش نتحقّق من السالب
    unsigned long long n, res = 0;
    int methode, show_steps = 0;
    char ch;

    printf("Entrez n (entier naturel >= 0) : ");
    if (scanf("%lld", &tmp) != 1) { puts("Entree invalide."); return 0; }
    if (tmp < 0) { puts("Erreur : n doit etre >= 0."); return 0; }
    n = (unsigned long long)tmp;

    printf("Choisissez la methode :\n");
    printf("  1) Boucle for\n  2) Boucle while\n  3) Formule directe n(n+1)/2\n");
    printf("Votre choix (1/2/3) : ");
    if (scanf("%d", &methode) != 1) { puts("Entree invalide."); return 0; }

    printf("Afficher chaque etape (o/n) ? ");
    scanf(" %c", &ch);
    show_steps = (ch == 'o' || ch == 'O');

    // لتفادي spam فالكونسول: ما نبيّنش الخطوات إلا إذا n <= 100
    if (show_steps && n > 100) {
        puts("[Note] n كبير؛ سيتم cacher les etapes (n > 100).");
        show_steps = 0;
    }

    switch (methode) {
        case 1: res = somme_for(n, show_steps);   break;
        case 2: res = somme_while(n, show_steps); break;
        case 3: res = somme_formule(n, show_steps); break;
        default:
            puts("Choix invalide. Utilisation de la boucle for par defaut.");
            res = somme_for(n, show_steps);
    }

    printf("Somme des %llu premiers entiers naturels = %llu\n", n, res);
    return 0;
}
