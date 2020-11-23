
typedef unsigned char uint8;
typedef unsigned short uint16;
typedef bool boolean;
typedef uint8 Dt_BOOL; 
typedef uint16 UINT_GAP_16; 

typedef struct _Dt_RECORD_BMS_HSC1_FrP11
{
  boolean BMSOnbdChrgrPlugOn_h1HSC1;
  boolean BMSOfbdChrgrPlugOn_h1HSC1;
  UINT_GAP_16 PaddingGap16_1;
} Dt_RECORD_BMS_HSC1_FrP11; 

void Rte_Read_CtApMirrorDataManager_FreeRunning_PpCOM_BMS_HSC1_100ms_DeBMS_HSC1_FrP11 (Dt_RECORD_BMS_HSC1_FrP11* data)
{

}
void Rte_Receive_CtApMirrorDataManager_FreeRunning_PpDiagGlobalRead_DeFSPCleared (Dt_BOOL*  data)
{

}
void stub_init()
{
}
unsigned int write_proto_stub(void* data, unsigned int len, const char* file_name, unsigned char close_flag)
{

}