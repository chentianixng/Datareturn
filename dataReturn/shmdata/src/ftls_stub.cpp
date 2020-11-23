#include "vssapi.h"
#include "vsstype.h"

#include <stdio.h>
#include <sys/types.h> 
#include <sys/stat.h>  
#include <fcntl.h>
#include <errno.h>
#include <string.h>

UINT32 FTLS_write(FTLS_CTX* ctx, UINT8* data, UINT32 len){
    printf("FTLS_write star.........\n\n");
    usleep(10000);
    int size = write(ctx->sock, data, len);
    if(size < 0){
        printf("write error: %s\n",strerror(errno));
    }
    printf("size %d ctx->sock = %d   len = %d\n",size , ctx->sock, len);

    printf("FTLS_write end.......\n\n");
    return 0;
}
UINT32 FTLS_ctx_init(FTLS_CTX* ctx, UINT32 sock, UINT8* sk, UINT32 sklen, UINT8* cert, UINT32 certlen, UINT8* rcert, UINT32 rcertlen, someip_io_cb* someipCb){
    ctx->sock = sock;
    
    return 0;
}
UINT32 FTLS_connect(FTLS_CTX* ctx){
    return 0;
}
