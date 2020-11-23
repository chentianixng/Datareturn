#ifndef _VSS_TYPE_H_
#define _VSS_TYPE_H_
#ifdef __cplusplus
extern "C" {
#endif
typedef unsigned char   UINT8;
typedef signed char      SINT8;
typedef char      CHAR8;
typedef unsigned short UINT16;
typedef signed short    SINT16;
typedef unsigned int   UINT32;
typedef signed int      SINT32;
typedef long	INT32;
typedef unsigned char       BOOLEAN;
typedef unsigned long long  UINT64;
typedef unsigned long ULONG;

typedef unsigned int SM3_WORD_T;

typedef struct  {
	UINT32 m_size;	
	UINT8 remain[128];
	UINT32 r_len;		
	SM3_WORD_T iv[8];	
} SM3_CTX_T;


typedef unsigned char BYTE; 
typedef unsigned int  WORD; 

typedef struct {
	BYTE data[64];
	WORD datalen;
	UINT64 bitlen;
	WORD state[8];
} SHA256_CTX;

typedef struct
{
	UINT32 k[2];
} TZucKey;

typedef union
{
	SHA256_CTX shactx;
	SM3_CTX_T sm3ctx;
}THashCtx;

enum{
	FLASH_IO_READ = 0,
	FLASH_IO_WRITE,
};
typedef UINT32 flash_io_cb(UINT32 rwflag, UINT32 offset, UINT8 *buf, UINT32 size);

typedef UINT32 wdt_rst_cb(void);

typedef struct {
	UINT32 alg;
	UINT32 sock;
	UINT32 seq_no;
	UINT32 is_chip;
	UINT8 sk[32];
	UINT8 cert[256];
	UINT8 root[256];
	UINT8 session_key[16];
} FTLS_CTX;


typedef UINT32 someip_io_cb(UINT32 rwflag, UINT8 *buf, UINT32 size, UINT32 timeout);

#ifdef __cplusplus
}
#endif
#endif
