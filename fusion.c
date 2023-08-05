#include <stdio.h>

typedef unsigned char uint8;

void merge(int a[],int length); 
void f_recur(int a[],int l,int r);
void frec_sorted(int a[],int l,int m,int r);

int main(int argc,char**argv){

int tab[10] = {52,5,-2,65,-1,-3,0,-5,52,19};

int length = 10;


merge(tab,length);

for(int i = 0;i<length;i++){
    printf("%d ",tab[i]);
}
printf("\n");




    return 0;
}

void merge(int a[],int length){

    f_recur(a,0,length-1);


}




void f_recur(int a[],int l,int r){
    if(l<r){

    
    int m = l + (r-l)/2;
    f_recur(a,l,m);
    f_recur(a,m+1,r);
    frec_sorted(a,l,m,r);
    }   
    
}

void frec_sorted(int a[],int l,int m,int r){

 int l_length = m-l +1;
 int r_length = r-m;

 int temp_l[l_length];
 int temp_r[r_length];
 int i,j,k;

for(i = 0;i<l_length;i++){

    temp_l[i] = a[l + i];

}
for(i = 0;i<r_length;i++){
    
    temp_r[i] = a[m+1+i];

}

for(i =0,j = 0,k=l;k<=r;k++){

if( (i < l_length) &&
        (j >= r_length || temp_l[i] <= temp_r[j]) ){


a[k] = temp_l[i];
i++;

}else{
a[k] = temp_r[j];
j++;

}
 }
 
}
