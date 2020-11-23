#ifndef MODULES_MIRRORDATAMANAGER_ENTRY_H
#define MODULES_MIRRORDATAMANAGER_ENTRY_H

namespace atd {
namespace mirrorDataManager {

//return code for file manager or anyone who call uploader to transport
enum EMirrorDataRetCode {
    e_md_uploader_unstarted, //request is trying to get ready to go
    e_md_uploader_busy, //busy with previous transfer
    e_md_uploader_ongoing, //current transfer task is ongoing
    e_md_uploader_finished, //current transfer task is finished
    e_md_uploader_accepted, //current transfer task is accepted 
    e_md_uploader_error,//error happens during transfer is ongoing
    e_md_uploader_all
};

enum EMirrorDataEvt {
    e_tick = 0,
    e_log_trigger,
    e_uploader_conn_built,
    e_uploader_conn_fail,
    e_uploader_conn_disconnected,
    e_uploader_free_timeout,
    e_evt_total
};

template<typename T>
class CFsmBase{
public:
    CFsmBase(unsigned int sts_index, T* obj): m_sts_index(sts_index), m_handlingObj(obj) {}
    virtual unsigned int step(unsigned int evt_index) = 0;
    virtual const unsigned int get_sts() {
        return m_sts_index;
    }
    virtual ~CFsmBase() = default;
    T* m_handlingObj;
private:
    unsigned int m_sts_index;
};

}// namespace mirrorDataManager
}// namespace atd
#endif