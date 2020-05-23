#include <algorithm>
#include <cstdio>

using namespace std;

#define MAXN 400

int main()
{
   int r, s;
   scanf( "%d%d", &r, &s );

   static char ploca[MAXN][MAXN+1];
   for ( int i=0; i<r; ++i )
      scanf( "%s", ploca[i] );

   static int sum[MAXN][MAXN+1];
   for ( int i=0; i<r; ++i ) {
      sum[i][0] = 0;
      for ( int j=1; j<=s; ++j )
         sum[i][j] = sum[i][j-1] + ( ploca[i][j-1] == 'X' );
   }

   int rez = 0;
   for ( int s1=1; s1<=s; ++s1 )
      for ( int s2=s1; s2<=s; ++s2 ) {
         int sad = 0, najdulje = 0;
         for ( int i=0; i<r; ++i ) {
            if ( sum[i][s2] - sum[i][s1-1] == 0 ) {
               if ( ++sad > najdulje ) {
                  najdulje = sad;
               }
            }
            else {
               sad = 0;
            }
         }

         if ( najdulje > 0 ) {
            rez = max( rez, 2*najdulje + 2*(s2-s1+1) );
         }
      }

   printf( "%d\n", rez-1 );

   return 0;
}