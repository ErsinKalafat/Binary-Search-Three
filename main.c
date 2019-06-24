#include <stdio.h>
#include <stdlib.h>

/* Düðüm Ekleme Fonksiyonu */
void ekle(agacKok, eklenen)AGAC2 *agacKok, *eklenen;
     {      
    if(agacKok==NULL)
        kok=eklenen;
            else
    {
        if(eklenen->bilgi <= agacKok->bilgi)
        {
            if(agacKok->sol==NULL)
                      
                agacKok->sol=eklenen;
                else
                ekle(agacKok->sol, eklenen);
                     
        }       else
        {
                if(agacKok->sag==NULL)
                    agacKok->sag=eklenen;
                                       else
                ekle(agacKok->sag, eklenen);
                                       
        }                  
    }
}


int main()
{
    ekle(5,2);
    return 0;
}
