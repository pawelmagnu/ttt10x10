#include <stdio.h>
#include <stdbool.h>
#define INF 100000000
#define WYGRANA 10000

void wypisz(char plansza[10][10])
{
    printf(" %c | %c | %c | %c | %c | %c | %c | %c | %c | %c \n",plansza[0][0],plansza[0][1],plansza[0][2],plansza[0][3],plansza[0][4],plansza[0][5],plansza[0][6],plansza[0][7],plansza[0][8],plansza[0][9]);
    printf("---+---+---+---+---+---+---+---+---+---\n");
    printf(" %c | %c | %c | %c | %c | %c | %c | %c | %c | %c \n",plansza[1][0],plansza[1][1],plansza[1][2],plansza[1][3],plansza[1][4],plansza[1][5],plansza[1][6],plansza[1][7],plansza[1][8],plansza[1][9]);
    printf("---+---+---+---+---+---+---+---+---+---\n");
    printf(" %c | %c | %c | %c | %c | %c | %c | %c | %c | %c \n",plansza[2][0],plansza[2][1],plansza[2][2],plansza[2][3],plansza[2][4],plansza[2][5],plansza[2][6],plansza[2][7],plansza[2][8],plansza[2][9]);
    printf("---+---+---+---+---+---+---+---+---+---\n");
    printf(" %c | %c | %c | %c | %c | %c | %c | %c | %c | %c \n",plansza[3][0],plansza[3][1],plansza[3][2],plansza[3][3],plansza[3][4],plansza[3][5],plansza[3][6],plansza[3][7],plansza[3][8],plansza[3][9]);
    printf("---+---+---+---+---+---+---+---+---+---\n");
    printf(" %c | %c | %c | %c | %c | %c | %c | %c | %c | %c \n",plansza[4][0],plansza[4][1],plansza[4][2],plansza[4][3],plansza[4][4],plansza[4][5],plansza[4][6],plansza[4][7],plansza[4][8],plansza[4][9]);
    printf("---+---+---+---+---+---+---+---+---+---\n");
    printf(" %c | %c | %c | %c | %c | %c | %c | %c | %c | %c \n",plansza[5][0],plansza[5][1],plansza[5][2],plansza[5][3],plansza[5][4],plansza[5][5],plansza[5][6],plansza[5][7],plansza[5][8],plansza[5][9]);
    printf("---+---+---+---+---+---+---+---+---+---\n");
    printf(" %c | %c | %c | %c | %c | %c | %c | %c | %c | %c \n",plansza[6][0],plansza[6][1],plansza[6][2],plansza[6][3],plansza[6][4],plansza[6][5],plansza[6][6],plansza[6][7],plansza[6][8],plansza[6][9]);
    printf("---+---+---+---+---+---+---+---+---+---\n");
    printf(" %c | %c | %c | %c | %c | %c | %c | %c | %c | %c \n",plansza[7][0],plansza[7][1],plansza[7][2],plansza[7][3],plansza[7][4],plansza[7][5],plansza[7][6],plansza[7][7],plansza[7][8],plansza[7][9]);
    printf("---+---+---+---+---+---+---+---+---+---\n");
    printf(" %c | %c | %c | %c | %c | %c | %c | %c | %c | %c \n",plansza[8][0],plansza[8][1],plansza[8][2],plansza[8][3],plansza[8][4],plansza[8][5],plansza[8][6],plansza[8][7],plansza[8][8],plansza[8][9]);
    printf("---+---+---+---+---+---+---+---+---+---\n");
    printf(" %c | %c | %c | %c | %c | %c | %c | %c | %c | %c \n",plansza[9][0],plansza[9][1],plansza[9][2],plansza[9][3],plansza[9][4],plansza[9][5],plansza[9][6],plansza[9][7],plansza[9][8],plansza[9][9]);
}

