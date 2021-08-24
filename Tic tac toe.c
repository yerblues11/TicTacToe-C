#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

    int casefig=0, opt, again=0, vs, a, b, c, e, ee, i, j, k, kk, kkk, x, y;        //GENERAL
    int coor, coorx, coory;                                                        //VS FRIEND
    int coorxc, cooryc, coorxh, cooryh;                                           //VS COMPUTER
    char gato[3][3], fig, figp1, figp2, mode, name[50], namep1[50], namep2[50];

    void at(int,int);

    void marco(){
        at(10,2);for(i=1;i<=50;i++){ //MARCO
                    printf("%c", 176);
                    printf("%c", 177);
                }
        at(10,27);for(i=1;i<=50;i++){ //MARCO
                    printf("%c", 176);
                    printf("%c", 177);
                }
    }

    void marcoint(){
        at(41,5);for(i=1;i<=19;i++){ //MARCO INTERIOR EN HOST
                    printf("%c", 205);
                    printf("%c", 205);
                }
        at(41,11);for(i=1;i<=19;i++){ //MARCO INTERIOR EN HOST
                    printf("%c", 205);
                    printf("%c", 205);
                }
    }

    void letstart(){
        at(25,5);for(i=1;i<=35;i++){ //MARCO EXTERIOR
                    printf("%c", 176);
                    printf("%c", 175);
                }
        at(30,6);for(i=1;i<=30;i++){ //LINEA INTERIOR
                    printf("%c", 205);
                    printf("%c", 205);
                }
        at(30,23);for(i=1;i<=30;i++){
                    printf("%c", 205);
                    printf("%c", 205);
                }
        at(25,24);for(i=1;i<=35;i++){
                    printf("%c", 176);
                    printf("%c", 175);
                }
        at(45,12);for(i=1;i<=15;i++){ //LINEA DE X
                    printf("%c", 35);
                    printf("%c", 35);
                }
        at(45,17);for(i=1;i<=15;i++){
                    printf("%c", 35);
                    printf("%c", 35);
                }

        Sleep(150); at(54,14); printf("L");
        Sleep(40); at(55,14); printf("E");
        Sleep(40); at(56,14); printf("T");
        Sleep(40); at(57,14); printf("'");
        Sleep(40); at(58,14); printf("S");
        Sleep(40); at(60,14); printf("S");
        Sleep(40); at(61,14); printf("T");
        Sleep(40); at(62,14); printf("A");
        Sleep(40); at(63,14); printf("R");
        Sleep(40); at(64,14); printf("T");
        Sleep(40); at(65,14); printf("!!!");
        Sleep(700);
        system("cls");
    }

    void lineatransver(){
        marco();

        e=65, ee=6;for(i=1;i<=18;i++){at(e,ee);printf("%c", 124);ee++;}
        e=66, ee=6;for(i=1;i<=18;i++){at(e,ee);printf("%c", 158);ee++;}
        e=67, ee=6;for(i=1;i<=18;i++){at(e,ee);printf("%c", 124);ee++;}
    }

    void lineatransverpvp(){
        marco();
        ///RIGHT
        e=38, ee=6;for(i=1;i<=18;i++){at(e,ee);printf("%c", 124);ee++;}
        e=39, ee=6;for(i=1;i<=18;i++){at(e,ee);printf("%c", 158);ee++;}
        e=40, ee=6;for(i=1;i<=18;i++){at(e,ee);printf("%c", 124);ee++;}
        ///LEFT
        e=79, ee=6;for(i=1;i<=18;i++){at(e,ee);printf("%c", 124);ee++;}
        e=80, ee=6;for(i=1;i<=18;i++){at(e,ee);printf("%c", 158);ee++;}
        e=81, ee=6;for(i=1;i<=18;i++){at(e,ee);printf("%c", 124);ee++;}

        ///UP
        at(48,11);printf("%c%c", 176, 176);
        at(50,11);for(i=1;i<=21;i++){printf("%c", 158);}
        at(70,11);printf("%c%c", 176, 176);
        ///DOWN
        at(48,19);printf("%c%c", 176, 176);
        at(50,19);for(i=1;i<=21;i++){printf("%c", 158);}
        at(70,19);printf("%c%c", 176, 176);
    }

    void chooseagainC(){
        at(81,19);for(i=1;i<=14;i++){printf(" ");}
        Sleep(150); at(82,19); printf("C");
        Sleep(50); at(83,19); printf("h");
        Sleep(50); at(84,19); printf("o");
        Sleep(50); at(85,19); printf("o");
        Sleep(50); at(86,19); printf("s");
        Sleep(50); at(87,19); printf("e");
        Sleep(50); at(89,19); printf("a");
        Sleep(50); at(90,19); printf("g");
        Sleep(50); at(91,19); printf("a");
        Sleep(50); at(92,19); printf("i");
        Sleep(50); at(93,19); printf("n");
        Sleep(50); at(94,19); printf("!");
        Sleep(900);
        at(81,19);for(i=1;i<=15;i++){printf(" ");}
    }

    void frameboardC(){
        at(21,13);printf("%c%c", 176, 176);
        at(23,13);for(i=1;i<=21;i++){printf("%c", 158);}
        at(44,13);printf("%c%c", 176, 176);
        at(21,21);printf("%c%c", 176, 176);
        at(23,21);for(i=1;i<=21;i++){printf("%c", 158);}
        at(44,21);printf("%c%c", 176, 176);
    }

    void goodbye(){
        system("cls");
        at(25,5);for(i=1;i<=35;i++){ //MARCO EXTERIOR
                    printf("%c", 176);
                    printf("%c", 175);
                }
        at(30,6);for(i=1;i<=30;i++){ //LINEA INTERIOR
                    printf("%c", 205);
                    printf("%c", 205);
                }
        at(30,23);for(i=1;i<=30;i++){
                    printf("%c", 205);
                    printf("%c", 205);
                }
        at(25,24);for(i=1;i<=35;i++){
                    printf("%c", 176);
                    printf("%c", 175);
                }
        at(45,12);for(i=1;i<=15;i++){ //LINEA DE X
                    printf("%c", 35);
                    printf("%c", 35);
                }
        at(45,17);for(i=1;i<=15;i++){
                    printf("%c", 35);
                    printf("%c", 35);
                }
                Sleep(150); at(54,14); printf("G");
                Sleep(40); at(55,14); printf("O");
                Sleep(40); at(56,14); printf("O");
                Sleep(40); at(57,14); printf("D");
                Sleep(40); at(58,14); printf("B");
                Sleep(40); at(59,14); printf("Y");
                Sleep(40); at(60,14); printf("E");
                Sleep(40); at(62,14); printf(":)");
                Sleep(1000);
                system("cls");
                //at(52,14);return(printf("Kevin Cameros, 2020"));
    }

    int youwin(){
        lineatransver();

        at(28,7);printf("Tic Tac Toe");

        at(19,6);for(i=1;i<=29;i++){
                    printf("%c", 196);
                }
        at(19,8);for(i=1;i<=29;i++){
                    printf("%c", 196);
                }

        k=19; kk=7;
        kkk=47;
        for(i=1;i<=5;i++){
            Sleep(75);at(k,kk);printf("%c", 62);
            k++;
            Sleep(75);at(kkk,kk);printf("%c", 60);
            kkk--;
        }

        k=29; kk=16; //KKK
        for(x=0;x<3;x++){
            at(k, kk);for(y=0;y<3;y++){
                printf("[%c]", gato[x][y]);
            }
            printf("\n");
            kk++;
        }

        at(21,13);printf("%c%c", 176, 176);
        at(23,13);for(i=1;i<=21;i++){printf("%c", 158);}
        at(44,13);printf("%c%c", 176, 176);
        at(21,21);printf("%c%c", 176, 176);
        at(23,21);for(i=1;i<=21;i++){printf("%c", 158);}
        at(44,21);printf("%c%c", 176, 176);

        at(72,4);for(i=1;i<=18;i++){
                    printf("%c", 177);
                    printf("%c", 175);
                }
        at(74,5);for(i=1;i<=32;i++){
                    printf("%c", 196);
                }
        at(74,7);for(i=1;i<=32;i++){
                    printf("%c", 196);
                }
        at(72,8);for(i=1;i<=18;i++){
                    printf("%c", 174);
                    printf("%c", 177);
                }
        at(85,6);for(a=1;a<=1;a++){
                    Sleep(150); at(85,6); printf("Y");
                    Sleep(50); at(86,6); printf("O");
                    Sleep(50); at(87,6); printf("U");
                    Sleep(50); at(89,6); printf("W");
                    Sleep(50); at(90,6); printf("I");
                    Sleep(50); at(91,6); printf("N");
                    Sleep(50); at(92,6); printf("!");
                    Sleep(50); at(93,6); printf("!");
                    Sleep(50); at(94,6); printf("!");
                    Sleep(600);
                }
        e=75, ee=18;for(i=1;i<=4;i++){at(e,ee);printf("%c", 179);ee++;}
        at(76,18);printf("1%c Rematch.", 175);
        at(76,19);printf("2%c Change the difficulty mode.", 175);
        at(76,20);printf("3%c Back to main menu.", 175);
        at(76,21);printf("4%c Exit.", 175);
        at(75,23);printf("%c ", 175);
        at(77,23);scanf("%d", &opt);

    return(opt);
    }

    int youlose(){
        lineatransver();

        at(28,7);printf("Tic Tac Toe");

        at(19,6);for(i=1;i<=29;i++){
                    printf("%c", 196);
                }
        at(19,8);for(i=1;i<=29;i++){
                    printf("%c", 196);
                }

        k=19; kk=7;
        kkk=47;
        for(i=1;i<=5;i++){
            Sleep(75);at(k,kk);printf("%c", 62);
            k++;
            Sleep(75);at(kkk,kk);printf("%c", 60);
            kkk--;
        }

        k=29; kk=16; //KKK
        for(x=0;x<3;x++){
            at(k, kk);for(y=0;y<3;y++){
                printf("[%c]", gato[x][y]);
            }
            printf("\n");
            kk++;
        }

        at(21,13);printf("%c%c", 176, 176);
        at(23,13);for(i=1;i<=21;i++){printf("%c", 158);}
        at(44,13);printf("%c%c", 176, 176);
        at(21,21);printf("%c%c", 176, 176);
        at(23,21);for(i=1;i<=21;i++){printf("%c", 158);}
        at(44,21);printf("%c%c", 176, 176);

        at(72,4);for(i=1;i<=18;i++){
                    printf("%c", 177);
                    printf("%c", 175);
                }
        at(74,5);for(i=1;i<=32;i++){
                    printf("%c", 196);
                }
        at(74,7);for(i=1;i<=32;i++){
                    printf("%c", 196);
                }
        at(72,8);for(i=1;i<=18;i++){
                    printf("%c", 174);
                    printf("%c", 177);
                }
        at(85,6);for(a=1;a<=1;a++){
                    Sleep(150); at(85,6); printf("Y");
                    Sleep(50); at(86,6); printf("O");
                    Sleep(50); at(87,6); printf("U");
                    Sleep(50); at(89,6); printf("L");
                    Sleep(50); at(90,6); printf("O");
                    Sleep(50); at(91,6); printf("S");
                    Sleep(50); at(92,6); printf("E");
                    Sleep(50); at(94,6); printf(":(");
                    Sleep(600);
                }
        e=75, ee=18;for(i=1;i<=4;i++){at(e,ee);printf("%c", 179);ee++;}
        at(76,18);printf("1%c Rematch.", 175);
        at(76,19);printf("2%c Change the difficulty mode.", 175);
        at(76,20);printf("3%c Back to main menu.", 175);
        at(76,21);printf("4%c Exit.", 175);
        at(75,23);printf("%c ", 175);
        at(77,23);scanf("%d", &opt);

    return(opt);
    }

    int main(){

        srand(time(NULL));
        int player=0, plays=1;

            system("COLOR 1");
            system("COLOR 9");
            at(55,7);printf("Welcome to:");
            at(55,9);printf("Tic-Tac-Toe");

            marco(); //HOST

            marcoint(); //HOST

            k=15; kk=7; //KKK
            for(x=0;x<3;x++){
                at(k,kk);for(y=0;y<3;y++){
                    gato[x][y]=' ';
                    printf("[%c]", gato[x][y]);
                }
                printf("\n");
                kk++;
            }
            k=96; kk=7; //KKK
            for(x=0;x<3;x++){
                at(k,kk);for(y=0;y<3;y++){
                    gato[x][y]=' ';
                    printf("[%c]", gato[x][y]);
                }
                printf("\n");
                kk++;
            }
            at(30,19);for(i=1;i<=30;i++){ //BARRA EN HOST
                        printf("%c", 176);
                        printf("%c", 175);
                    }
            do{
                at(51,13);printf("1%cPlay vs computer", 175);
                at(51,14);printf("2%cPlay vs friend", 175);
                at(51,15);printf("3%cExit", 175);
                fflush(stdin);
                at(53,17);printf("Select: ");
                scanf("%d", &vs);

                if(vs==1){ // VS COMPUTER
                    at(51,24);for(i=1;i<=17;i++){
                                printf("%c", 238);
                            }
                    at(51,22);printf("Whats your name?");
                    at(50,23);printf(">> ");
                    at(53,23);scanf("%s", &name);
                    fflush(stdin);
                    do{
                        do{
                            system("cls");

                            marco();

                            at(45,5);printf("Choose the difficulty mode, %s:", name);

                            at(40,6);for(i=1;i<=20;i++){
                                        printf("%c", 238);
                                        printf("%c", 238);
                                    }
                            at(25,15);for(i=1;i<=35;i++){
                                        printf("%c", 158);
                                        printf("%c", 158);
                                    }

                            at(51,7);printf("%c Press 'E' to easy", 175);

                            at(51,9);printf("%c Press 'H' to hard", 175);
                            fflush(stdin);
                            at(51,11);printf("Select: ");
                            scanf("%s", &mode);

                            if(mode=='E' || mode=='e'){
                                at(40,6);for(i=1;i<=20;i++){
                                            printf("%c", 238);
                                            printf("%c", 238);
                                        }
                                do{
                                    for(x=0;x<3;x++){
                                        for(y=0;y<3;y++){
                                            gato[x][y]=' ';
                                        }
                                    }
                                    marco();
                                    at(25,15);for(i=1;i<=35;i++){
                                                printf("%c", 158);
                                                printf("%c", 158);
                                            }
                                    do{
                                        at(49,17);printf("Choose your character:");
                                        at(47,18);for(i=1;i<=13;i++){
                                                printf("%c", 196);
                                                printf("%c", 196);
                                        }

                                        at(49,20);printf(">> X <<", 175, 174);
                                        at(64,20);printf(">> O <<", 175, 174);
                                        fflush(stdin);
                                        at(58,22);printf("%c ", 175);
                                        scanf("%s", &fig);

                                        switch(fig){
                                            case 'X': casefig=1;
                                            break;
                                            case 'x': casefig=1;
                                            break;
                                            case 'O': casefig=1;
                                            break;
                                            case 'o': casefig=1;
                                            break;
                                            default: at(60,22);printf("Try again!");
                                                        Sleep(700);at(60,22);for(i=1;i<=10;i++){printf(" ");}
                                        }
                                    }while(casefig!=1);
                                    casefig=0;
                                    system("cls");

                                    letstart();

                                    do{   //CICLO
                                        lineatransver(); //INTERFAZ DE JUEGO

                                        k=29; kk=16; //KKK
                                        for(x=0;x<3;x++){
                                            at(k, kk);for(y=0;y<3;y++){
                                                printf("[%c]", gato[x][y]);
                                            }
                                            printf("\n");
                                            kk++;
                                        }

                                        frameboardC();

                                        at(72,5);for(i=1;i<=18;i++){ //UP
                                            printf("%c", 177);
                                            printf("%c", 175);
                                        }
                                        at(72,24);for(i=1;i<=18;i++){ //DOWN
                                            printf("%c", 177);
                                            printf("%c", 175);
                                        }

                                        at(81,8);printf("Choose the position");
                                        at(80,9);for(i=1;i<=11;i++){
                                            printf("%c", 205);
                                            printf("%c", 205);
                                        }
                                        k=87, kk=13; //KKK
                                        c=1;
                                        for(a=0;a<3;a++){
                                            at(k,kk);for(b=0;b<3;b++){
                                                printf("[%d]",c);
                                                c++;
                                            }
                                            printf("\n");
                                            kk++;
                                        }
                                        c=1;

                                        at(29,7);printf("Your turn");

                                        at(19,6);for(i=1;i<=29;i++){
                                            printf("%c", 196);
                                        }
                                        at(19,8);for(i=1;i<=29;i++){
                                            printf("%c", 196);
                                        }

                                        k=19; kk=7;
                                        kkk=47;
                                        for(i=1;i<=5;i++){
                                            Sleep(75);at(k,kk);printf("%c", 62);
                                            k++;
                                            Sleep(75);at(kkk,kk);printf("%c", 60);
                                            kkk--;
                                        }

                                        do{
                                            at(81,19);printf("Position %c ", 175);
                                            scanf("%d", &coor);
                                            switch(coor){
                                                case 1: coorxh=0; cooryh=0; break;
                                                case 2: coorxh=0; cooryh=1; break;
                                                case 3: coorxh=0; cooryh=2; break;
                                                case 4: coorxh=1; cooryh=0; break;
                                                case 5: coorxh=1; cooryh=1; break;
                                                case 6: coorxh=1; cooryh=2; break;
                                                case 7: coorxh=2; cooryh=0; break;
                                                case 8: coorxh=2; cooryh=1; break;
                                                case 9: coorxh=2; cooryh=2; break;
                                            }
                                            if(gato[coorxh][cooryh]=='X' || gato[coorxh][cooryh]=='O' || coor>9 || coor<1){
                                                chooseagainC();
                                            }
                                        }while(gato[coorxh][cooryh]=='X' || gato[coorxh][cooryh]=='O' || coor>9 || coor<1);

                                        if(fig=='X' || fig=='x'){
                                            gato[coorxh][cooryh] = 'X';
                                        }
                                        if(fig=='O' || fig=='o'){
                                            gato[coorxh][cooryh] = 'O';
                                        }

                                        k=29; kk=16; //KKK
                                        for(x=0;x<3;x++){
                                            at(k, kk);for(y=0;y<3;y++){
                                                printf("[%c]", gato[x][y]);
                                            }
                                            printf("\n");
                                            kk++;
                                        }
                                        if(plays>=3){
                                            if( gato[0][0]=='X' && gato[0][1]=='X' && gato[0][2]=='X' ||
                                                gato[1][0]=='X' && gato[1][1]=='X' && gato[1][2]=='X' ||
                                                gato[2][0]=='X' && gato[2][1]=='X' && gato[2][2]=='X' ||

                                                gato[0][0]=='X' && gato[1][0]=='X' && gato[2][0]=='X' ||
                                                gato[0][1]=='X' && gato[1][1]=='X' && gato[2][1]=='X' ||
                                                gato[0][2]=='X' && gato[1][2]=='X' && gato[2][2]=='X' ||

                                                gato[0][0]=='X' && gato[1][1]=='X' && gato[2][2]=='X' ||
                                                gato[0][2]=='X' && gato[1][1]=='X' && gato[2][0]=='X' ){
                                                if(fig=='X'){
                                                    player=1;
                                                }
                                                if(fig=='O'){
                                                    player=1;
                                                }
                                            }
                                            if( gato[0][0]=='O' && gato[0][1]=='O' && gato[0][2]=='O' ||
                                                gato[1][0]=='O' && gato[1][1]=='O' && gato[1][2]=='O' ||
                                                gato[2][0]=='O' && gato[2][1]=='O' && gato[2][2]=='O' ||

                                                gato[0][0]=='O' && gato[1][0]=='O' && gato[2][0]=='O' ||
                                                gato[0][1]=='O' && gato[1][1]=='O' && gato[2][1]=='O' ||
                                                gato[0][2]=='O' && gato[1][2]=='O' && gato[2][2]=='O' ||

                                                gato[0][0]=='O' && gato[1][1]=='O' && gato[2][2]=='O' ||
                                                gato[0][2]=='O' && gato[1][1]=='O' && gato[2][0]=='O' ){
                                                if(fig=='O'){
                                                    player=1;
                                                }
                                                if(fig=='X'){
                                                    player=1;
                                                }
                                            }
                                        }
                                        at(27,7);printf("Computer turn");

                                        at(19,6);for(i=1;i<=29;i++){
                                            printf("%c", 196);
                                        }
                                        at(19,8);for(i=1;i<=29;i++){
                                            printf("%c", 196);
                                        }

                                        k=19; kk=7;
                                        kkk=47;
                                        for(i=1;i<=5;i++){
                                            Sleep(75);at(k,kk);printf("%c", 62);
                                            k++;
                                            Sleep(75);at(kkk,kk);printf("%c", 60);
                                            kkk--;
                                        }
                                        Sleep(1000);
                                        system("cls");
                                        if(player!=1){ //COMPUTER TURN
                                            do{ //MODO EASY >NO CAMBIAR<
                                                coorxc=rand()%3;
                                                cooryc=rand()%3;
                                            }while(gato[coorxc][cooryc]=='X' || gato[coorxc][cooryc]=='O');
                                            /*if(plays>=2){
                                                do{
                                                    coorxc=0;
                                                    cooryc=2;
                                                }while(coorxh==0 && cooryh==0 && coorxh==0 && cooryh==1);
                                                do{
                                                    coorxc=2;
                                                    cooryc=2;
                                                }while( coorxh=='0' && cooryh=='0' ||
                                                        coorxh=='0' && cooryh=='2' ||
                                                        coorxh=='2' && cooryh=='0' ||
                                                        coorxh=='2' && cooryh=='2' ||
                                                        coorxh=='1' && cooryh=='1' );
                                            }*/
                                            /*if(plays>=5){
                                                if(coor==1){
                                                    do{
                                                        do{
                                                            coorxc=rand()%3;
                                                            cooryc=rand()%3;
                                                        }while(coorxc!=1 && cooryc!=1);
                                                    }while(gato[coorxc][cooryc]=='X' || gato[coorxc][cooryc]=='O');
                                                }
                                            }*/

                                            if(fig=='X' || fig=='x'){
                                                gato[coorxc][cooryc] = 'O';
                                            }
                                            if(fig=='O' || fig=='o'){
                                                gato[coorxc][cooryc] = 'X';
                                            }

                                            k=29; kk=16; //KKK
                                            for(x=0;x<3;x++){
                                                at(k, kk);for(y=0;y<3;y++){
                                                    printf("[%c]", gato[x][y]);
                                                }
                                                printf("\n");
                                                kk++;
                                                plays++;
                                            }
                                        }
                                        if(plays>=3){
                                            if( gato[0][0]=='X' && gato[0][1]=='X' && gato[0][2]=='X' ||
                                                gato[1][0]=='X' && gato[1][1]=='X' && gato[1][2]=='X' ||
                                                gato[2][0]=='X' && gato[2][1]=='X' && gato[2][2]=='X' ||

                                                gato[0][0]=='X' && gato[1][0]=='X' && gato[2][0]=='X' ||
                                                gato[0][1]=='X' && gato[1][1]=='X' && gato[2][1]=='X' ||
                                                gato[0][2]=='X' && gato[1][2]=='X' && gato[2][2]=='X' ||

                                                gato[0][0]=='X' && gato[1][1]=='X' && gato[2][2]=='X' ||
                                                gato[0][2]=='X' && gato[1][1]=='X' && gato[2][0]=='X' ){
                                                if(fig=='X' || fig=='x'){
                                                    switch(youwin()){
                                                        case 3: system("cls");
                                                                main();
                                                        break;
                                                        case 4: goodbye();
                                                                return 0;
                                                        break;
                                                    }
                                                    player=1;
                                                }
                                                if(fig=='O' || fig=='o'){
                                                    switch(youlose()){
                                                        case 3: system("cls");
                                                                main();
                                                        break;
                                                        case 4: goodbye();
                                                                return 0;
                                                        break;
                                                    }
                                                    player=1;
                                                }
                                            }
                                            if( gato[0][0]=='O' && gato[0][1]=='O' && gato[0][2]=='O' ||
                                                gato[1][0]=='O' && gato[1][1]=='O' && gato[1][2]=='O' ||
                                                gato[2][0]=='O' && gato[2][1]=='O' && gato[2][2]=='O' ||

                                                gato[0][0]=='O' && gato[1][0]=='O' && gato[2][0]=='O' ||
                                                gato[0][1]=='O' && gato[1][1]=='O' && gato[2][1]=='O' ||
                                                gato[0][2]=='O' && gato[1][2]=='O' && gato[2][2]=='O' ||

                                                gato[0][0]=='O' && gato[1][1]=='O' && gato[2][2]=='O' ||
                                                gato[0][2]=='O' && gato[1][1]=='O' && gato[2][0]=='O' ){
                                                if(fig=='O' || fig=='o'){
                                                    switch(youwin()){
                                                        case 3: system("cls");
                                                                main();
                                                        break;
                                                        case 4: goodbye();
                                                                return 0;
                                                        break;
                                                    }
                                                    player=1;
                                                }
                                                if(fig=='X' || fig=='x'){
                                                    switch(youlose()){
                                                        case 3: system("cls");
                                                                main();
                                                        break;
                                                        case 4: goodbye();
                                                                return 0;
                                                        break;
                                                    }
                                                    player=1;
                                                }
                                            }
                                        }
                                    }while(player!=1);
                                    system("cls");
                                    plays=1;
                                    player=0;
                                }while(opt==1);
                                opt=0;
                            }
                        }while(opt==2);
                        opt=0;

                        if(mode=='H' || mode=='h'){ //POR DEFINIR
                            /*at(55,19);printf("Back soon...");
                            at(47,20);for(i=1;i<=13;i++){
                                    printf("%c", 196);
                                    printf("%c", 196);
                            }*/
                            printf("\nChoose your character:\n");
                            printf("1.X\n2.O\n");
                            printf("Select: ");
                            scanf("%d", &fig);
                            for(i=1;i<=20;i++){
                                    printf("%c", 176);
                                    printf("%c", 175);
                                }
                            printf("\n\n\tLet's start!\n");
                            do{   //CICLO
                                printf("\nChoose a coord:\n");
                                for(a=0;a<3;a++){
                                    for(b=0;b<3;b++){
                                        printf("(%d,%d)", a, b);
                                    }
                                    printf("\n");
                                }
                                do{
                                    printf("\nCoord %c x: ", 175);
                                    scanf("%d", &coorxh);
                                    printf("Coord %c y: ", 175);
                                    scanf("%d", &cooryh);
                                        if(gato[coorxh][cooryh]=='X' || gato[coorxh][cooryh]=='O' || coorxh>2 || cooryh>2){
                                            printf("Try again, dude\n");
                                        }

                                }while(gato[coorxh][cooryh]=='X' || gato[coorxh][cooryh]=='O' || coorxh>2 || cooryh>2);

                                if(fig==1){
                                    gato[coorxh][cooryh] = 'X';
                                }
                                if(fig==2){
                                    gato[coorxh][cooryh] = 'O';
                                }

                                for(x=0;x<3;x++){
                                    for(y=0;y<3;y++){
                                        printf("[%c]", gato[x][y]);
                                    }
                                    printf("\n");
                                }
                                if(plays>=3){
                                    if( gato[0][0]=='X' && gato[0][1]=='X' && gato[0][2]=='X' ||
                                        gato[1][0]=='X' && gato[1][1]=='X' && gato[1][2]=='X' ||
                                        gato[2][0]=='X' && gato[2][1]=='X' && gato[2][2]=='X' ||

                                        gato[0][0]=='X' && gato[1][0]=='X' && gato[2][0]=='X' ||
                                        gato[0][1]=='X' && gato[1][1]=='X' && gato[2][1]=='X' ||
                                        gato[0][2]=='X' && gato[1][2]=='X' && gato[2][2]=='X' ||

                                        gato[0][0]=='X' && gato[1][1]=='X' && gato[2][2]=='X' ||
                                        gato[0][2]=='X' && gato[1][1]=='X' && gato[2][0]=='X' ){
                                        if(fig==1){
                                            player=1;
                                        }
                                        if(fig==2){
                                            player=1;
                                        }
                                    }
                                    if( gato[0][0]=='O' && gato[0][1]=='O' && gato[0][2]=='O' ||
                                        gato[1][0]=='O' && gato[1][1]=='O' && gato[1][2]=='O' ||
                                        gato[2][0]=='O' && gato[2][1]=='O' && gato[2][2]=='O' ||

                                        gato[0][0]=='O' && gato[1][0]=='O' && gato[2][0]=='O' ||
                                        gato[0][1]=='O' && gato[1][1]=='O' && gato[2][1]=='O' ||
                                        gato[0][2]=='O' && gato[1][2]=='O' && gato[2][2]=='O' ||

                                        gato[0][0]=='O' && gato[1][1]=='O' && gato[2][2]=='O' ||
                                        gato[0][2]=='O' && gato[1][1]=='O' && gato[2][0]=='O' ){
                                        if(fig==2){
                                            player=1;
                                        }
                                        if(fig==1){
                                            player=1;
                                        }
                                    }
                                }
                                if(player!=1){
                                    printf("\nComputer turn:\n"); //POR DEFINIR
                                    if(plays>=2){
                                        do{
                                            coorxc=0;
                                            cooryc=2;
                                        }while(coorxh==0 && cooryh==0 && coorxh==0 && cooryh==1);
                                        do{
                                            coorxc=2;
                                            cooryc=2;
                                        }while( coorxh=='0' && cooryh=='0' ||
                                                coorxh=='0' && cooryh=='2' ||
                                                coorxh=='2' && cooryh=='0' ||
                                                coorxh=='2' && cooryh=='2' ||
                                                coorxh=='1' && cooryh=='1' );
                                    }
                                    else{
                                        do{
                                            coorxc=1;
                                            cooryc=1;
                                        }while( coorxh=='0' && cooryh=='0' ||
                                                coorxh=='0' && cooryh=='2' ||
                                                coorxh=='2' && cooryh=='0' ||
                                                coorxh=='2' && cooryh=='2' );
                                        do{
                                            coorxc=2;
                                            cooryc=0;
                                        }while( coorxh=='0' && cooryh=='1' ||
                                                coorxh=='1' && cooryh=='2' );
                                        do{
                                            coorxc=0;
                                            cooryc=2;
                                        }while( coorxh=='1' && cooryh=='0' ||
                                                coorxh=='2' && cooryh=='1' );
                                    }

                                    if(fig==1){
                                        gato[coorxc][cooryc] = 'O';
                                    }
                                    if(fig==2){
                                        gato[coorxc][cooryc] = 'X';
                                    }

                                    for(x=0;x<3;x++){
                                        for(y=0;y<3;y++){
                                            printf("[%c]", gato[x][y]);
                                            plays++;
                                        }
                                        printf("\n");
                                    }
                                }
                                if(plays>=3){
                                    if( gato[0][0]=='X' && gato[0][1]=='X' && gato[0][2]=='X' ||
                                        gato[1][0]=='X' && gato[1][1]=='X' && gato[1][2]=='X' ||
                                        gato[2][0]=='X' && gato[2][1]=='X' && gato[2][2]=='X' ||

                                        gato[0][0]=='X' && gato[1][0]=='X' && gato[2][0]=='X' ||
                                        gato[0][1]=='X' && gato[1][1]=='X' && gato[2][1]=='X' ||
                                        gato[0][2]=='X' && gato[1][2]=='X' && gato[2][2]=='X' ||

                                        gato[0][0]=='X' && gato[1][1]=='X' && gato[2][2]=='X' ||
                                        gato[0][2]=='X' && gato[1][1]=='X' && gato[2][0]=='X' ){
                                        if(fig==1){
                                            printf("\n\tYou won!!!\n");
                                            player=1;
                                        }
                                        if(fig==2){
                                            printf("\n\tComputer won, loser\n");
                                            player=1;
                                        }
                                    }
                                    if( gato[0][0]=='O' && gato[0][1]=='O' && gato[0][2]=='O' ||
                                        gato[1][0]=='O' && gato[1][1]=='O' && gato[1][2]=='O' ||
                                        gato[2][0]=='O' && gato[2][1]=='O' && gato[2][2]=='O' ||

                                        gato[0][0]=='O' && gato[1][0]=='O' && gato[2][0]=='O' ||
                                        gato[0][1]=='O' && gato[1][1]=='O' && gato[2][1]=='O' ||
                                        gato[0][2]=='O' && gato[1][2]=='O' && gato[2][2]=='O' ||

                                        gato[0][0]=='O' && gato[1][1]=='O' && gato[2][2]=='O' ||
                                        gato[0][2]=='O' && gato[1][1]=='O' && gato[2][0]=='O' ){
                                        if(fig==2){
                                            printf("\n\tYou won!!!\n");
                                            player=1;
                                        }
                                        if(fig==1){
                                            printf("\n\tComputer won, loser\n");
                                            player=1;
                                        }
                                    }
                                }
                            }while(player!=1);
                        }
                        else{
                            at(58,11);printf("Try again!");
                            Sleep(700);at(58,11);for(i=1;i<=10;i++){printf(" ");}
                            again=2;
                        }
                    }while(again==2);
                    again=0;
                }
                if(vs==2){ // PERSON VS PERSON
                    /*at(50,20);printf("Please, type your name");
                    at(49,21);for(i=1;i<=24;i++){
                                printf("%c", 196);
                            }
                    e=60, ee=22;for(i=1;i<=4;i++){at(e,ee);printf("%c", 124);ee++;}
                    e=61, ee=22;for(i=1;i<=4;i++){at(e,ee);printf("%c", 158);ee++;}
                    e=62, ee=22;for(i=1;i<=4;i++){at(e,ee);printf("%c", 124);ee++;}
                    at(35,25);for(i=1;i<=17;i++){
                                printf("%c", 238);
                            }
                    at(25,24);printf("Player 1: ");
                    at(35,24);scanf("%s", &namep1);
                    fflush(stdin);
                    at(80,25);for(i=1;i<=17;i++){
                                printf("%c", 238);
                            }
                    at(70,24);printf("Player 2: ");
                    at(80,24);scanf("%s", &namep2);
                    fflush(stdin);*/
                    do{
                        /*system("cls");

                        marco();
                        at(27,6);for(i=1;i<=66;i++){
                                    printf("%c", 196);
                                }
                        at(27,23);for(i=1;i<=66;i++){
                                    printf("%c", 196);
                                }
                        e=60, ee=8;for(i=1;i<=14;i++){at(e,ee);printf("%c", 176);ee++;}

                        do{
                            at(30,8);printf("Choose your character,");at(30,9);printf("%s", namep1);
                            at(68,8);printf("Choose your character,");at(68,9);printf("%s", namep2);

                            at(30,12);for(i=1;i<=23;i++){
                                        printf("%c", 205);
                                    }
                            at(30,16);for(i=1;i<=23;i++){
                                        printf("%c", 205);
                                    }
                            at(31,13);printf(">> X <<");
                            at(45,13);printf(">> O <<");
                            fflush(stdin);
                            at(39,15);printf("%c ", 175);
                            scanf("%s", &figp1);

                            switch(figp1){
                                case 'X': casefig=1;
                                break;
                                case 'x': casefig=1;
                                break;
                                case 'O': casefig=1;
                                break;
                                case 'o': casefig=1;
                                break;
                                default: at(41,15);printf("Try again!");
                                        Sleep(700);at(41,15);for(i=1;i<=10;i++){printf(" ");}
                            }
                        }while(casefig!=1);
                        casefig=0;
                        do{
                            do{
                                at(68,12);for(i=1;i<=23;i++){
                                            printf("%c", 205);
                                        }
                                at(68,16);for(i=1;i<=23;i++){
                                            printf("%c", 205);
                                        }
                                at(69,13);printf(">> X <<");
                                at(83,13);printf(">> O <<");
                                fflush(stdin);
                                at(77,15);printf("%c ", 175);
                                scanf("%s", &figp2);
                                switch(figp2){
                                    case 'X': casefig=1;
                                    break;
                                    case 'x': casefig=1;
                                    break;
                                    case 'O': casefig=1;
                                    break;
                                    case 'o': casefig=1;
                                    break;
                                    default: at(79,15);printf("Try again!");
                                            Sleep(700);at(79,15);for(i=1;i<=10;i++){printf(" ");}
                                }
                            }while(casefig!=1);
                            casefig=0;

                                if(figp2==figp1){
                                    Sleep(150); at(68,18); printf("C");
                                    Sleep(30); at(69,18); printf("h");
                                    Sleep(30); at(70,18); printf("a");
                                    Sleep(30); at(71,18); printf("r");
                                    Sleep(30); at(72,18); printf("a");
                                    Sleep(30); at(73,18); printf("c");
                                    Sleep(30); at(74,18); printf("t");
                                    Sleep(30); at(75,18); printf("e");
                                    Sleep(30); at(76,18); printf("r");
                                    Sleep(30); at(78,18); printf("a");
                                    Sleep(30); at(79,18); printf("l");
                                    Sleep(30); at(80,18); printf("r");
                                    Sleep(30); at(81,18); printf("e");
                                    Sleep(30); at(82,18); printf("a");
                                    Sleep(30); at(83,18); printf("d");
                                    Sleep(30); at(84,18); printf("y");
                                    Sleep(30); at(86,18); printf("c");
                                    Sleep(30); at(87,18); printf("h");
                                    Sleep(30); at(88,18); printf("o");
                                    Sleep(30); at(89,18); printf("s");
                                    Sleep(30); at(90,18); printf("e");
                                    Sleep(30); at(91,18); printf("n");
                                    Sleep(30); at(92,18); printf("!!!");
                                    Sleep(30); at(68,19); printf("C");
                                    Sleep(30); at(69,19); printf("h");
                                    Sleep(30); at(70,19); printf("o");
                                    Sleep(30); at(71,19); printf("o");
                                    Sleep(30); at(72,19); printf("s");
                                    Sleep(30); at(73,19); printf("e");
                                    Sleep(30); at(75,19); printf("a");
                                    Sleep(30); at(76,19); printf("n");
                                    Sleep(30); at(77,19); printf("o");
                                    Sleep(30); at(78,19); printf("t");
                                    Sleep(30); at(79,19); printf("h");
                                    Sleep(30); at(80,19); printf("e");
                                    Sleep(30); at(81,19); printf("r");
                                    Sleep(30); at(83,19); printf("o");
                                    Sleep(30); at(84,19); printf("n");
                                    Sleep(30); at(85,19); printf("e");
                                    Sleep(1200);
                                    at(79,15);for(i=1;i<=20;i++){printf(" ");}
                                    at(68,18);for(i=1;i<=28;i++){printf(" ");}
                                    at(68,19);for(i=1;i<=28;i++){printf(" ");}
                                }

                        }while(figp2==figp1);*/
                        casefig=0;
                        system("cls");
                        letstart();
                        // SINCE HERE
                        lineatransverpvp();
                        do{                                             //LETS START
                            k=87, kk=13; //KKK
                            c=1;
                            for(a=0;a<3;a++){
                                at(k,kk);for(b=0;b<3;b++){
                                    printf("[%d]",c);
                                    c++;
                                }
                                printf("\n");
                                kk++;
                            }
                            c=1;
                            printf("\nCoord %c ", 175);
                            scanf("%d", &coor);

                            /*do{
                                printf("\nCoord %c ", 175);
                                scanf("%d", &coor);
                                switch(coor){
                                    case 1: coorx=0; coory=0; break;
                                    case 2: coorx=0; coory=1; break;
                                    case 3: coorx=0; coory=2; break;
                                    case 4: coorx=1; coory=0; break;
                                    case 5: coorx=1; coory=1; break;
                                    case 6: coorx=1; coory=2; break;
                                    case 7: coorx=2; coory=0; break;
                                    case 8: coorx=2; coory=1; break;
                                    case 9: coorx=2; coory=2; break;
                                }

                                if(gato[coorx][coory]=='X' || gato[coorx][coory]=='O' || coor>9 || coor<1){
                                    printf("\n\tChoose again\n");
                                }
                            }while(gato[coorx][coory]=='X' || gato[coorx][coory]=='O' || coor>9 || coor<1);*/

                            if(figp1=='X' || figp1=='x'){
                                    gato[coorx][coory]='X';
                            }
                            else if(figp1=='O' || figp1=='o'){
                                    gato[coorx][coory]='O';
                            }

                            system("cls");
                            for(i=1;i<=20;i++){
                                printf("%c", 176);
                                printf("%c", 175);
                            }
                            printf("\n");
                            for(x=0;x<3;x++){
                                for(y=0;y<3;y++){
                                    printf("[%c]", gato[x][y]);
                                }
                                printf("\n");
                            }
                            for(i=1;i<=20;i++){
                                printf("%c", 176);
                                printf("%c", 175);
                            }
                            if(plays>=3){
                                if( gato[0][0]=='X' && gato[0][1]=='X' && gato[0][2]=='X' ||
                                    gato[1][0]=='X' && gato[1][1]=='X' && gato[1][2]=='X' ||
                                    gato[2][0]=='X' && gato[2][1]=='X' && gato[2][2]=='X' ||

                                    gato[0][0]=='X' && gato[1][0]=='X' && gato[2][0]=='X' ||
                                    gato[0][1]=='X' && gato[1][1]=='X' && gato[2][1]=='X' ||
                                    gato[0][2]=='X' && gato[1][2]=='X' && gato[2][2]=='X' ||

                                    gato[0][0]=='X' && gato[1][1]=='X' && gato[2][2]=='X' ||
                                    gato[0][2]=='X' && gato[1][1]=='X' && gato[2][0]=='X' ){
                                    if(figp1=='X'){
                                        player=1;
                                    }
                                    if(figp2=='X'){
                                        player=1;
                                    }
                                }
                                if( gato[0][0]=='O' && gato[0][1]=='O' && gato[0][2]=='O' ||
                                    gato[1][0]=='O' && gato[1][1]=='O' && gato[1][2]=='O' ||
                                    gato[2][0]=='O' && gato[2][1]=='O' && gato[2][2]=='O' ||

                                    gato[0][0]=='O' && gato[1][0]=='O' && gato[2][0]=='O' ||
                                    gato[0][1]=='O' && gato[1][1]=='O' && gato[2][1]=='O' ||
                                    gato[0][2]=='O' && gato[1][2]=='O' && gato[2][2]=='O' ||

                                    gato[0][0]=='O' && gato[1][1]=='O' && gato[2][2]=='O' ||
                                    gato[0][2]=='O' && gato[1][1]=='O' && gato[2][0]=='O' ){
                                    if(figp1=='O'){
                                        player=1;
                                    }
                                    if(figp2=='O'){
                                        player=1;
                                    }
                                }
                            }
                            if(player!=1){
                                printf("\n\tTurn player 2 \n"); //PLAYER 2
                                printf("\tChoose your coordinate:\n");
                                c=1;
                                for(a=0;a<3;a++){
                                    for(b=0;b<3;b++){
                                        printf("[%d]",c);
                                        c++;
                                    }
                                    printf("\n");
                                }
                                c=1;
                                do{
                                    printf("\nCoord %c ", 175);
                                    scanf("%d", &coor);
                                    switch(coor){
                                        case 1: coorx=0; coory=0; break;
                                        case 2: coorx=0; coory=1; break;
                                        case 3: coorx=0; coory=2; break;
                                        case 4: coorx=1; coory=0; break;
                                        case 5: coorx=1; coory=1; break;
                                        case 6: coorx=1; coory=2; break;
                                        case 7: coorx=2; coory=0; break;
                                        case 8: coorx=2; coory=1; break;
                                        case 9: coorx=2; coory=2; break;
                                    }

                                    if(gato[coorx][coory]=='X' || gato[coorx][coory]=='O' || coor>9 || coor<1){
                                        printf("\n\tChoose again\n");
                                    }
                                }while(gato[coorx][coory]=='X' || gato[coorx][coory]=='O' || coor>9 || coor<1);

                                if(figp2=='X' || figp2=='x'){
                                    gato[coorx][coory]='X';
                                }
                                else if(figp2=='O' || figp2=='o'){
                                    gato[coorx][coory]='O';
                                }

                                system("cls");
                                for(i=1;i<=20;i++){
                                    printf("%c", 176);
                                    printf("%c", 175);
                                }
                                printf("\n");
                                    for(x=0;x<3;x++){
                                        for(y=0;y<3;y++){
                                            printf("[%c]", gato[x][y]);
                                            plays++;
                                        }
                                        printf("\n");
                                    }
                                for(i=1;i<=20;i++){
                                    printf("%c", 176);
                                    printf("%c", 175);
                                }
                            }
                            if(plays>=3){
                                if( gato[0][0]=='X' && gato[0][1]=='X' && gato[0][2]=='X' ||
                                    gato[1][0]=='X' && gato[1][1]=='X' && gato[1][2]=='X' ||
                                    gato[2][0]=='X' && gato[2][1]=='X' && gato[2][2]=='X' ||

                                    gato[0][0]=='X' && gato[1][0]=='X' && gato[2][0]=='X' ||
                                    gato[0][1]=='X' && gato[1][1]=='X' && gato[2][1]=='X' ||
                                    gato[0][2]=='X' && gato[1][2]=='X' && gato[2][2]=='X' ||

                                    gato[0][0]=='X' && gato[1][1]=='X' && gato[2][2]=='X' ||
                                    gato[0][2]=='X' && gato[1][1]=='X' && gato[2][0]=='X' ){
                                    if(figp1=='X' || figp1=='x'){
                                        printf("\n\tPlayer 1 won!!!\n");
                                        player=1;
                                    }
                                    if(figp2=='X' || figp2=='x'){
                                        printf("\n\tPlayer 2 won!!!\n");
                                        player=1;
                                    }
                                }
                                if( gato[0][0]=='O' && gato[0][1]=='O' && gato[0][2]=='O' ||
                                    gato[1][0]=='O' && gato[1][1]=='O' && gato[1][2]=='O' ||
                                    gato[2][0]=='O' && gato[2][1]=='O' && gato[2][2]=='O' ||

                                    gato[0][0]=='O' && gato[1][0]=='O' && gato[2][0]=='O' ||
                                    gato[0][1]=='O' && gato[1][1]=='O' && gato[2][1]=='O' ||
                                    gato[0][2]=='O' && gato[1][2]=='O' && gato[2][2]=='O' ||

                                    gato[0][0]=='O' && gato[1][1]=='O' && gato[2][2]=='O' ||
                                    gato[0][2]=='O' && gato[1][1]=='O' && gato[2][0]=='O' ){
                                    if(figp1=='O' || figp1=='o'){
                                        printf("\n\tPlayer 1 won!!!\n");
                                        player=1;
                                    }
                                    if(figp2=='O' || figp2=='o'){
                                        printf("\n\tPlayer 2 won!!!\n");
                                        player=1;
                                    }
                                }
                            }
                        }while(player!=1);
                    }while(again==2);
                    again=0;
                }
                if(vs==3){
                    goodbye();
                    return 0;
                }
                else{
                    at(61,17);printf("Try again!");
                    Sleep(700);at(61,17);for(i=1;i<=10;i++){printf(" ");}
                    again=1;
                }
            }while(again==1);
            again=0;
    return 0;
    }

    void at(int xx, int yy){
        HANDLE consola;
        consola = GetStdHandle(STD_OUTPUT_HANDLE);
        COORD coordenadas;
        coordenadas.X= xx;
        coordenadas.Y= yy;
        SetConsoleCursorPosition(consola,coordenadas);
    }
