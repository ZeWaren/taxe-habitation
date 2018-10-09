#include <stdio.h>
#include <th-7kfos.h>

int main(void) {
    // Calcul de la contribution à l'audiovisuel public.

    s_rae rae;
    s_ras ras;
    int error;

    /* Année de taxation */
    rae.antax = 2017;
    /* Département (69 = Rhone) */
    rae.dep[0] = '0';
    rae.dep[1] = '6';
    rae.dep[2] = '9';
    /* Le code champ, servi à "C" pour les contribuables dans le champ 
       de la redevance. */
    rae.champ = 'C';
    /* Le code questionnaire TV, servi à "1" pour les contribuables situés 
       dans le champ de la redevance et pour lesquels au moins un redevable 
       détient un téléviseur au sein du foyer fiscal. */
    rae.qtvrt = '1';
    /* Rang de sortie abattement. 'b' = pas de sortie en sifflet. */
    rae.rgsor = 'b';
    /* Code dégrèvement TV. Blanc = rien. */
    rae.degtv = ' ';

    /* Appel de la méthode de calcul: */
    error = th_7krac(&rae, &ras);

    /* Affichage du résultat: */
    if (error) {
        printf("th_7krac: %d: %s\n", error, ras.libelle->libelle);
        return 1;
    }
    printf("Net a payer redevance: %lu\n", ras.nettv);
    
    return 0;
}
