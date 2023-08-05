#include <stdio.h>


int first,last,min,tmp;
int tab[10] = {6,2,1,-5,65,-2,47,4,5,10};
int SIZE = (sizeof(tab)/sizeof(tab[0])); 
void selec(int*t,int taille);

int main(int argc,char**argv){



selec(&tab,10);


    return 0;
}


void selec(int*t,int taille){

for(int i=0;i< SIZE;i++){

printf("%d ",tab[i]);

}
printf("\n");

for(int i = 0;i< SIZE -1;i++){
    min = i;
    for(int j = i + 1;j<SIZE;j++){
        
        if(tab[j] < tab[min]){
            min = j;

        }
            
    }
            tmp = tab[min];
            tab[min] = tab[i];
            tab[i] = tmp;
}

printf("Triee\n");
for(int k = 0;k<SIZE;k++){
    printf("%d ",tab[k]);
}
}

