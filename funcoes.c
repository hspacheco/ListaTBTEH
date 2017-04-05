#include <stdio.h>

int soma(int a, int b){
    return(a+b);
}

float opera(float a, float b, int n){
    if(n == 0) return(a + b);
    if(n == 1) return(a - b);
    if(n == 2) return(a * b);
    if(n == 3) return(a / b);
}

int divisores (int x, int V[]){
	int i,cont = 0;
	for(i=0;i<4;i++){
		if(x%V[i] == 0){
			cont++;
		}
	}
	return (cont);
}

int converte(int v[],int x){
    int i,decimal=0,copia = x;

    for(i=0;i<copia;i++){
        x--;
        decimal = decimal + (v[i] * pow(2,x));
    }

    return (decimal);
}

float compoe(int n, float z){
      while(z>1){
        z = z * 0.1;
      }
      return (n+z);
}

int maior_de_dois (int x, int y){
    if(x>y) return x;
    else return y;
}

int menor_de_tres (int x, int y, int z){
    if (x<y && x<z) return x;
    else if (y<x && y<z) return y;
         else return z;
}

int maior_de_quatro(int k,int l,int m,int n){
    if(k>l && k>m && k>n) return k;
    else if (l>k && l>m && l>n) return l;
         else if (m>k && m>l && m>n) return m;
              else return n;
}

int maior_de_todos(int v[], int x){
    int i,maior=0;
    for(i=0;i<x;i++){
        if(v[i]>v[i+1] && v[i]>maior){
            maior = v[i];
        }
    }
    return maior;
}

int existe (int v[], int m, int x){
    int i,contador=0;
    for(i=0;i<m;i++){
        if(v[i]==x){
            contador++;
        }
    }
    return (contador);
}

int conjuntos_iguais(int v[], int v1[], int x){
    int z,i,contador=0;
    for(z=0;z<x;z++){
        for(i=0;i<x;i++){
            if(v[i] == v1[z]) contador++;
        }
    }

   if(contador == x) printf("MESMOS ELEMENTOS");
   else printf("N SAO OS MSMS ELEMENTOS");
}

int rodada_palitinhos(int v[], int v1[], int x){
    int i,qntpalitos=0;

    for(i=0;i<x;i++){
        qntpalitos = qntpalitos + v[i];
    }

    for(i=0;i<x;i++){
        if(qntpalitos == v1[i])
            return (i+1);
    }

    return (-1);
}

void diagonal_invertida(int matriz[10][10]){

    int matcop[][] = {};
    int k,j;

    for(k=0;k<10;k++){
        printf("%\n");
        for(j=0;j<10;j++){
        printf("%d ", matriz[k][j]);
        matcop[j][k] = matriz[k][j];
        }
    }

printf("\n");

    for(j=0;j<10;j++){
        printf("\n");
        for(k=0;k<10;k++){
        printf("%d ", matcop[j][k]);
        }
    }

}

void calcula_media(int [][3], float v[], int n){
    int i,k;

    for(i=0;i<n;i++){
        v[i]=0;
        for(k=0;k<3;k++){
            v[i] = v[i]+matriz[i][k];
        }
        v[i] = v[i]/3;
    }

    for(i=0;i<n;i++) printf("%.2f\n", v[i]);

}


