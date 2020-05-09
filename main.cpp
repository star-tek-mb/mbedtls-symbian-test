// This is a GCCE toolchain workaround needed when compiling with GCCE
// and using main() entry point
#ifdef __GCCE__
#include <staticlibinit_gcce.h>
#endif

#include <stdlib.h>
#include <stdio.h>
#include "mbedtls/md5.h"


int main( void )
{
    int i, ret;
    unsigned char digest[16];
    char str[] = "Hello, world!";

    printf( "\n  MD5('%s') = ", str );

    if( ( ret = mbedtls_md5_ret( (unsigned char *) str, 13, digest ) ) != 0 )
        return 1;

    for( i = 0; i < 16; i++ )
        printf( "%02x", digest[i] );

    printf( "\n\n" );

    printf( "  Press Enter to exit this program.\n" );
    getchar();

    return 0;
}