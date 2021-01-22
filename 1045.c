#include <stdio.h>
#include <math.h>

int main(){
    float l[3], a_verdadeiro = 0, b_verdadeiro = 0, c_verdadeiro = 0;
    scanf("%f %f %f", &l[0], &l[1], &l[2]);
	if (l[0] >= l[1] && l[0] >= l[2]){
        a_verdadeiro = l[0]; b_verdadeiro = l[1]; c_verdadeiro = l[2];
    }
    else if (l[1] >= l[0] && l[1] >= l[2]){
        a_verdadeiro = l[1]; b_verdadeiro = l[2]; c_verdadeiro = l[0];
    }
    else if (l[2] >= l[0] && l[2] >= l[1]){
        a_verdadeiro = l[2]; b_verdadeiro = l[1]; c_verdadeiro = l[0];
    }
    if (a_verdadeiro>=b_verdadeiro+c_verdadeiro) printf("NAO FORMA TRIANGULO\n");
    else{
        if (pow(a_verdadeiro, 2)==pow(b_verdadeiro, 2)+pow(c_verdadeiro, 2)) printf("TRIANGULO RETANGULO\n");
        if (pow(a_verdadeiro, 2)>pow(b_verdadeiro, 2)+pow(c_verdadeiro, 2)) printf("TRIANGULO OBTUSANGULO\n");
        if (pow(a_verdadeiro, 2)<pow(b_verdadeiro, 2)+pow(c_verdadeiro, 2)) printf("TRIANGULO ACUTANGULO\n");
        if (a_verdadeiro==b_verdadeiro&&b_verdadeiro==c_verdadeiro) printf("TRIANGULO EQUILATERO\n");
        else if (a_verdadeiro==b_verdadeiro||b_verdadeiro==c_verdadeiro||c_verdadeiro==a_verdadeiro) printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}