int ocena(char plansza[10][10])
{
    int wynik=0;
/// SPRAWDZANIE CZY WYGRANE
    int i,j;
    for(i=0; i<10; i++)
    {
        for(j=0;j<5;j++)
        {
            if((plansza[i][j]=='x')&&(plansza[i][j+1]=='x')&&(plansza[i][j+2]=='x')&&(plansza[i][j+3]=='x')&&(plansza[i][j+4]=='x')) return WYGRANA;
            else if ((plansza[i][j]=='o')&&(plansza[i][j+1]=='o')&&(plansza[i][j+2]=='o')&&(plansza[i][j+3]=='o')&&(plansza[i][j+4]=='o')) return -WYGRANA;

            if((plansza[j][i]=='x')&&(plansza[j+1][i]=='x')&&(plansza[j+2][i]=='x')&&(plansza[j+3][i]=='x')&&(plansza[j+4][i]=='x')) return WYGRANA;
            else if((plansza[j][i]=='o')&&(plansza[j+1][i]=='o')&&(plansza[j+2][i]=='o')&&(plansza[j+3][i]=='o')&&(plansza[j+4][i]=='o')) return -WYGRANA;
        }
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if((plansza[i][j]=='x')&&(plansza[i+1][j+1]=='x')&&(plansza[i+2][j+2]=='x')&&(plansza[i+3][j+3]=='x')&&(plansza[i+4][j+4]=='x')) return WYGRANA;
            else if ((plansza[i][j]=='o')&&(plansza[i+1][j+1]=='o')&&(plansza[i+2][j+2]=='o')&&(plansza[i+3][j+3]=='o')&&(plansza[i+4][j+4]=='o')) return -WYGRANA;

            if((plansza[i+4][j]=='x')&&(plansza[i+3][j+1]=='x')&&(plansza[i+2][j+2]=='x')&&(plansza[i+1][j+3]=='x')&&(plansza[i][j+4]=='x')) return WYGRANA;
            else if ((plansza[i+4][j]=='o')&&(plansza[i+3][j+1]=='o')&&(plansza[i+2][j+2]=='o')&&(plansza[i+1][j+3]=='o')&&(plansza[i][j+4]=='o')) return -WYGRANA;
        }
    }
/// SPRAWDZANIE 4
    for(i=0;i<10;i++)
    {
        for(j=0;j<6;j++)
        {
            if((plansza[i][j]=='x')&&(plansza[i][j+1]=='x')&&(plansza[i][j+2]=='x')&&(plansza[i][j+3]=='x')) wynik+=20;
            else if ((plansza[i][j]=='o')&&(plansza[i][j+1]=='o')&&(plansza[i][j+2]=='o')&&(plansza[i][j+3]=='o')) wynik-=20;

            if((plansza[j][i]=='x')&&(plansza[j+1][i]=='x')&&(plansza[j+2][i]=='x')&&(plansza[j+3][i]=='x')) wynik+=20;
            else if((plansza[j][i]=='o')&&(plansza[j+1][i]=='o')&&(plansza[j+2][i]=='o')&&(plansza[j+3][i]=='o')) wynik-=20;
        }
    }
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            if((plansza[i][j]=='x')&&(plansza[i+1][j+1]=='x')&&(plansza[i+2][j+2]=='x')&&(plansza[i+3][j+3]=='x')) wynik+=20;
            else if ((plansza[i][j]=='o')&&(plansza[i+1][j+1]=='o')&&(plansza[i+2][j+2]=='o')&&(plansza[i+3][j+3]=='o')) wynik-=20;

            if((plansza[i+4][j]=='x')&&(plansza[i+3][j+1]=='x')&&(plansza[i+2][j+2]=='x')&&(plansza[i+1][j+3]=='x')) wynik+=20;
            else if ((plansza[i+4][j]=='o')&&(plansza[i+3][j+1]=='o')&&(plansza[i+2][j+2]=='o')&&(plansza[i+1][j+3]=='o')) wynik-=20;
        }
    }
