// Partially done
// One test case not satisfied 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct req{
	int a;
	int b;
	int c;
	int served;
} req;

int cmp1(const void *a, const void *b) {
	return ( (*(req *)b).a - (*(req *)a).a );
}

int cmp2(const void *a, const void *b) {
	 return ( (*(req *)b).b - (*(req *)a).b );
}

int cmp3(const void *a, const void *b) {
       	return ( (*(req *)b).c - (*(req *)a).c );
}

int main() {
	int a,b,c,i,j,k;
	int m;
	int ch[3]={0};
	scanf("%d%d%d",&a,&b,&c);
	scanf("%d",&m);
	int num_served = 0;
	req r[1001];
	for(i=0;i<1001;i++) {
		r[i].a=0;r[i].b=0;r[i].c=0;
		r[i].served=0;
	}
    
    for(i=0;i<m;i++) {
		char s[10];
		scanf("%s",s);
		int j=0;
        for(j=0;j<strlen(s);j++) {
			if(s[j]=='A') {
                r[i].a++;
            } else if (s[j]=='B') {
                r[i].b++;
            } else if (s[j]=='C') {
                r[i].c++;
            }
        }
    }
    if(a>b && a>c) {qsort(r,m,sizeof(req),cmp1);}
    else if(b>a && b>c) {qsort(r,m,sizeof(req),cmp2);}
    else if(c>a && c>b) {qsort(r,m,sizeof(req),cmp3);}
            

	for(i=0;i<m;i++) {
		a -= r[i].a;
        b -= r[i].b;
        c -= r[i].c;

		if(a < 0) {
            a += r[i].a;
            b += r[i].b;
            c += r[i].c;
            r[i].served = 1;
        } else if(b < 0) {
            a += r[i].a;
            b += r[i].b;
            c += r[i].c;
            r[i].served = 1;
        }else if( c < 0) {
            a += r[i].a;
            b += r[i].b;
            c += r[i].c;
            r[i].served =1;
        }
	}
    

	for(i=0;i<m;i++) {
        //printf("%d %d %d \n",r[i].a,r[i].b,r[i].c);
		if(!r[i].served) {
			num_served++;
		}
	}
	printf("%d\n",num_served);
	return 0;
}

