#include <stdio.h>

int color(){
printf("Naranja\n");
return 0;
}

int color1(){
printf("Amarillo\n");
color();
printf("Gris\n");
return 0;
}

int color2 (){
color1();
printf("Verde\n");
return 0;

}

int main(){
color();
color2();
color1();
return 0;
}