/// SPRAWDZANIE 3
    for(i=0;i<10;i++)
    {
        for(j=0;j<7;j++)
        {
            if((plansza[i][j]=='x')&&(plansza[i][j+1]=='x')&&(plansza[i][j+2]=='x')) wynik+=7;
            else if ((plansza[i][j]=='o')&&(plansza[i][j+1]=='o')&&(plansza[i][j+2]=='o')) wynik-=7;

            if((plansza[j][i]=='x')&&(plansza[j+1][i]=='x')&&(plansza[j+2][i]=='x')) wynik+=7;
            else if((plansza[j][i]=='o')&&(plansza[j+1][i]=='o')&&(plansza[j+2][i]=='o')) wynik-=7;
        }
    }
    for(i=0;i<7;i++)
    {
        for(j=0;j<7;j++)
        {
            if((plansza[i][j]=='x')&&(plansza[i+1][j+1]=='x')&&(plansza[i+2][j+2]=='x')) wynik+=7;
            else if ((plansza[i][j]=='o')&&(plansza[i+1][j+1]=='o')&&(plansza[i+2][j+2]=='o')) wynik-=7;

            if((plansza[i+4][j]=='x')&&(plansza[i+3][j+1]=='x')&&(plansza[i+2][j+2]=='x')) wynik+=7;
            else if ((plansza[i+4][j]=='o')&&(plansza[i+3][j+1]=='o')&&(plansza[i+2][j+2]=='o')) wynik-=7;
        }
    }
    if(wynik>5)return wynik;
/// SPRAWDZANIE 2
    for(i=0;i<10;i++)
    {
        for(j=0;j<8;j++)
        {
            if((plansza[i][j]=='x')&&(plansza[i][j+1]=='x')&&(plansza[i][j+2]=='x')) wynik+=1;
            else if ((plansza[i][j]=='o')&&(plansza[i][j+1]=='o')&&(plansza[i][j+2]=='o')) wynik-=1;

            if((plansza[j][i]=='x')&&(plansza[j+1][i]=='x')&&(plansza[j+2][i]=='x')) wynik+=1;
            else if((plansza[j][i]=='o')&&(plansza[j+1][i]=='o')&&(plansza[j+2][i]=='o')) wynik-=1;
        }
    }
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            if((plansza[i][j]=='x')&&(plansza[i+1][j+1]=='x')) wynik+=1;
            else if ((plansza[i][j]=='o')&&(plansza[i+1][j+1]=='o')) wynik-=1;

            if((plansza[j][i]=='x')&&(plansza[j+1][i]=='x')) wynik+=1;
            else if ((plansza[j][i]=='o')&&(plansza[j+1][i]=='o')) wynik-=1;
        }
    }
    return wynik;
}

int minimax(char plansza[10][10], int depth, char player, int *x, int *y)
{
    int k,m;
    int remis=1;
    int maxE;
    int minE;
    if((depth==0))
    {
        return ocena(plansza);
    }
    int war;
    if(player=='x')
    {
        maxE = -INF;
        int i;
        for(i=0;i<10;i++)
        {
            int j;
            for(j=0;j<10;j++)
            {
                if(plansza[i][j]==' ')
                {
                    plansza[i][j]='x';
                    war = minimax(plansza, depth-1, 'o', &k,&m);
                    plansza[i][j]= ' ';
                    if(war > maxE)
                    {
                        maxE = war;
                        *x = i;
                        *y = j;
                    }
                }
            }
        }
        return maxE;
    }
    else if(player == 'o')
    {
        minE = INF;
        int i;
        for(i=0;i<10;i++)
        {
            int j;
            for(j=0;j<10;j++)
            {
                if(plansza[i][j]==' ')
                {
                    plansza[i][j]='o';
                    war = minimax(plansza, depth-1, 'x', &k,&m);
                    plansza[i][j]= ' ';

                    if(war < minE)
                    {
                        minE = war;
                    }
                }
            }
        }
        return minE;
    }
}

int main()
{
    char pl[10][10]={' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
                     ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
                     ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
                     ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
                     ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
                     ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
                     ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
                     ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
                     ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
                     ' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};

    int counter = 50;
    int x,y;
    int k,m;
    bool rm = true;

    while(counter)
    {
        k=8;
        m=8;
        minimax(pl,2,'x',&k,&m);
        printf("Komputer: %d %d\n",k,m);
        pl[k][m]='x';
        wypisz(pl);
        if(ocena(pl)==WYGRANA)
        {
            printf("Komputer wygral\n");
            rm = false;
            break;
        }
        printf("Ruch: ");
        scanf("%d %d",&x,&y);
        pl[x][y]='o';
        wypisz(pl);
        if(ocena(pl)==-WYGRANA)
        {
            printf("Wygrales\n");
            rm = false;
            break;
        }

        counter--;
    }
    if(rm)printf("REMIS\n");
    return 0;
}
