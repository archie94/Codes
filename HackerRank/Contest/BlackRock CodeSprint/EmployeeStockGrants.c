#include <stdio.h>
#include <stdlib.h>

int main() {
	long long n,r[100001],m[100001],i,j,k;
	scanf("%lld",&n);
	for(i=0;i<n;i++) {
		scanf("%lld",&r[i]);
	}
	for(i=0;i<n;i++) {
		scanf("%lld",&m[i]);
	}
	for(i=0;i<n;i++) {
		k=10;
		/*for(j=i-1;j>=0 && k;j--,k--) {
			if(r[i]>r[j] && m[i]<=m[j]) {
				m[i] = m[j] + 1;
			} else if (r[i]<r[j] && m[i]>=m[j]) {
				m[j] = m[i] + 1;
			}
		}*/
		for(k=-10;k<=10;k++)
                {
                  if(r[i]>r[i+k]&&(i+k)>=0&&(i+k)<=n-1)
                      {  
                      if(m[i]<=m[i+k])
                          while(m[i]<=m[i+k])
                           m[i]++;
                	}
                }	
	}
	for(i=n-1;i>=0;i--) {
		/*k=10;
		for(j=i+1;j<n && k;k--,j++) {
			if(r[i]>r[j] && m[i]<=m[j]) {
				m[i] = m[j] + 1;
			 } else if (r[i]<r[j] && m[i]>=m[j]) {
				 m[j] = m[i] + 1;
			 }
		}*/
		for(k=-10;k<=10;k++)
                {
                  if(r[i]>r[i+k]&&(i+k)>=0&&(i+k)<=n-1)
                      {  
                      if(m[i]<=m[i+k])
                          while(m[i]<=m[i+k])
                           m[i]++;
                	}
                }
		
	}

	long long sum = 0;
	for(i=0;i<n;i++) {
		sum+=m[i];
		//printf("%lld ",m[i]);
	}
	printf("%lld\n",sum);
	return 0;
}

