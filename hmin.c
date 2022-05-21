#include <stdio.h>
#include <math.h>
#define G 9.81
#define U 0.35
#define R 0.39
#define N 50000

double VelocidadeAnterior(double vel_pos, double teta)
{
    double produto3, produto4, soma, soma1, velo_ant, cos_tpos, cos_tant, delta_teta= M_PI/N;


    soma1=teta-delta_teta;
    cos_tpos= cos(teta);
    cos_tant= cos(soma1);
    produto3= 2.0*R*G*((cos_tpos-cos_tant)*(-1.0)+ U*cos_tpos*M_PI/N);
    produto4= (vel_pos*vel_pos)*(1.00 + (U *M_PI*2.0/N));
    soma= produto3+produto4;
    velo_ant= sqrt(soma);

    return (velo_ant);
}
int main()
{
    double velocidade, hmin, produto, vel_pos, vel_ant, teta=M_PI, delta_teta= M_PI/N;
    int i;
    produto= R*G;
    velocidade= sqrt(produto);
    vel_pos=velocidade;
    printf("velocidade esperada no ponto mais alto do loop: %lf\n",velocidade);

    for(i=0; i< N; i++ ){

    vel_ant= VelocidadeAnterior(vel_pos, teta);
    vel_pos=vel_ant;
     teta-= delta_teta;

    }
    hmin= (vel_ant*vel_ant)/(2.00*G);
    printf(" a altura min inicial para concluir o loop e %lf e velocidade ao iniciar o loop e %lf\n", hmin, vel_ant);
    printf("%d\n", i);
    return 0;
}
