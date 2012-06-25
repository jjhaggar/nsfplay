#ifndef _NES_FDS_H_
#define _NES_FDS_H_
#include "../device.h"
#include "counter.h"

namespace xgm
{
  class TrackInfoFDS : public TrackInfoBasic
  {
  public:
    INT16 wave[64];
    virtual IDeviceInfo *Clone(){ return new TrackInfoFDS(*this); }
  };

  class NES_FDS : public ISoundChip
  {
  public:
    enum
    { OPT_MOD_PHASE_REFRESH=0, OPT_CAR_PHASE_REFRESH, OPT_USE_PWM, OPT_END };
  protected:
    int option[OPT_END];
    int mask;
    INT32 sm[2]; // BS stereo mix
    double clock, rate;
    bool write_enable[2];
    bool envelope_disable;
    bool sound_disable;

    double ecounter[2];
    double ecounter_incr[2];
    UINT32 envelope_output[2];
    UINT32 envelope_mode[2];
    UINT32 envelope_amount[2];
    UINT32 envelope_speed;

    Counter ccounter;

    INT32 opout[2];
    INT32 opval[2];
    UINT8 reg[0x100];

    TrackInfoFDS trkinfo;

    /* var[0] = Carrior, var[1] = modulator */
    double geta;
    UINT32 freq[2];
    double incr[2];
    UINT32 phase[2];
    double pcounter[2];
    INT8 wave[2][64];
    UINT32 volume;
    UINT32 wavidx;
    INT32 calc ();
    void update_envelope (int ch);

  public:
      NES_FDS ();
      virtual ~ NES_FDS ();

    void Reset ();
    bool Write (UINT32 adr, UINT32 val, UINT32 id=0);
    bool Read (UINT32 adr, UINT32 & val, UINT32 id=0);
    UINT32 Render (INT32 b[2]);
    void SetRate (double);
    void SetClock (double);
    void SetOption (int, int);
    void SetMask(int m){ mask = m&1; }
    void SetStereoMix (int trk, xgm::INT16 mixl, xgm::INT16 mixr);
    ITrackInfo *GetTrackInfo(int trk);
  };

}                               // namespace

#endif
