#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
int main(){
    int a,b,c=0,d,e,f;
    /*this program build by zaki indra*/
    printf("===================\n==author by:\\.z4k==\n===================\n\n");
    printf("ip mu :");
    scanf("%d",&a);
    printf("jenis CIDRmu:\\");
    scanf("%d",&e);
    f=e;
    if(e==30){
        e=2;
    }
    else{
        if(e==29){
            e=6;
        }
        else{
            if(e==28){
                e=14;
            }
            else{
                if(e==27){
                    e=30;
                }
                else{
                    if(e==26){
                        e=62;
                    }
                    else{
                        if(e==25){
                            e=126;
                        }
                        else{
                            if(e==24){
                               e=254; 
                            }
                        }
                    }
                }
            }
        }
    }
    for(b=0;b<a;b++){
        for(d=0;d<b;d++){
            if(c<=a){
                c=c+(e+2);
            }
        }
    }
    if(f==30){
        if(a<=3){
        printf("ip networkmu :0\nip awalmu :1\nip akhirmu :2\nip broadcasemu :3");
    }
    else{
            printf("\nip networkmu :%d\nip awalmu :%d\nip akhirmu :%d\nip broadcasemu :%d",c-4,c-3,c-2,c-1);
       }
    }
    else if(f==29){
        if(a<=7){
        printf("ip networkmu :0\nip awalmu :1\nip akhirmu :6\nip broadcasemu :7");
    }
    else{
            printf("\nip networkmu :%d\nip awalmu :%d\nip akhirmu :%d\nip broadcasemu :%d",c-8,c-7,c-2,c-1);
       }
    }
    else if(f==28){
        if(a<=15){
        printf("ip networkmu :0\nip awalmu :1\nip akhirmu :14\nip broadcasemu :15");
    }
    else{
            printf("\nip networkmu :%d\nip awalmu :%d\nip akhirmu :%d\nip broadcasemu :%d",c-16,c-15,c-2,c-1);
       }
    }
    else if(f==27){
        if(a<=31){
        printf("ip networkmu :0\nip awalmu :1\nip akhirmu :30\nip broadcasemu :31");
    }
    else{
            printf("\nip networkmu :%d\nip awalmu :%d\nip akhirmu :%d\nip broadcasemu :%d",c-32,c-31,c-2,c-1);
       }
    }
    else if(f==26){
        if(a<=63){
        printf("ip networkmu :0\nip awalmu :1\nip akhirmu :62\nip broadcasemu :63");
    }
    else{
            printf("\nip networkmu :%d\nip awalmu :%d\nip akhirmu :%d\nip broadcasemu :%d",c-64,c-63,c-2,c-1);
       }
    }
    else if(f==25){
        if(a<=127){
        printf("ip networkmu :0\nip awalmu :1\nip akhirmu :126\nip broadcasemu :127");
    }
    else{
            printf("\nip networkmu :%d\nip awalmu :%d\nip akhirmu :%d\nip broadcasemu :%d",c-128,c-127,c-2,c-1);
       }
    }
    else if(f==24){
        printf("ip networkmu :0\nip awalmu :1\nip akhirmu :254\nip broadcasemu :255");
    }
}