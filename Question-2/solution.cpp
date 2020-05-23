#include <algorithm>
#include <cstdio>

using namespace std;

int main()
{
   char k1[31], k2[31], rez[61];
   int n1, n2, t, P, i;

   scanf("%d%d", &n1, &n2);
   scanf("%s%s", k1, k2);
   scanf("%d", &t);

   for(i=0;i<n1;i++)
   {
      P = n1-i-1;
      P += min( max(t-i,0), n2 );
      rez[P] = k1[i];
   }
   for(i=0;i<n2;i++)
   {
      P = n1+i;
      P -= min( max(t-i,0), n1 );
      rez[P] = k2[i];
   }
   rez[n1+n2] = '\0';
   printf("%s\n",rez);

   return 0;
}