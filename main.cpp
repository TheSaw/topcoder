#include <iomanip>
#include <iostream>
#include <vector>

#include "Aaagmnrs.h"

int main()
{
    std::vector<std::string> v = { "kLKDQmAceVRs izrh VJciOO utzWjoUbTv", "bKzk qhvJV TI mRVToeDluCscoU joia rWz", "vwkHezr jMvBTcoO iVJAuCT OlziKrdSU Q", "efJ qdXaplBj", "rla vE U tJbK czVqjT Kw vOdoz OM ciHu rs I", "bCurOkVUoz zv tEA ViJrj dTQMLi OwkHcS", "U", " f EP x DJ la q b J ", "rSEFb JuPwXW rIrVC sUufuOnmpO gXgYbXPvISNGPk", " Mfn xZkPrnth JxPusO HqSkBirrbrpFJFhq Sx cI itrI", "u ", " iNBbPhjRp frushZKOTNRPmfRXI qIsQRXfjS ChtkXi ", "juier zIs B qj tmO oCKk vvdlco tr huazwV", "PfS HKzBtNi rxPcFthukiS hXxNQPfJobjMrR RIQSri", "qqxrckpiXjUHNIbrBFShRos rZiFJTPRmkTxphFSin", "o LD NUCNaFp xOe ", "jKctLeJBBnPJCjzW jKggMyvpba ZW ", "wKoAwBBhYMeWsM iGt U cYwjEtGR gLBsBbui wJkYi c", "Eah KR Tjoo IMRv CBvu UQlz voti zcsKj wd", " U ", "gbwkmWbo WwsigCt ueKWIIaY Y HMyjecsLBg BTuJbR", "IqKv zW WeaJRG s GNhzA ynf eYFvEX kdAf jxSE RdrGP", " U ", " u ", "teMlHkQuaXL", "WiLoeRAv wCOZ mgxNEyJyaT ZEC", "zzgAyFvCWhXia V wQ iyohkhYSrXIgswQNYPY l ", " u ", "M FCirWB SosFBMStxNOligvENhmjgaPnCow MOTntJiNAhazr", "pKiMqzqfoCiZe j UIblLtIgRHje g LYhXajoOPJ", "u", " ol FGYRQzIQUBHUCr YPfPTqgjsB iEKJBkyFmZkpf", "pcx c jXjN IuCBHqVCHodppfsivbdbmHmSvQNUfHW", "m jDjdg hRjmbq rBJXAKYNOS iPXG e", "McIekVDsg BJRSTQAVkokVMVkbQ U ", " U ", "xJRICQHSWcIMV oCylWPgSQZORPtZ", "XPnsBCXkR M s JprRftiRfsfIHoHuNr jpBXiIqzKQTh", "oWBuCvVe DamzI OrhIzvQK jOJT k lrtcSu", "mh umkwhfaG iTrBTsb gsa" };

    Aaagmnrs A;
    auto ret = A.anagrams(v);

    for (auto a : ret)
    {
        std::cout << a << std::endl;
    }
}