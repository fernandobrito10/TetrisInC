#include <stdlib.h>
#include <stdio.h>

char tecla;
int cont=0;

int main() {
    do {
       tecla = getch();
       if(tecla=='q') {
        cont++;
       }
       if(cont==8) {
        cont=0;
       }
       switch(cont) {
    case 0:
        tspin();
        break;
    case 1:
        cubo();
        break;
    case 2:
        l();
        break;
    case 3:
        li();
        break;
    case 4:
        s();
        break;
    case 5:
        z();
        break;
    case 6:
        linha();
        break;
       }
    }while(tecla!='p');
    return 0;
    system("pause");
}

int tspin() {
    if(tecla=='w') {
        printf(" .\n...\n");
    }
    if(tecla=='a') {
        printf(" .\n..\n .\n");
    }
    if(tecla=='s') {
        printf("...\n .\n");
    }
    if(tecla=='d') {
        printf(".\n..\n.\n");
    }
}

int cubo() {
    if(tecla=='w') {
        printf("..\n..\n");
    }
}
int l() {
    if(tecla=='w') {
        printf(".\n.\n..\n");
    }
    if(tecla=='a') {
        printf("..\n .\n .\n");
    }
    if(tecla=='s') {
        printf("  .\n...\n");
    }
    if(tecla=='d') {
        printf("...\n.\n");
    }
}
int li() {
    if(tecla=='w') {
        printf(" .\n .\n..\n");
    }
    if(tecla=='a') {
        printf("...\n.\n");
    }
    if(tecla=='s') {
        printf("..\n.\n.\n");
    }
    if(tecla=='d') {
        printf("...\n  .\n");
    }
}
int s() {
    if(tecla=='w') {
        printf(" ..\n..\n");
    }
    if(tecla=='a') {
        printf(".\n.\n .\n .\n");
    }
}
int z() {
    if(tecla=='w') {
        printf("..\n ..\n");
    }
    if(tecla=='a') {
        printf(" .\n .\n.\n.\n");
    }
}
int linha() {
    if(tecla=='w') {
        printf(".\n.\n.\n.\n");
    }
    if(tecla=='s') {
        printf("....\n");
    }
}


